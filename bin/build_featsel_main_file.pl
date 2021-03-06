#!/usr/bin/perl -w 

#
# build_featsel_main_file.pl : program to generate the featsel main file taking
#                              into account the current set of available 
#                              algorithms and cost functions.
#
#    This file is part of the featsel program
#    Copyright (C) 2016  Marcelo S. Reis
#
#    This program is free software: you can redistribute it and/or modify
#    it under the terms of the GNU General Public License as published by
#    the Free Software Foundation, either version 3 of the License, or
#    (at your option) any later version.
#
#    This program is distributed in the hope that it will be useful,
#    but WITHOUT ANY WARRANTY; without even the implied warranty of
#    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
#    GNU General Public License for more details.
#
#    You should have received a copy of the GNU General Public License
#    along with this program.  If not, see <http://www.gnu.org/licenses/>.
#

use strict;

my $date_string = localtime ();

#------------------------------------------------------------------------------#
# First, we load the lists of algorithms and cost functions.
#
my $list_of_cost_functions_file = "ListOfCostFunctions.txt";
my $list_of_algorithms_file = "ListOfAlgorithms.txt";

open (LIST, $list_of_cost_functions_file) or 
  die "Error: could not open $list_of_cost_functions_file for reading!\n";

my @list_of_function_codes;
my @list_of_function_class_names;

while (<LIST>)
{
  chomp $_;
  if ($_ =~ /^\s*(\w+)\s+(\w+)\s+.*/) # $1 == code, $2 == class name
  {  
    push @list_of_function_codes, $1;
    push @list_of_function_class_names, $2; 
  }
  elsif ($_ =~ /^\s*$/)
  {
    # Blank line; do nothing.
  }
  else
  {
    die "Error: could not parse line of $list_of_cost_functions_file!\n";
  }
}

close (LIST);

open (LIST, $list_of_algorithms_file) or 
  die "Error: could not open $list_of_algorithms_file for reading!\n";

my @list_of_algorithm_codes;
my @list_of_algorithm_class_names;

while (<LIST>)
{
  chomp $_;
  if ($_ =~ /^\s*(\w+)\s+(\w+)\s*$/) # $1 == code, $2 == class name
  {  
    push @list_of_algorithm_codes, $1;
    push @list_of_algorithm_class_names, $2; 
  }
  elsif ($_ =~ /^\s*$/)
  {
    # Blank line; do nothing.
  }
  else
  {
    die "Error: could not parse line of $list_of_algorithms_file!\n";
  }
}

close (LIST);

#------------------------------------------------------------------------------#

# Now we update featsel.cpp
#
open (IN, "src/featsel.tpp") or die "Could not open featsel.tpp!\n";
open (OUT, ">src/featsel.cpp") or die "Could not open featsel.cpp!\n";

printf OUT "// featsel.cpp automatically generated by $0\n" .
           "// in $date_string.\n\n";

while (<IN>)
{
  if ($_ =~ /\<COST\s+FUNCTION\s+TEMPLATE\s+1\>/)
  {
    foreach my $class_name (@list_of_function_class_names)
    {
      print OUT "#include \"functions/$class_name.h\"\n";
    }
  }
  elsif ($_ =~ /\<ALGORITHM\s+TEMPLATE\s+1\>/)
  {
    foreach my $class_name (@list_of_algorithm_class_names)
    {
      print OUT "#include \"algorithms/$class_name.h\"\n";
    }
  }
  elsif ($_ =~ /\<COST\s+FUNCTION\s+TEMPLATE\s+2\>/)
  {
    foreach my $index (0..$#list_of_function_codes)
    {
      printf OUT "  else if (a_cost_function.compare (\"%s\") == 0)\n",
        $list_of_function_codes[$index];
      printf OUT "    cost_function = new %s (S);\n", 
        $list_of_function_class_names[$index];
    }
  }
  elsif ($_ =~ /\<ALGORITHM\s+TEMPLATE\s+2\>/)
  {
    foreach my $index (0..$#list_of_algorithm_codes)
    {
      printf OUT "  else if (algorithm.compare (\"%s\") == 0)\n",
        $list_of_algorithm_codes[$index];
      if ($list_of_algorithm_codes[$index] eq "pucs")
      {
        printf OUT "    solver = new PUCS (p, l);\n",   
      }
      else
      {
        printf OUT "    solver = new %s ();\n", 
          $list_of_algorithm_class_names[$index];
      }
    }
  }
  elsif ($_ =~ /\<COST\s+FUNCTION\s+TEMPLATE\s+3\>/)
  {
    foreach my $code (@list_of_function_codes)
    {
      print OUT "          || (strcmp (argv[i], \"$code\") == 0)\n";
    }
  }
  elsif ($_ =~ /\<ALGORITHM\s+TEMPLATE\s+3\>/)
  {
    foreach my $code (@list_of_algorithm_codes)
    {
      print OUT "          || (strcmp (argv[i], \"$code\") == 0)\n";
    }
  }
  else
  {
    print OUT $_;
  }
}

close (IN);
close (OUT);

#------------------------------------------------------------------------------#

# End of execution.
#
exit 0;   

//
// %template%.cpp -- implementation of the class "%template%".
//
//    This file is part of the featsel program
//    Copyright (C) 2016  Marcelo S. Reis
//
//    This program is free software: you can redistribute it and/or modify
//    it under the terms of the GNU General Public License as published by
//    the Free Software Foundation, either version 3 of the License, or
//    (at your option) any later version.
//
//    This program is distributed in the hope that it will be useful,
//    but WITHOUT ANY WARRANTY; without even the implied warranty of
//    MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
//    GNU General Public License for more details.
//
//    You should have received a copy of the GNU General Public License
//    along with this program.  If not, see <http://www.gnu.org/licenses/>.
//

#include "%template%.h"


%template%::%template% (ElementSet * a_set)
{
  set = a_set;
}


%template%::~%template% ()
{
  // Empty destructor.
}


float %template%::cost (ElementSubset * X)
{
  timeval begin, end;
  gettimeofday (& begin, NULL);

  float cost = -1; // This value will make it fail in the empty set
                   // unit test, which should return zero.

  number_of_calls_of_cost_function++;

  if (set->get_set_cardinality () == 0)
    return 0;

  //

  // TODO: [ADD YOUR COST FUNCTION CODE HERE!]

  //

  gettimeofday (& end, NULL);
  elapsed_time_of_all_calls_of_the_cost_function += diff_us (end, begin);

  // Threshold is a maximum number of calls of the cost function
  //
  if ((has_max_number_of_calls_set) &&
      (number_of_calls_of_cost_function >=
       max_number_of_calls_of_cost_function))
    reached_threshold = true;

  return cost;
}

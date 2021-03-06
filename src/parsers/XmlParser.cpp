// A Bison parser, made by GNU Bison 3.0.2.

// Skeleton implementation for Bison LALR(1) parsers in C++

// Copyright (C) 2002-2013 Free Software Foundation, Inc.

// This program is free software: you can redistribute it and/or modify
// it under the terms of the GNU General Public License as published by
// the Free Software Foundation, either version 3 of the License, or
// (at your option) any later version.

// This program is distributed in the hope that it will be useful,
// but WITHOUT ANY WARRANTY; without even the implied warranty of
// MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
// GNU General Public License for more details.

// You should have received a copy of the GNU General Public License
// along with this program.  If not, see <http://www.gnu.org/licenses/>.

// As a special exception, you may create a larger work that contains
// part or all of the Bison parser skeleton and distribute that work
// under terms of your choice, so long as that work isn't itself a
// parser generator using the skeleton or a modified version thereof
// as a parser skeleton.  Alternatively, if you modify or redistribute
// the parser skeleton itself, you may (at your option) remove this
// special exception, which will cause the skeleton and the resulting
// Bison output files to be licensed under the GNU General Public
// License without this special exception.

// This special exception was added by the Free Software Foundation in
// version 2.2 of Bison.


// First part of user declarations.

#line 37 "src/parsers/XmlParser.cpp" // lalr1.cc:399

# ifndef YY_NULLPTR
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULLPTR nullptr
#  else
#   define YY_NULLPTR 0
#  endif
# endif

#include "XmlParser.hpp"

// User implementation prologue.

#line 51 "src/parsers/XmlParser.cpp" // lalr1.cc:407
// Unqualified %code blocks.
#line 53 "src/parsers/XmlParser.yy" // lalr1.cc:408

  #include "XmlParserDriver.h"
  std::stringstream out;
  pair <map <string, float>::iterator,bool> ret;

#line 59 "src/parsers/XmlParser.cpp" // lalr1.cc:408


#ifndef YY_
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> // FIXME: INFRINGES ON USER NAME SPACE.
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K].location)
/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

# ifndef YYLLOC_DEFAULT
#  define YYLLOC_DEFAULT(Current, Rhs, N)                               \
    do                                                                  \
      if (N)                                                            \
        {                                                               \
          (Current).begin  = YYRHSLOC (Rhs, 1).begin;                   \
          (Current).end    = YYRHSLOC (Rhs, N).end;                     \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).begin = (Current).end = YYRHSLOC (Rhs, 0).end;      \
        }                                                               \
    while (/*CONSTCOND*/ false)
# endif


// Suppress unused-variable warnings by "using" E.
#define YYUSE(E) ((void) (E))

// Enable debugging if requested.
#if YYDEBUG

// A pseudo ostream that takes yydebug_ into account.
# define YYCDEBUG if (yydebug_) (*yycdebug_)

# define YY_SYMBOL_PRINT(Title, Symbol)         \
  do {                                          \
    if (yydebug_)                               \
    {                                           \
      *yycdebug_ << Title << ' ';               \
      yy_print_ (*yycdebug_, Symbol);           \
      *yycdebug_ << std::endl;                  \
    }                                           \
  } while (false)

# define YY_REDUCE_PRINT(Rule)          \
  do {                                  \
    if (yydebug_)                       \
      yy_reduce_print_ (Rule);          \
  } while (false)

# define YY_STACK_PRINT()               \
  do {                                  \
    if (yydebug_)                       \
      yystack_print_ ();                \
  } while (false)

#else // !YYDEBUG

# define YYCDEBUG if (false) std::cerr
# define YY_SYMBOL_PRINT(Title, Symbol)  YYUSE(Symbol)
# define YY_REDUCE_PRINT(Rule)           static_cast<void>(0)
# define YY_STACK_PRINT()                static_cast<void>(0)

#endif // !YYDEBUG

#define yyerrok         (yyerrstatus_ = 0)
#define yyclearin       (yyempty = true)

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab
#define YYRECOVERING()  (!!yyerrstatus_)


namespace yy {
#line 145 "src/parsers/XmlParser.cpp" // lalr1.cc:474

  /* Return YYSTR after stripping away unnecessary quotes and
     backslashes, so that it's suitable for yyerror.  The heuristic is
     that double-quoting is unnecessary unless the string contains an
     apostrophe, a comma, or backslash (other than backslash-backslash).
     YYSTR is taken from yytname.  */
  std::string
   XmlParser ::yytnamerr_ (const char *yystr)
  {
    if (*yystr == '"')
      {
        std::string yyr = "";
        char const *yyp = yystr;

        for (;;)
          switch (*++yyp)
            {
            case '\'':
            case ',':
              goto do_not_strip_quotes;

            case '\\':
              if (*++yyp != '\\')
                goto do_not_strip_quotes;
              // Fall through.
            default:
              yyr += *yyp;
              break;

            case '"':
              return yyr;
            }
      do_not_strip_quotes: ;
      }

    return yystr;
  }


  /// Build a parser object.
   XmlParser :: XmlParser  (XmlParserDriver& driver_yyarg)
    :
#if YYDEBUG
      yydebug_ (false),
      yycdebug_ (&std::cerr),
#endif
      driver (driver_yyarg)
  {}

   XmlParser ::~ XmlParser  ()
  {}


  /*---------------.
  | Symbol types.  |
  `---------------*/

  inline
   XmlParser ::syntax_error::syntax_error (const location_type& l, const std::string& m)
    : std::runtime_error (m)
    , location (l)
  {}

  // basic_symbol.
  template <typename Base>
  inline
   XmlParser ::basic_symbol<Base>::basic_symbol ()
    : value ()
  {}

  template <typename Base>
  inline
   XmlParser ::basic_symbol<Base>::basic_symbol (const basic_symbol& other)
    : Base (other)
    , value ()
    , location (other.location)
  {
    value = other.value;
  }


  template <typename Base>
  inline
   XmlParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const semantic_type& v, const location_type& l)
    : Base (t)
    , value (v)
    , location (l)
  {}


  /// Constructor for valueless symbols.
  template <typename Base>
  inline
   XmlParser ::basic_symbol<Base>::basic_symbol (typename Base::kind_type t, const location_type& l)
    : Base (t)
    , value ()
    , location (l)
  {}

  template <typename Base>
  inline
   XmlParser ::basic_symbol<Base>::~basic_symbol ()
  {
  }

  template <typename Base>
  inline
  void
   XmlParser ::basic_symbol<Base>::move (basic_symbol& s)
  {
    super_type::move(s);
    value = s.value;
    location = s.location;
  }

  // by_type.
  inline
   XmlParser ::by_type::by_type ()
     : type (empty)
  {}

  inline
   XmlParser ::by_type::by_type (const by_type& other)
    : type (other.type)
  {}

  inline
   XmlParser ::by_type::by_type (token_type t)
    : type (yytranslate_ (t))
  {}

  inline
  void
   XmlParser ::by_type::move (by_type& that)
  {
    type = that.type;
    that.type = empty;
  }

  inline
  int
   XmlParser ::by_type::type_get () const
  {
    return type;
  }


  // by_state.
  inline
   XmlParser ::by_state::by_state ()
    : state (empty)
  {}

  inline
   XmlParser ::by_state::by_state (const by_state& other)
    : state (other.state)
  {}

  inline
  void
   XmlParser ::by_state::move (by_state& that)
  {
    state = that.state;
    that.state = empty;
  }

  inline
   XmlParser ::by_state::by_state (state_type s)
    : state (s)
  {}

  inline
   XmlParser ::symbol_number_type
   XmlParser ::by_state::type_get () const
  {
    return state == empty ? 0 : yystos_[state];
  }

  inline
   XmlParser ::stack_symbol_type::stack_symbol_type ()
  {}


  inline
   XmlParser ::stack_symbol_type::stack_symbol_type (state_type s, symbol_type& that)
    : super_type (s, that.location)
  {
    value = that.value;
    // that is emptied.
    that.type = empty;
  }

  inline
   XmlParser ::stack_symbol_type&
   XmlParser ::stack_symbol_type::operator= (const stack_symbol_type& that)
  {
    state = that.state;
    value = that.value;
    location = that.location;
    return *this;
  }


  template <typename Base>
  inline
  void
   XmlParser ::yy_destroy_ (const char* yymsg, basic_symbol<Base>& yysym) const
  {
    if (yymsg)
      YY_SYMBOL_PRINT (yymsg, yysym);

    // User destructor.
    switch (yysym.type_get ())
    {
            case 22: // "string value"

#line 88 "src/parsers/XmlParser.yy" // lalr1.cc:599
        { delete (yysym.value.sval); }
#line 364 "src/parsers/XmlParser.cpp" // lalr1.cc:599
        break;


      default:
        break;
    }
  }

#if YYDEBUG
  template <typename Base>
  void
   XmlParser ::yy_print_ (std::ostream& yyo,
                                     const basic_symbol<Base>& yysym) const
  {
    std::ostream& yyoutput = yyo;
    YYUSE (yyoutput);
    symbol_number_type yytype = yysym.type_get ();
    yyo << (yytype < yyntokens_ ? "token" : "nterm")
        << ' ' << yytname_[yytype] << " ("
        << yysym.location << ": ";
    switch (yytype)
    {
            case 3: // "open ElementSet"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 391 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 4: // "close ElementSet"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 398 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 5: // "open SetName"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 405 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 6: // "close SetName"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 412 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 7: // "open SetValue"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 419 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 8: // "close SetValue"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 426 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 9: // "open NumberOfElements"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 433 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 10: // "close NumberOfElements"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 440 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 11: // "open MaxNumberOfElementValues"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 447 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 12: // "close MaxNumberOfElementValues"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 454 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 13: // "open Element"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 461 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 14: // "close Element"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 468 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 15: // "open Cost"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 475 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 16: // "close Cost"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 482 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 17: // "open name"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 489 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 18: // "close name"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 496 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 19: // "open value"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 503 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 20: // "close value"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 510 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 21: // "XML header"

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 517 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 22: // "string value"

#line 87 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << *(yysym.value.sval); }
#line 524 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 27: // set

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 531 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 28: // element

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 538 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;

      case 30: // value

#line 89 "src/parsers/XmlParser.yy" // lalr1.cc:617
        { debug_stream () << (yysym.value.sval); }
#line 545 "src/parsers/XmlParser.cpp" // lalr1.cc:617
        break;


      default:
        break;
    }
    yyo << ')';
  }
#endif

  inline
  void
   XmlParser ::yypush_ (const char* m, state_type s, symbol_type& sym)
  {
    stack_symbol_type t (s, sym);
    yypush_ (m, t);
  }

  inline
  void
   XmlParser ::yypush_ (const char* m, stack_symbol_type& s)
  {
    if (m)
      YY_SYMBOL_PRINT (m, s);
    yystack_.push (s);
  }

  inline
  void
   XmlParser ::yypop_ (unsigned int n)
  {
    yystack_.pop (n);
  }

#if YYDEBUG
  std::ostream&
   XmlParser ::debug_stream () const
  {
    return *yycdebug_;
  }

  void
   XmlParser ::set_debug_stream (std::ostream& o)
  {
    yycdebug_ = &o;
  }


   XmlParser ::debug_level_type
   XmlParser ::debug_level () const
  {
    return yydebug_;
  }

  void
   XmlParser ::set_debug_level (debug_level_type l)
  {
    yydebug_ = l;
  }
#endif // YYDEBUG

  inline  XmlParser ::state_type
   XmlParser ::yy_lr_goto_state_ (state_type yystate, int yysym)
  {
    int yyr = yypgoto_[yysym - yyntokens_] + yystate;
    if (0 <= yyr && yyr <= yylast_ && yycheck_[yyr] == yystate)
      return yytable_[yyr];
    else
      return yydefgoto_[yysym - yyntokens_];
  }

  inline bool
   XmlParser ::yy_pact_value_is_default_ (int yyvalue)
  {
    return yyvalue == yypact_ninf_;
  }

  inline bool
   XmlParser ::yy_table_value_is_error_ (int yyvalue)
  {
    return yyvalue == yytable_ninf_;
  }

  int
   XmlParser ::parse ()
  {
    /// Whether yyla contains a lookahead.
    bool yyempty = true;

    // State.
    int yyn;
    /// Length of the RHS of the rule being reduced.
    int yylen = 0;

    // Error handling.
    int yynerrs_ = 0;
    int yyerrstatus_ = 0;

    /// The lookahead symbol.
    symbol_type yyla;

    /// The locations where the error started and ended.
    stack_symbol_type yyerror_range[3];

    /// The return value of parse ().
    int yyresult;

    // FIXME: This shoud be completely indented.  It is not yet to
    // avoid gratuitous conflicts when merging into the master branch.
    try
      {
    YYCDEBUG << "Starting parse" << std::endl;


    // User initialization code.
    #line 36 "src/parsers/XmlParser.yy" // lalr1.cc:725
{
  // Initialize the initial location.
  yyla.location.begin.filename = yyla.location.end.filename = &driver.file;
}

#line 667 "src/parsers/XmlParser.cpp" // lalr1.cc:725

    /* Initialize the stack.  The initial state will be set in
       yynewstate, since the latter expects the semantical and the
       location values to have been already stored, initialize these
       stacks with a primary value.  */
    yystack_.clear ();
    yypush_ (YY_NULLPTR, 0, yyla);

    // A new symbol was pushed on the stack.
  yynewstate:
    YYCDEBUG << "Entering state " << yystack_[0].state << std::endl;

    // Accept?
    if (yystack_[0].state == yyfinal_)
      goto yyacceptlab;

    goto yybackup;

    // Backup.
  yybackup:

    // Try to take a decision without lookahead.
    yyn = yypact_[yystack_[0].state];
    if (yy_pact_value_is_default_ (yyn))
      goto yydefault;

    // Read a lookahead token.
    if (yyempty)
      {
        YYCDEBUG << "Reading a token: ";
        try
          {
            yyla.type = yytranslate_ (yylex (&yyla.value, &yyla.location, driver));
          }
        catch (const syntax_error& yyexc)
          {
            error (yyexc);
            goto yyerrlab1;
          }
        yyempty = false;
      }
    YY_SYMBOL_PRINT ("Next token is", yyla);

    /* If the proper action on seeing token YYLA.TYPE is to reduce or
       to detect an error, take that action.  */
    yyn += yyla.type_get ();
    if (yyn < 0 || yylast_ < yyn || yycheck_[yyn] != yyla.type_get ())
      goto yydefault;

    // Reduce or error.
    yyn = yytable_[yyn];
    if (yyn <= 0)
      {
        if (yy_table_value_is_error_ (yyn))
          goto yyerrlab;
        yyn = -yyn;
        goto yyreduce;
      }

    // Discard the token being shifted.
    yyempty = true;

    // Count tokens shifted since error; after three, turn off error status.
    if (yyerrstatus_)
      --yyerrstatus_;

    // Shift the lookahead token.
    yypush_ ("Shifting", yyn, yyla);
    goto yynewstate;

  /*-----------------------------------------------------------.
  | yydefault -- do the default action for the current state.  |
  `-----------------------------------------------------------*/
  yydefault:
    yyn = yydefact_[yystack_[0].state];
    if (yyn == 0)
      goto yyerrlab;
    goto yyreduce;

  /*-----------------------------.
  | yyreduce -- Do a reduction.  |
  `-----------------------------*/
  yyreduce:
    yylen = yyr2_[yyn];
    {
      stack_symbol_type yylhs;
      yylhs.state = yy_lr_goto_state_(yystack_[yylen].state, yyr1_[yyn]);
      /* If YYLEN is nonzero, implement the default value of the
         action: '$$ = $1'.  Otherwise, use the top of the stack.

         Otherwise, the following line sets YYLHS.VALUE to garbage.
         This behavior is undocumented and Bison users should not rely
         upon it.  */
      if (yylen)
        yylhs.value = yystack_[yylen - 1].value;
      else
        yylhs.value = yystack_[0].value;

      // Compute the default @$.
      {
        slice<stack_symbol_type, stack_type> slice (yystack_, yylen);
        YYLLOC_DEFAULT (yylhs.location, slice, yylen);
      }

      // Perform the reduction.
      YY_REDUCE_PRINT (yyn);
      try
        {
          switch (yyn)
            {
  case 9:
#line 120 "src/parsers/XmlParser.yy" // lalr1.cc:847
    {
  driver.set_name = *(yystack_[1].value.sval);  
  delete (yystack_[1].value.sval); 
}
#line 784 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 10:
#line 126 "src/parsers/XmlParser.yy" // lalr1.cc:847
    {
  driver.set_value = (yystack_[1].value.dval);  
}
#line 792 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 11:
#line 131 "src/parsers/XmlParser.yy" // lalr1.cc:847
    {
  driver.set_value = (yystack_[1].value.ival);
}
#line 800 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 12:
#line 137 "src/parsers/XmlParser.yy" // lalr1.cc:847
    {
  driver.number_of_elements = (yystack_[1].value.ival);
  driver.list_of_elements = new Element*[(yystack_[1].value.ival)];
  if (driver.list_of_elements == 0)
    std::cout << "Error: could not allocate memory for" << 
    " ElementSet elements!" << std::endl;
}
#line 812 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 13:
#line 146 "src/parsers/XmlParser.yy" // lalr1.cc:847
    { 
  driver.number_of_values = (yystack_[1].value.ival);
}
#line 820 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 14:
#line 155 "src/parsers/XmlParser.yy" // lalr1.cc:847
    { 
  ret = driver.explicit_cost.insert (pair<string, float> (*(yystack_[4].value.sval), (yystack_[1].value.dval)));
  if (!ret.second)
    std::cout << "Bison error: Error adding explicit cost function element "
    << (yystack_[4].value.sval) << std::endl;
  delete (yystack_[4].value.sval);   
}
#line 832 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 15:
#line 168 "src/parsers/XmlParser.yy" // lalr1.cc:847
    { 
  driver.current_element++;
  driver.list_of_elements[driver.current_element-1] = 
  new Element(driver.number_of_values, "elem");
  if (driver.list_of_elements[driver.current_element-1] == 0)
	  std::cout << "Bison error: could not allocate memory for current Element!"
	  << std::endl;
  driver.list_of_elements[driver.current_element-1]->set_element_name (*(yystack_[1].value.sval)); 
  delete (yystack_[1].value.sval);   
}
#line 847 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 16:
#line 180 "src/parsers/XmlParser.yy" // lalr1.cc:847
    { 
  out << (yystack_[1].value.ival);
  driver.current_element++;
  driver.list_of_elements[driver.current_element-1] = 
  new Element(driver.number_of_values, "elem");
  if (driver.list_of_elements[driver.current_element-1] == 0)
    std::cout << "Bison error: could not allocate memory for current Element!"
    << std::endl;
  driver.list_of_elements[driver.current_element-1]->set_element_name
  (out.str());
  out.clear ();  
  out.str (std::string ());
}
#line 865 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;

  case 17:
#line 195 "src/parsers/XmlParser.yy" // lalr1.cc:847
    { 
  driver.list_of_elements[driver.current_element-1]->add_element_value ((yystack_[1].value.ival));
}
#line 873 "src/parsers/XmlParser.cpp" // lalr1.cc:847
    break;


#line 877 "src/parsers/XmlParser.cpp" // lalr1.cc:847
            default:
              break;
            }
        }
      catch (const syntax_error& yyexc)
        {
          error (yyexc);
          YYERROR;
        }
      YY_SYMBOL_PRINT ("-> $$ =", yylhs);
      yypop_ (yylen);
      yylen = 0;
      YY_STACK_PRINT ();

      // Shift the result of the reduction.
      yypush_ (YY_NULLPTR, yylhs);
    }
    goto yynewstate;

  /*--------------------------------------.
  | yyerrlab -- here on detecting error.  |
  `--------------------------------------*/
  yyerrlab:
    // If not already recovering from an error, report this error.
    if (!yyerrstatus_)
      {
        ++yynerrs_;
        error (yyla.location, yysyntax_error_ (yystack_[0].state,
                                           yyempty ? yyempty_ : yyla.type_get ()));
      }


    yyerror_range[1].location = yyla.location;
    if (yyerrstatus_ == 3)
      {
        /* If just tried and failed to reuse lookahead token after an
           error, discard it.  */

        // Return failure if at end of input.
        if (yyla.type_get () == yyeof_)
          YYABORT;
        else if (!yyempty)
          {
            yy_destroy_ ("Error: discarding", yyla);
            yyempty = true;
          }
      }

    // Else will try to reuse lookahead token after shifting the error token.
    goto yyerrlab1;


  /*---------------------------------------------------.
  | yyerrorlab -- error raised explicitly by YYERROR.  |
  `---------------------------------------------------*/
  yyerrorlab:

    /* Pacify compilers like GCC when the user code never invokes
       YYERROR and the label yyerrorlab therefore never appears in user
       code.  */
    if (false)
      goto yyerrorlab;
    yyerror_range[1].location = yystack_[yylen - 1].location;
    /* Do not reclaim the symbols of the rule whose action triggered
       this YYERROR.  */
    yypop_ (yylen);
    yylen = 0;
    goto yyerrlab1;

  /*-------------------------------------------------------------.
  | yyerrlab1 -- common code for both syntax error and YYERROR.  |
  `-------------------------------------------------------------*/
  yyerrlab1:
    yyerrstatus_ = 3;   // Each real token shifted decrements this.
    {
      stack_symbol_type error_token;
      for (;;)
        {
          yyn = yypact_[yystack_[0].state];
          if (!yy_pact_value_is_default_ (yyn))
            {
              yyn += yyterror_;
              if (0 <= yyn && yyn <= yylast_ && yycheck_[yyn] == yyterror_)
                {
                  yyn = yytable_[yyn];
                  if (0 < yyn)
                    break;
                }
            }

          // Pop the current state because it cannot handle the error token.
          if (yystack_.size () == 1)
            YYABORT;

          yyerror_range[1].location = yystack_[0].location;
          yy_destroy_ ("Error: popping", yystack_[0]);
          yypop_ ();
          YY_STACK_PRINT ();
        }

      yyerror_range[2].location = yyla.location;
      YYLLOC_DEFAULT (error_token.location, yyerror_range, 2);

      // Shift the error token.
      error_token.state = yyn;
      yypush_ ("Shifting", error_token);
    }
    goto yynewstate;

    // Accept.
  yyacceptlab:
    yyresult = 0;
    goto yyreturn;

    // Abort.
  yyabortlab:
    yyresult = 1;
    goto yyreturn;

  yyreturn:
    if (!yyempty)
      yy_destroy_ ("Cleanup: discarding lookahead", yyla);

    /* Do not reclaim the symbols of the rule whose action triggered
       this YYABORT or YYACCEPT.  */
    yypop_ (yylen);
    while (1 < yystack_.size ())
      {
        yy_destroy_ ("Cleanup: popping", yystack_[0]);
        yypop_ ();
      }

    return yyresult;
  }
    catch (...)
      {
        YYCDEBUG << "Exception caught: cleaning lookahead and stack"
                 << std::endl;
        // Do not try to display the values of the reclaimed symbols,
        // as their printer might throw an exception.
        if (!yyempty)
          yy_destroy_ (YY_NULLPTR, yyla);

        while (1 < yystack_.size ())
          {
            yy_destroy_ (YY_NULLPTR, yystack_[0]);
            yypop_ ();
          }
        throw;
      }
  }

  void
   XmlParser ::error (const syntax_error& yyexc)
  {
    error (yyexc.location, yyexc.what());
  }

  // Generate an error message.
  std::string
   XmlParser ::yysyntax_error_ (state_type yystate, symbol_number_type yytoken) const
  {
    std::string yyres;
    // Number of reported tokens (one for the "unexpected", one per
    // "expected").
    size_t yycount = 0;
    // Its maximum.
    enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
    // Arguments of yyformat.
    char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];

    /* There are many possibilities here to consider:
       - If this state is a consistent state with a default action, then
         the only way this function was invoked is if the default action
         is an error action.  In that case, don't check for expected
         tokens because there are none.
       - The only way there can be no lookahead present (in yytoken) is
         if this state is a consistent state with a default action.
         Thus, detecting the absence of a lookahead is sufficient to
         determine that there is no unexpected or expected token to
         report.  In that case, just report a simple "syntax error".
       - Don't assume there isn't a lookahead just because this state is
         a consistent state with a default action.  There might have
         been a previous inconsistent state, consistent state with a
         non-default action, or user semantic action that manipulated
         yyla.  (However, yyla is currently not documented for users.)
       - Of course, the expected token list depends on states to have
         correct lookahead information, and it depends on the parser not
         to perform extra reductions after fetching a lookahead from the
         scanner and before detecting a syntax error.  Thus, state
         merging (from LALR or IELR) and default reductions corrupt the
         expected token list.  However, the list is correct for
         canonical LR with one exception: it will still contain any
         token that will not be accepted due to an error action in a
         later state.
    */
    if (yytoken != yyempty_)
      {
        yyarg[yycount++] = yytname_[yytoken];
        int yyn = yypact_[yystate];
        if (!yy_pact_value_is_default_ (yyn))
          {
            /* Start YYX at -YYN if negative to avoid negative indexes in
               YYCHECK.  In other words, skip the first -YYN actions for
               this state because they are default actions.  */
            int yyxbegin = yyn < 0 ? -yyn : 0;
            // Stay within bounds of both yycheck and yytname.
            int yychecklim = yylast_ - yyn + 1;
            int yyxend = yychecklim < yyntokens_ ? yychecklim : yyntokens_;
            for (int yyx = yyxbegin; yyx < yyxend; ++yyx)
              if (yycheck_[yyx + yyn] == yyx && yyx != yyterror_
                  && !yy_table_value_is_error_ (yytable_[yyx + yyn]))
                {
                  if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                    {
                      yycount = 1;
                      break;
                    }
                  else
                    yyarg[yycount++] = yytname_[yyx];
                }
          }
      }

    char const* yyformat = YY_NULLPTR;
    switch (yycount)
      {
#define YYCASE_(N, S)                         \
        case N:                               \
          yyformat = S;                       \
        break
        YYCASE_(0, YY_("syntax error"));
        YYCASE_(1, YY_("syntax error, unexpected %s"));
        YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
        YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
        YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
        YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
#undef YYCASE_
      }

    // Argument number.
    size_t yyi = 0;
    for (char const* yyp = yyformat; *yyp; ++yyp)
      if (yyp[0] == '%' && yyp[1] == 's' && yyi < yycount)
        {
          yyres += yytnamerr_ (yyarg[yyi++]);
          ++yyp;
        }
      else
        yyres += *yyp;
    return yyres;
  }


  const signed char  XmlParser ::yypact_ninf_ = -15;

  const signed char  XmlParser ::yytable_ninf_ = -1;

  const signed char
   XmlParser ::yypact_[] =
  {
      -3,    15,     1,     6,   -14,    11,   -13,   -11,    12,    16,
      -2,   -15,    15,   -15,    25,    30,    31,    32,    28,    14,
      13,    19,    27,   -15,   -15,    10,   -15,   -15,   -15,   -15,
     -15,    26,    29,   -15,    22,    33,   -15,   -15,   -15,   -15,
      34,    36,   -15,    24,    37,   -15
  };

  const unsigned char
   XmlParser ::yydefact_[] =
  {
       2,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     5,     0,     1,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     4,     6,     0,     9,    11,    10,    12,
      13,     0,     0,     7,     0,     0,     8,     3,    15,    16,
       0,     0,    17,     0,     0,    14
  };

  const signed char
   XmlParser ::yypgoto_[] =
  {
     -15,   -15,    38,    -9,   -15,   -15
  };

  const signed char
   XmlParser ::yydefgoto_[] =
  {
      -1,     3,    10,    11,    22,    20
  };

  const unsigned char
   XmlParser ::yytable_[] =
  {
       1,    24,    23,     4,    12,     5,    13,     6,    14,     7,
      17,     8,    18,     9,    37,     4,    24,     5,     2,     6,
       4,     7,     5,     8,     6,     9,     7,    33,     8,    19,
       9,    26,    34,    21,    15,    16,    31,    32,    27,    28,
      30,    35,    29,    36,    38,    40,     0,    39,    44,     0,
      25,    41,     0,     0,    42,    43,     0,    45
  };

  const signed char
   XmlParser ::yycheck_[] =
  {
       3,    10,     4,     5,     3,     7,     0,     9,    22,    11,
      23,    13,    23,    15,     4,     5,    25,     7,    21,     9,
       5,    11,     7,    13,     9,    15,    11,    14,    13,    17,
      15,     6,    19,    17,    23,    24,    22,    23,     8,     8,
      12,    22,    10,    16,    18,    23,    -1,    18,    24,    -1,
      12,    18,    -1,    -1,    20,    19,    -1,    20
  };

  const unsigned char
   XmlParser ::yystos_[] =
  {
       0,     3,    21,    26,     5,     7,     9,    11,    13,    15,
      27,    28,     3,     0,    22,    23,    24,    23,    23,    17,
      30,    17,    29,     4,    28,    27,     6,     8,     8,    10,
      12,    22,    23,    14,    19,    22,    16,     4,    18,    18,
      23,    18,    20,    19,    24,    20
  };

  const unsigned char
   XmlParser ::yyr1_[] =
  {
       0,    25,    26,    26,    26,    27,    27,    28,    28,    28,
      28,    28,    28,    28,    29,    30,    30,    30
  };

  const unsigned char
   XmlParser ::yyr2_[] =
  {
       0,     2,     0,     4,     3,     1,     2,     3,     3,     3,
       3,     3,     3,     3,     6,     3,     3,     4
  };



  // YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
  // First, the terminals, then, starting at \a yyntokens_, nonterminals.
  const char*
  const  XmlParser ::yytname_[] =
  {
  "\"end of file\"", "error", "$undefined", "\"open ElementSet\"",
  "\"close ElementSet\"", "\"open SetName\"", "\"close SetName\"",
  "\"open SetValue\"", "\"close SetValue\"", "\"open NumberOfElements\"",
  "\"close NumberOfElements\"", "\"open MaxNumberOfElementValues\"",
  "\"close MaxNumberOfElementValues\"", "\"open Element\"",
  "\"close Element\"", "\"open Cost\"", "\"close Cost\"", "\"open name\"",
  "\"close name\"", "\"open value\"", "\"close value\"", "\"XML header\"",
  "\"string value\"", "\"integer value\"", "\"floating point value\"",
  "$accept", "input", "set", "element", "cost", "value", YY_NULLPTR
  };

#if YYDEBUG
  const unsigned char
   XmlParser ::yyrline_[] =
  {
       0,    97,    97,    99,   101,   107,   109,   115,   117,   119,
     125,   130,   136,   145,   154,   167,   179,   194
  };

  // Print the state stack on the debug stream.
  void
   XmlParser ::yystack_print_ ()
  {
    *yycdebug_ << "Stack now";
    for (stack_type::const_iterator
           i = yystack_.begin (),
           i_end = yystack_.end ();
         i != i_end; ++i)
      *yycdebug_ << ' ' << i->state;
    *yycdebug_ << std::endl;
  }

  // Report on the debug stream that the rule \a yyrule is going to be reduced.
  void
   XmlParser ::yy_reduce_print_ (int yyrule)
  {
    unsigned int yylno = yyrline_[yyrule];
    int yynrhs = yyr2_[yyrule];
    // Print the symbols being reduced, and their result.
    *yycdebug_ << "Reducing stack by rule " << yyrule - 1
               << " (line " << yylno << "):" << std::endl;
    // The symbols being reduced.
    for (int yyi = 0; yyi < yynrhs; yyi++)
      YY_SYMBOL_PRINT ("   $" << yyi + 1 << " =",
                       yystack_[(yynrhs) - (yyi + 1)]);
  }
#endif // YYDEBUG

  // Symbol number corresponding to token number t.
  inline
   XmlParser ::token_number_type
   XmlParser ::yytranslate_ (int t)
  {
    static
    const token_number_type
    translate_table[] =
    {
     0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     1,     2,     3,     4,
       5,     6,     7,     8,     9,    10,    11,    12,    13,    14,
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24
    };
    const unsigned int user_token_number_max_ = 279;
    const token_number_type undef_token_ = 2;

    if (static_cast<int>(t) <= yyeof_)
      return yyeof_;
    else if (static_cast<unsigned int> (t) <= user_token_number_max_)
      return translate_table[t];
    else
      return undef_token_;
  }


} // yy
#line 1320 "src/parsers/XmlParser.cpp" // lalr1.cc:1155
#line 201 "src/parsers/XmlParser.yy" // lalr1.cc:1156


void yy::XmlParser::error
(const yy::XmlParser::location_type& l, const std::string& m)
{
  driver.error (l, m);
}



/* A Bison parser, made by GNU Bison 2.4.1.  */

/* Skeleton implementation for Bison's Yacc-like parsers in C
   
      Copyright (C) 1984, 1989, 1990, 2000, 2001, 2002, 2003, 2004, 2005, 2006
   Free Software Foundation, Inc.
   
   This program is free software: you can redistribute it and/or modify
   it under the terms of the GNU General Public License as published by
   the Free Software Foundation, either version 3 of the License, or
   (at your option) any later version.
   
   This program is distributed in the hope that it will be useful,
   but WITHOUT ANY WARRANTY; without even the implied warranty of
   MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
   GNU General Public License for more details.
   
   You should have received a copy of the GNU General Public License
   along with this program.  If not, see <http://www.gnu.org/licenses/>.  */

/* As a special exception, you may create a larger work that contains
   part or all of the Bison parser skeleton and distribute that work
   under terms of your choice, so long as that work isn't itself a
   parser generator using the skeleton or a modified version thereof
   as a parser skeleton.  Alternatively, if you modify or redistribute
   the parser skeleton itself, you may (at your option) remove this
   special exception, which will cause the skeleton and the resulting
   Bison output files to be licensed under the GNU General Public
   License without this special exception.
   
   This special exception was added by the Free Software Foundation in
   version 2.2 of Bison.  */

/* C LALR(1) parser skeleton written by Richard Stallman, by
   simplifying the original so-called "semantic" parser.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "2.4.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1

/* Using locations.  */
#define YYLSP_NEEDED 1



/* Copy the first part of user declarations.  */

/* Line 189 of yacc.c  */
#line 1 "Parser.y"

#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h> //va_list

FILE *yyin;
int yyerror();
extern int yylex();

extern char* yytext;
extern int brackets;
extern int yylineno;
extern void DEBUGPRINT(char* format, ...);

#define YYERROR_VERBOSE 1
#define DEBUG_BISON

void DEBUGPRINT_BISON(char* format, ...)
{
	#ifdef DEBUG_BISON
		va_list args;
		va_start(args, format);
		vprintf(format, args);
		va_end(args);
	#endif
}




/* Line 189 of yacc.c  */
#line 107 "Parser.tab.c"

/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Enabling the token table.  */
#ifndef YYTOKEN_TABLE
# define YYTOKEN_TABLE 0
#endif


/* Tokens.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
   /* Put the tokens into the symbol table, so that GDB and other debuggers
      know about them.  */
   enum yytokentype {
     INT = 258,
     HEX = 259,
     FLOAT = 260,
     HEX_FLOAT = 261,
     TWOQ = 262,
     ONEQ = 263,
     ONEQSTRING = 264,
     TWOQSTRING = 265,
     LONGSTRING = 266,
     NESTED_STR = 267,
     NAME = 268,
     DOTS = 269,
     NIL = 270,
     FALSE = 271,
     TRUE = 272,
     BINOP = 273,
     UNOP = 274,
     MINUS = 275,
     DO = 276,
     WHILE = 277,
     FOR = 278,
     UNTIL = 279,
     REPEAT = 280,
     END = 281,
     GOTO = 282,
     IN = 283,
     IF = 284,
     THEN = 285,
     ELSEIF = 286,
     ELSE = 287,
     LOCAL = 288,
     FUNCTION = 289,
     BREAK = 290,
     RETURN = 291,
     LABEL_DEF = 292
   };
#endif



#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define yystype YYSTYPE /* obsolescent; will be withdrawn */
# define YYSTYPE_IS_DECLARED 1
#endif

#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
} YYLTYPE;
# define yyltype YYLTYPE /* obsolescent; will be withdrawn */
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


/* Copy the second part of user declarations.  */


/* Line 264 of yacc.c  */
#line 199 "Parser.tab.c"

#ifdef short
# undef short
#endif

#ifdef YYTYPE_UINT8
typedef YYTYPE_UINT8 yytype_uint8;
#else
typedef unsigned char yytype_uint8;
#endif

#ifdef YYTYPE_INT8
typedef YYTYPE_INT8 yytype_int8;
#elif (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
typedef signed char yytype_int8;
#else
typedef short int yytype_int8;
#endif

#ifdef YYTYPE_UINT16
typedef YYTYPE_UINT16 yytype_uint16;
#else
typedef unsigned short int yytype_uint16;
#endif

#ifdef YYTYPE_INT16
typedef YYTYPE_INT16 yytype_int16;
#else
typedef short int yytype_int16;
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif ! defined YYSIZE_T && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned int
# endif
#endif

#define YYSIZE_MAXIMUM ((YYSIZE_T) -1)

#ifndef YY_
# if YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(msgid) dgettext ("bison-runtime", msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(msgid) msgid
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(e) ((void) (e))
#else
# define YYUSE(e) /* empty */
#endif

/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(n) (n)
#else
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static int
YYID (int yyi)
#else
static int
YYID (yyi)
    int yyi;
#endif
{
  return yyi;
}
#endif

#if ! defined yyoverflow || YYERROR_VERBOSE

/* The parser invokes alloca or malloc; define the necessary symbols.  */

# ifdef YYSTACK_USE_ALLOCA
#  if YYSTACK_USE_ALLOCA
#   ifdef __GNUC__
#    define YYSTACK_ALLOC __builtin_alloca
#   elif defined __BUILTIN_VA_ARG_INCR
#    include <alloca.h> /* INFRINGES ON USER NAME SPACE */
#   elif defined _AIX
#    define YYSTACK_ALLOC __alloca
#   elif defined _MSC_VER
#    include <malloc.h> /* INFRINGES ON USER NAME SPACE */
#    define alloca _alloca
#   else
#    define YYSTACK_ALLOC alloca
#    if ! defined _ALLOCA_H && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#     ifndef _STDLIB_H
#      define _STDLIB_H 1
#     endif
#    endif
#   endif
#  endif
# endif

# ifdef YYSTACK_ALLOC
   /* Pacify GCC's `empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (YYID (0))
#  ifndef YYSTACK_ALLOC_MAXIMUM
    /* The OS might guarantee only one guard page at the bottom of the stack,
       and a page size can be as small as 4096 bytes.  So we cannot safely
       invoke alloca (N) if N exceeds 4096.  Use a slightly smaller number
       to allow for a few compiler-allocated temporary stack slots.  */
#   define YYSTACK_ALLOC_MAXIMUM 4032 /* reasonable circa 2006 */
#  endif
# else
#  define YYSTACK_ALLOC YYMALLOC
#  define YYSTACK_FREE YYFREE
#  ifndef YYSTACK_ALLOC_MAXIMUM
#   define YYSTACK_ALLOC_MAXIMUM YYSIZE_MAXIMUM
#  endif
#  if (defined __cplusplus && ! defined _STDLIB_H \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef _STDLIB_H
#    define _STDLIB_H 1
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined _STDLIB_H && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
	 || (defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL \
	     && defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yytype_int16 yyss_alloc;
  YYSTYPE yyvs_alloc;
  YYLTYPE yyls_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (sizeof (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (sizeof (yytype_int16) + sizeof (YYSTYPE) + sizeof (YYLTYPE)) \
      + 2 * YYSTACK_GAP_MAXIMUM)

/* Copy COUNT objects from FROM to TO.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(To, From, Count) \
      __builtin_memcpy (To, From, (Count) * sizeof (*(From)))
#  else
#   define YYCOPY(To, From, Count)		\
      do					\
	{					\
	  YYSIZE_T yyi;				\
	  for (yyi = 0; yyi < (Count); yyi++)	\
	    (To)[yyi] = (From)[yyi];		\
	}					\
      while (YYID (0))
#  endif
# endif

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)				\
    do									\
      {									\
	YYSIZE_T yynewbytes;						\
	YYCOPY (&yyptr->Stack_alloc, Stack, yysize);			\
	Stack = &yyptr->Stack_alloc;					\
	yynewbytes = yystacksize * sizeof (*Stack) + YYSTACK_GAP_MAXIMUM; \
	yyptr += yynewbytes / sizeof (*yyptr);				\
      }									\
    while (YYID (0))

#endif

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   463

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  108
/* YYNRULES -- Number of states.  */
#define YYNSTATES  205

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   292

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      47,    48,     2,     2,    40,     2,    44,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    43,    38,
      41,    39,    42,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    45,     2,    46,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    49,     2,    50,     2,     2,     2,     2,
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35,    36,    37
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    17,    18,
      20,    24,    26,    28,    30,    33,    35,    37,    39,    43,
      45,    49,    55,    60,    65,    68,    73,    81,    89,    97,
     101,   105,   111,   118,   126,   135,   141,   146,   151,   154,
     158,   159,   161,   164,   167,   171,   175,   177,   181,   185,
     187,   191,   193,   195,   200,   204,   206,   208,   212,   215,
     220,   226,   229,   234,   237,   241,   243,   245,   247,   251,
     253,   257,   259,   263,   265,   268,   272,   275,   277,   281,
     283,   289,   293,   295,   297,   299,   301,   303,   305,   307,
     311,   315,   319,   323,   327,   330,   333,   335,   337,   339,
     341,   343,   345,   347,   349,   351,   353,   355,   357
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      52,     0,    -1,    53,    -1,    54,    -1,    54,    65,    -1,
      54,    55,    -1,    55,    -1,    56,    -1,    -1,    38,    -1,
      69,    39,    77,    -1,    74,    -1,    66,    -1,    35,    -1,
      27,    13,    -1,    57,    -1,    61,    -1,    59,    -1,    34,
      67,    73,    -1,    58,    -1,    21,    53,    26,    -1,    22,
      84,    21,    53,    26,    -1,    25,    53,    24,    84,    -1,
      33,    34,    13,    73,    -1,    33,    63,    -1,    33,    63,
      39,    77,    -1,    23,    13,    39,    60,    21,    53,    26,
      -1,    23,    60,    28,    74,    21,    53,    26,    -1,    23,
      84,    28,    74,    21,    53,    26,    -1,    60,    40,    84,
      -1,    84,    40,    84,    -1,    29,    84,    30,    53,    26,
      -1,    29,    84,    30,    53,    62,    26,    -1,    29,    84,
      30,    53,    32,    53,    26,    -1,    29,    84,    30,    53,
      62,    32,    53,    26,    -1,    62,    31,    84,    30,    53,
      -1,    31,    84,    30,    53,    -1,    63,    40,    13,    64,
      -1,    13,    64,    -1,    41,    13,    42,    -1,    -1,    36,
      -1,    36,    38,    -1,    36,    77,    -1,    36,    77,    38,
      -1,    37,    13,    37,    -1,    68,    -1,    68,    43,    13,
      -1,    68,    44,    13,    -1,    13,    -1,    69,    40,    70,
      -1,    70,    -1,    13,    -1,    71,    45,    84,    46,    -1,
      71,    44,    13,    -1,    70,    -1,    74,    -1,    47,    84,
      48,    -1,    34,    73,    -1,    47,    48,    53,    26,    -1,
      47,    76,    48,    53,    26,    -1,    71,    75,    -1,    71,
      43,    13,    75,    -1,    47,    48,    -1,    47,    77,    48,
      -1,    79,    -1,    85,    -1,    78,    -1,    78,    40,    14,
      -1,    14,    -1,    77,    40,    84,    -1,    84,    -1,    78,
      40,    13,    -1,    13,    -1,    49,    50,    -1,    49,    80,
      50,    -1,    81,    83,    -1,    81,    -1,    81,    83,    82,
      -1,    82,    -1,    45,    84,    46,    39,    84,    -1,    13,
      39,    84,    -1,    84,    -1,    40,    -1,    38,    -1,    15,
      -1,    16,    -1,    17,    -1,    14,    -1,    47,    84,    48,
      -1,    84,    18,    84,    -1,    84,    20,    84,    -1,    84,
      41,    84,    -1,    84,    42,    84,    -1,    20,    84,    -1,
      19,    84,    -1,    86,    -1,    85,    -1,    79,    -1,    72,
      -1,    74,    -1,    70,    -1,     9,    -1,    10,    -1,    11,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    86,    87,    90,    91,    94,    95,    99,
     100,   101,   103,   104,   105,   107,   109,   110,   112,   114,
     118,   119,   120,   125,   127,   128,   133,   134,   135,   138,
     139,   145,   147,   148,   149,   152,   153,   160,   161,   167,
     168,   175,   176,   177,   178,   184,   191,   192,   196,   197,
     203,   204,   210,   211,   212,   218,   219,   220,   226,   229,
     230,   236,   237,   243,   244,   245,   246,   252,   253,   254,
     260,   261,   268,   269,   275,   276,   283,   284,   288,   289,
     294,   295,   296,   300,   301,   305,   306,   307,   308,   310,
     311,   312,   315,   316,   319,   320,   321,   322,   323,   325,
     326,   328,   332,   333,   334,   339,   340,   341,   342
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || YYTOKEN_TABLE
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "HEX", "FLOAT", "HEX_FLOAT",
  "TWOQ", "ONEQ", "ONEQSTRING", "TWOQSTRING", "LONGSTRING", "NESTED_STR",
  "NAME", "DOTS", "NIL", "FALSE", "TRUE", "BINOP", "UNOP", "MINUS", "DO",
  "WHILE", "FOR", "UNTIL", "REPEAT", "END", "GOTO", "IN", "IF", "THEN",
  "ELSEIF", "ELSE", "LOCAL", "FUNCTION", "BREAK", "RETURN", "LABEL_DEF",
  "';'", "'='", "','", "'<'", "'>'", "':'", "'.'", "'['", "']'", "'('",
  "')'", "'{'", "'}'", "$accept", "main", "block", "stat_list", "opt_stat",
  "stat", "while_do", "locals", "for_cycle", "cycle_exp_list", "statement",
  "else_if", "attr_list", "attr", "ret", "label", "function_name",
  "function_name_part", "var_list", "var", "prefix_exp", "function_def",
  "function_body", "function_call", "args", "par_list", "exp_list",
  "name_list", "table_body", "field_list", "field_list_part", "field",
  "field_sep", "exp", "literalString", "numeral", 0
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[YYLEX-NUM] -- Internal token number corresponding to
   token YYLEX-NUM.  */
static const yytype_uint16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290,   291,   292,    59,    61,
      44,    60,    62,    58,    46,    91,    93,    40,    41,   123,
     125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    51,    52,    53,    53,    54,    54,    55,    55,    56,
      56,    56,    56,    56,    56,    56,    56,    56,    56,    56,
      57,    57,    57,    58,    58,    58,    59,    59,    59,    60,
      60,    61,    61,    61,    61,    62,    62,    63,    63,    64,
      64,    65,    65,    65,    65,    66,    67,    67,    68,    68,
      69,    69,    70,    70,    70,    71,    71,    71,    72,    73,
      73,    74,    74,    75,    75,    75,    75,    76,    76,    76,
      77,    77,    78,    78,    79,    79,    80,    80,    81,    81,
      82,    82,    82,    83,    83,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    84,    85,    85,    85,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     0,     1,
       3,     1,     1,     1,     2,     1,     1,     1,     3,     1,
       3,     5,     4,     4,     2,     4,     7,     7,     7,     3,
       3,     5,     6,     7,     8,     5,     4,     4,     2,     3,
       0,     1,     2,     2,     3,     3,     1,     3,     3,     1,
       3,     1,     1,     4,     3,     1,     1,     3,     2,     4,
       5,     2,     4,     2,     3,     1,     1,     1,     3,     1,
       3,     1,     3,     1,     2,     3,     2,     1,     3,     1,
       5,     3,     1,     1,     1,     1,     1,     1,     1,     3,
       3,     3,     3,     3,     2,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default rule to reduce with in state
   STATE-NUM when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    52,     8,     0,     0,     8,     0,     0,     0,     0,
      13,     0,     9,     0,     0,     2,     3,     6,     7,    15,
      19,    17,    16,    12,     0,    55,     0,    11,     0,   105,
     106,   107,   108,   102,   103,   104,    88,    85,    86,    87,
       0,     0,     0,     0,     0,   101,    99,   100,    98,     0,
      97,    96,    52,     0,     0,     0,    14,     0,    40,     0,
      24,    49,     0,    46,     0,     0,     1,    41,     5,     4,
       0,     0,     0,     0,     0,     0,    61,    65,    66,    20,
      95,    94,     0,    58,     0,    52,     0,    74,     0,    77,
      79,    82,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     8,     0,    38,     0,     0,     0,    18,
       0,     0,    45,    57,    42,    43,    71,    10,    55,    56,
       0,    54,     0,    63,     0,    73,    69,     8,     0,    67,
      89,     0,     0,    75,    84,    83,    76,    90,    91,     0,
      92,    93,     0,     0,    55,    56,    29,    56,    30,    22,
       0,     0,    23,    25,    40,    47,    48,    44,     0,    62,
      53,    64,     0,     8,     0,    81,     0,    78,    21,     8,
       8,     8,    31,     0,     8,     0,    39,    37,    70,    59,
       0,    72,    68,     0,     0,     0,     0,     0,     0,    32,
       0,     8,    60,    80,    26,    27,    28,     8,    33,     0,
       0,    36,     8,    34,    35
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    53,
      22,   175,    60,   105,    69,    23,    62,    63,    24,    45,
      26,    46,    83,    47,    76,   128,   115,   129,    48,    88,
      89,    90,   136,   116,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
     416,   -62,   416,   323,   345,   416,    -9,   323,    -5,    15,
     -62,    52,   -62,   323,    13,   -62,   397,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    -4,    62,    11,   364,    43,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     323,   323,    33,   323,    28,   106,   -62,   113,   -62,   172,
     -62,   -62,    44,    39,   126,    61,   -62,   210,    47,    80,
      86,   -62,    33,    90,    74,    64,   -62,   228,   -62,   -62,
     323,    -7,   101,   105,   323,   254,   -62,   -62,   -62,   -62,
     304,   304,     4,   -62,   167,    60,   323,   -62,    71,    26,
     -62,   304,   323,   323,   416,   323,   323,   323,    -7,   323,
      -7,   323,   323,   416,   116,   -62,    33,   323,   123,   -62,
     127,   148,   -62,   -62,   -62,    34,   304,   132,   136,   -62,
      14,   -62,    50,   -62,   -29,   -62,   -62,   416,   130,   143,
     357,   323,    89,   -62,   -62,   -62,   276,   304,   304,   160,
     304,   304,    36,   258,   -62,   168,   304,   177,   304,   304,
     133,   161,   -62,   132,    47,   -62,   -62,   -62,   323,   -62,
     -62,   -62,   191,   416,   197,   304,   179,   -62,   -62,   416,
     416,   416,   -62,   323,   416,   174,   -62,   -62,   304,   -62,
     194,   -62,   -62,   323,   195,   198,   199,   289,   200,   -62,
     323,   416,   -62,   304,   -62,   -62,   -62,   416,   -62,   373,
     209,   -62,   416,   -62,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,    25,   -62,   207,   -62,   -62,   -62,   -62,   149,
     -62,   -62,   -62,    95,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -55,    10,   134,   -62,   -61,   -62,   -25,   -62,
     -62,   114,   -62,    46,   -23,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If zero, do what YYDEFACT says.
   If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -58
static const yytype_int16 yytable[] =
{
      25,    77,    25,    78,    56,    25,     1,   109,    58,   117,
      27,   158,    27,    66,   124,    27,    25,   125,   126,   161,
      33,    34,    35,    33,    34,    35,    27,    28,    61,    59,
      55,    29,    30,    31,    32,    70,    71,    33,    34,    35,
      13,    85,    36,    37,    38,    39,   153,    40,    41,    49,
      54,   152,   127,    57,    72,    73,    74,   169,    75,    65,
      44,    75,    42,    44,   134,    64,   135,    98,    92,    79,
      93,   118,   157,    86,   158,    43,    99,    44,    87,    99,
      82,   119,    92,    97,    93,   102,    80,    81,   104,    84,
      91,    95,    96,   106,    25,    77,   160,    78,   144,   131,
     144,   -51,   -51,    25,    27,    95,    96,    92,   145,    93,
     147,   112,   113,    27,   120,   -55,   -55,   -55,   121,   139,
     122,   133,   -56,   -56,   -56,   107,   108,    25,   150,   151,
      95,    96,   132,   110,   111,   166,   154,    27,   137,   138,
     155,   140,   141,   143,    92,   146,    93,   148,   149,   -55,
     -55,   -55,   162,   -55,   100,   -55,   -56,   -56,   -56,   172,
     -56,   156,   -56,    25,   173,   174,   101,    95,    96,    25,
      25,    25,   158,    27,    25,   -50,   -50,   165,   163,    27,
      27,    27,    91,   164,    27,    92,   168,    93,   180,   170,
      92,    25,    93,    94,   184,   185,   186,    25,   171,   188,
     189,    27,    25,   176,   178,   190,   191,    27,    95,    96,
     181,   182,    27,    95,    96,   130,   200,   179,   183,   187,
     192,   194,   201,    68,   195,   196,   198,   204,    92,   193,
      93,    29,    30,    31,    32,   203,   199,    33,    34,    35,
     103,     1,    36,    37,    38,    39,   142,    40,    41,   177,
     167,    95,    96,     0,   159,     0,     0,    29,    30,    31,
      32,     0,    42,    33,    34,    35,   114,     1,    36,    37,
      38,    39,     0,    40,    41,    43,    92,    44,    93,    29,
      30,    31,    32,     0,     0,    33,    34,    35,    42,    85,
      36,    37,    38,    39,     0,    40,    41,     0,   101,    95,
      96,    43,   123,    44,     0,     0,     0,    92,     0,    93,
      42,     0,     0,     0,     0,     0,     0,     0,     0,   197,
       0,    86,    92,    43,    93,    44,    29,    30,    31,    32,
      95,    96,    33,    34,    35,     0,     1,    36,    37,    38,
      39,     0,    40,    41,     0,    95,    96,     0,    29,    30,
      31,    32,     0,     0,    33,    34,    35,    42,    52,    36,
      37,    38,    39,     0,    40,    41,   -57,   -57,   -57,     0,
      43,     0,    44,   -56,   -56,   -56,     0,     0,     0,    42,
       0,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,    92,    43,    93,    44,     0,     0,     0,     0,     0,
     -57,   -57,   -57,   202,   -57,     0,   -57,   -56,   -56,   -56,
       1,     0,     0,   -56,    95,    96,     0,     0,     2,     3,
       4,     0,     5,     0,     6,     0,     7,     0,     0,     1,
       8,     9,    10,    67,    11,    12,     0,     2,     3,     4,
       0,     5,     0,     6,    13,     7,     0,     0,     0,     8,
       9,    10,     0,    11,    12,     0,     0,     0,     0,     0,
       0,     0,     0,    13
};

static const yytype_int16 yycheck[] =
{
       0,    26,     2,    26,    13,     5,    13,    62,    13,    70,
       0,    40,     2,     0,    75,     5,    16,    13,    14,    48,
       9,    10,    11,     9,    10,    11,    16,     2,    13,    34,
       5,     3,     4,     5,     6,    39,    40,     9,    10,    11,
      47,    13,    14,    15,    16,    17,   107,    19,    20,     3,
       4,   106,    48,     7,    43,    44,    45,    21,    47,    13,
      49,    47,    34,    49,    38,    13,    40,    28,    18,    26,
      20,    71,    38,    45,    40,    47,    40,    49,    50,    40,
      47,    71,    18,    39,    20,    24,    40,    41,    41,    43,
      44,    41,    42,    13,    94,   120,    46,   120,    98,    39,
     100,    39,    40,   103,    94,    41,    42,    18,    98,    20,
     100,    37,    48,   103,    13,     9,    10,    11,    13,    94,
      74,    50,     9,    10,    11,    39,    40,   127,   103,    13,
      41,    42,    86,    43,    44,    46,    13,   127,    92,    93,
      13,    95,    96,    97,    18,    99,    20,   101,   102,    43,
      44,    45,   127,    47,    28,    49,    43,    44,    45,    26,
      47,    13,    49,   163,    31,    32,    40,    41,    42,   169,
     170,   171,    40,   163,   174,    39,    40,   131,    48,   169,
     170,   171,   136,    40,   174,    18,    26,    20,   163,    21,
      18,   191,    20,    21,   169,   170,   171,   197,    21,   174,
      26,   191,   202,    42,   158,    31,    32,   197,    41,    42,
      13,    14,   202,    41,    42,    48,   191,    26,    39,   173,
      26,    26,   197,    16,    26,    26,    26,   202,    18,   183,
      20,     3,     4,     5,     6,    26,   190,     9,    10,    11,
      30,    13,    14,    15,    16,    17,    97,    19,    20,   154,
     136,    41,    42,    -1,   120,    -1,    -1,     3,     4,     5,
       6,    -1,    34,     9,    10,    11,    38,    13,    14,    15,
      16,    17,    -1,    19,    20,    47,    18,    49,    20,     3,
       4,     5,     6,    -1,    -1,     9,    10,    11,    34,    13,
      14,    15,    16,    17,    -1,    19,    20,    -1,    40,    41,
      42,    47,    48,    49,    -1,    -1,    -1,    18,    -1,    20,
      34,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    30,
      -1,    45,    18,    47,    20,    49,     3,     4,     5,     6,
      41,    42,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    -1,    41,    42,    -1,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    34,    13,    14,
      15,    16,    17,    -1,    19,    20,     9,    10,    11,    -1,
      47,    -1,    49,     9,    10,    11,    -1,    -1,    -1,    34,
      -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,    -1,
      -1,    18,    47,    20,    49,    -1,    -1,    -1,    -1,    -1,
      43,    44,    45,    30,    47,    -1,    49,    43,    44,    45,
      13,    -1,    -1,    49,    41,    42,    -1,    -1,    21,    22,
      23,    -1,    25,    -1,    27,    -1,    29,    -1,    -1,    13,
      33,    34,    35,    36,    37,    38,    -1,    21,    22,    23,
      -1,    25,    -1,    27,    47,    29,    -1,    -1,    -1,    33,
      34,    35,    -1,    37,    38,    -1,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    47
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    21,    22,    23,    25,    27,    29,    33,    34,
      35,    37,    38,    47,    52,    53,    54,    55,    56,    57,
      58,    59,    61,    66,    69,    70,    71,    74,    53,     3,
       4,     5,     6,     9,    10,    11,    14,    15,    16,    17,
      19,    20,    34,    47,    49,    70,    72,    74,    79,    84,
      85,    86,    13,    60,    84,    53,    13,    84,    13,    34,
      63,    13,    67,    68,    13,    84,     0,    36,    55,    65,
      39,    40,    43,    44,    45,    47,    75,    79,    85,    26,
      84,    84,    47,    73,    84,    13,    45,    50,    80,    81,
      82,    84,    18,    20,    21,    41,    42,    39,    28,    40,
      28,    40,    24,    30,    41,    64,    13,    39,    40,    73,
      43,    44,    37,    48,    38,    77,    84,    77,    70,    74,
      13,    13,    84,    48,    77,    13,    14,    48,    76,    78,
      48,    39,    84,    50,    38,    40,    83,    84,    84,    53,
      84,    84,    60,    84,    70,    74,    84,    74,    84,    84,
      53,    13,    73,    77,    13,    13,    13,    38,    40,    75,
      46,    48,    53,    48,    40,    84,    46,    82,    26,    21,
      21,    21,    26,    31,    32,    62,    42,    64,    84,    26,
      53,    13,    14,    39,    53,    53,    53,    84,    53,    26,
      31,    32,    26,    84,    26,    26,    26,    30,    26,    84,
      53,    53,    30,    26,    53
};

#define yyerrok		(yyerrstatus = 0)
#define yyclearin	(yychar = YYEMPTY)
#define YYEMPTY		(-2)
#define YYEOF		0

#define YYACCEPT	goto yyacceptlab
#define YYABORT		goto yyabortlab
#define YYERROR		goto yyerrorlab


/* Like YYERROR except do call yyerror.  This remains here temporarily
   to ease the transition to the new meaning of YYERROR, for GCC.
   Once GCC version 2 has supplanted version 1, this can go.  */

#define YYFAIL		goto yyerrlab

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)					\
do								\
  if (yychar == YYEMPTY && yylen == 1)				\
    {								\
      yychar = (Token);						\
      yylval = (Value);						\
      yytoken = YYTRANSLATE (yychar);				\
      YYPOPSTACK (1);						\
      goto yybackup;						\
    }								\
  else								\
    {								\
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))


#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#define YYRHSLOC(Rhs, K) ((Rhs)[K])
#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)				\
    do									\
      if (YYID (N))                                                    \
	{								\
	  (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;	\
	  (Current).first_column = YYRHSLOC (Rhs, 1).first_column;	\
	  (Current).last_line    = YYRHSLOC (Rhs, N).last_line;		\
	  (Current).last_column  = YYRHSLOC (Rhs, N).last_column;	\
	}								\
      else								\
	{								\
	  (Current).first_line   = (Current).last_line   =		\
	    YYRHSLOC (Rhs, 0).last_line;				\
	  (Current).first_column = (Current).last_column =		\
	    YYRHSLOC (Rhs, 0).last_column;				\
	}								\
    while (YYID (0))
#endif


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if YYLTYPE_IS_TRIVIAL
#  define YY_LOCATION_PRINT(File, Loc)			\
     fprintf (File, "%d.%d-%d.%d",			\
	      (Loc).first_line, (Loc).first_column,	\
	      (Loc).last_line,  (Loc).last_column)
# else
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif
#endif


/* YYLEX -- calling `yylex' with the right arguments.  */

#ifdef YYLEX_PARAM
# define YYLEX yylex (YYLEX_PARAM)
#else
# define YYLEX yylex ()
#endif

/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)			\
do {						\
  if (yydebug)					\
    YYFPRINTF Args;				\
} while (YYID (0))

# define YY_SYMBOL_PRINT(Title, Type, Value, Location)			  \
do {									  \
  if (yydebug)								  \
    {									  \
      YYFPRINTF (stderr, "%s ", Title);					  \
      yy_symbol_print (stderr,						  \
		  Type, Value, Location); \
      YYFPRINTF (stderr, "\n");						  \
    }									  \
} while (YYID (0))


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_value_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  switch (yytype)
    {
      default:
	break;
    }
}


/*--------------------------------.
| Print this symbol on YYOUTPUT.  |
`--------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_symbol_print (FILE *yyoutput, int yytype, YYSTYPE const * const yyvaluep, YYLTYPE const * const yylocationp)
#else
static void
yy_symbol_print (yyoutput, yytype, yyvaluep, yylocationp)
    FILE *yyoutput;
    int yytype;
    YYSTYPE const * const yyvaluep;
    YYLTYPE const * const yylocationp;
#endif
{
  if (yytype < YYNTOKENS)
    YYFPRINTF (yyoutput, "token %s (", yytname[yytype]);
  else
    YYFPRINTF (yyoutput, "nterm %s (", yytname[yytype]);

  YY_LOCATION_PRINT (yyoutput, *yylocationp);
  YYFPRINTF (yyoutput, ": ");
  yy_symbol_value_print (yyoutput, yytype, yyvaluep, yylocationp);
  YYFPRINTF (yyoutput, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_stack_print (yytype_int16 *yybottom, yytype_int16 *yytop)
#else
static void
yy_stack_print (yybottom, yytop)
    yytype_int16 *yybottom;
    yytype_int16 *yytop;
#endif
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)				\
do {								\
  if (yydebug)							\
    yy_stack_print ((Bottom), (Top));				\
} while (YYID (0))


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yy_reduce_print (YYSTYPE *yyvsp, YYLTYPE *yylsp, int yyrule)
#else
static void
yy_reduce_print (yyvsp, yylsp, yyrule)
    YYSTYPE *yyvsp;
    YYLTYPE *yylsp;
    int yyrule;
#endif
{
  int yynrhs = yyr2[yyrule];
  int yyi;
  unsigned long int yylno = yyrline[yyrule];
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %lu):\n",
	     yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr, yyrhs[yyprhs[yyrule] + yyi],
		       &(yyvsp[(yyi + 1) - (yynrhs)])
		       , &(yylsp[(yyi + 1) - (yynrhs)])		       );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)		\
do {					\
  if (yydebug)				\
    yy_reduce_print (yyvsp, yylsp, Rule); \
} while (YYID (0))

/* Nonzero means print parse trace.  It is left uninitialized so that
   multiple parsers can coexist.  */
int yydebug;
#else /* !YYDEBUG */
# define YYDPRINTF(Args)
# define YY_SYMBOL_PRINT(Title, Type, Value, Location)
# define YY_STACK_PRINT(Bottom, Top)
# define YY_REDUCE_PRINT(Rule)
#endif /* !YYDEBUG */


/* YYINITDEPTH -- initial size of the parser's stacks.  */
#ifndef	YYINITDEPTH
# define YYINITDEPTH 200
#endif

/* YYMAXDEPTH -- maximum size the stacks can grow to (effective only
   if the built-in stack extension method is used).

   Do not make this value too large; the results are undefined if
   YYSTACK_ALLOC_MAXIMUM < YYSTACK_BYTES (YYMAXDEPTH)
   evaluated with infinite-precision integer arithmetic.  */

#ifndef YYMAXDEPTH
# define YYMAXDEPTH 10000
#endif



#if YYERROR_VERBOSE

# ifndef yystrlen
#  if defined __GLIBC__ && defined _STRING_H
#   define yystrlen strlen
#  else
/* Return the length of YYSTR.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static YYSIZE_T
yystrlen (const char *yystr)
#else
static YYSIZE_T
yystrlen (yystr)
    const char *yystr;
#endif
{
  YYSIZE_T yylen;
  for (yylen = 0; yystr[yylen]; yylen++)
    continue;
  return yylen;
}
#  endif
# endif

# ifndef yystpcpy
#  if defined __GLIBC__ && defined _STRING_H && defined _GNU_SOURCE
#   define yystpcpy stpcpy
#  else
/* Copy YYSRC to YYDEST, returning the address of the terminating '\0' in
   YYDEST.  */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static char *
yystpcpy (char *yydest, const char *yysrc)
#else
static char *
yystpcpy (yydest, yysrc)
    char *yydest;
    const char *yysrc;
#endif
{
  char *yyd = yydest;
  const char *yys = yysrc;

  while ((*yyd++ = *yys++) != '\0')
    continue;

  return yyd - 1;
}
#  endif
# endif

# ifndef yytnamerr
/* Copy to YYRES the contents of YYSTR after stripping away unnecessary
   quotes and backslashes, so that it's suitable for yyerror.  The
   heuristic is that double-quoting is unnecessary unless the string
   contains an apostrophe, a comma, or backslash (other than
   backslash-backslash).  YYSTR is taken from yytname.  If YYRES is
   null, do not copy; instead, return the length of what the result
   would have been.  */
static YYSIZE_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYSIZE_T yyn = 0;
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
	    /* Fall through.  */
	  default:
	    if (yyres)
	      yyres[yyn] = *yyp;
	    yyn++;
	    break;

	  case '"':
	    if (yyres)
	      yyres[yyn] = '\0';
	    return yyn;
	  }
    do_not_strip_quotes: ;
    }

  if (! yyres)
    return yystrlen (yystr);

  return yystpcpy (yyres, yystr) - yyres;
}
# endif

/* Copy into YYRESULT an error message about the unexpected token
   YYCHAR while in state YYSTATE.  Return the number of bytes copied,
   including the terminating null byte.  If YYRESULT is null, do not
   copy anything; just return the number of bytes that would be
   copied.  As a special case, return 0 if an ordinary "syntax error"
   message will do.  Return YYSIZE_MAXIMUM if overflow occurs during
   size calculation.  */
static YYSIZE_T
yysyntax_error (char *yyresult, int yystate, int yychar)
{
  int yyn = yypact[yystate];

  if (! (YYPACT_NINF < yyn && yyn <= YYLAST))
    return 0;
  else
    {
      int yytype = YYTRANSLATE (yychar);
      YYSIZE_T yysize0 = yytnamerr (0, yytname[yytype]);
      YYSIZE_T yysize = yysize0;
      YYSIZE_T yysize1;
      int yysize_overflow = 0;
      enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
      char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
      int yyx;

# if 0
      /* This is so xgettext sees the translatable formats that are
	 constructed on the fly.  */
      YY_("syntax error, unexpected %s");
      YY_("syntax error, unexpected %s, expecting %s");
      YY_("syntax error, unexpected %s, expecting %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s");
      YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s");
# endif
      char *yyfmt;
      char const *yyf;
      static char const yyunexpected[] = "syntax error, unexpected %s";
      static char const yyexpecting[] = ", expecting %s";
      static char const yyor[] = " or %s";
      char yyformat[sizeof yyunexpected
		    + sizeof yyexpecting - 1
		    + ((YYERROR_VERBOSE_ARGS_MAXIMUM - 2)
		       * (sizeof yyor - 1))];
      char const *yyprefix = yyexpecting;

      /* Start YYX at -YYN if negative to avoid negative indexes in
	 YYCHECK.  */
      int yyxbegin = yyn < 0 ? -yyn : 0;

      /* Stay within bounds of both yycheck and yytname.  */
      int yychecklim = YYLAST - yyn + 1;
      int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
      int yycount = 1;

      yyarg[0] = yytname[yytype];
      yyfmt = yystpcpy (yyformat, yyunexpected);

      for (yyx = yyxbegin; yyx < yyxend; ++yyx)
	if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR)
	  {
	    if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
	      {
		yycount = 1;
		yysize = yysize0;
		yyformat[sizeof yyunexpected - 1] = '\0';
		break;
	      }
	    yyarg[yycount++] = yytname[yyx];
	    yysize1 = yysize + yytnamerr (0, yytname[yyx]);
	    yysize_overflow |= (yysize1 < yysize);
	    yysize = yysize1;
	    yyfmt = yystpcpy (yyfmt, yyprefix);
	    yyprefix = yyor;
	  }

      yyf = YY_(yyformat);
      yysize1 = yysize + yystrlen (yyf);
      yysize_overflow |= (yysize1 < yysize);
      yysize = yysize1;

      if (yysize_overflow)
	return YYSIZE_MAXIMUM;

      if (yyresult)
	{
	  /* Avoid sprintf, as that infringes on the user's name space.
	     Don't have undefined behavior even if the translation
	     produced a string with the wrong number of "%s"s.  */
	  char *yyp = yyresult;
	  int yyi = 0;
	  while ((*yyp = *yyf) != '\0')
	    {
	      if (*yyp == '%' && yyf[1] == 's' && yyi < yycount)
		{
		  yyp += yytnamerr (yyp, yyarg[yyi++]);
		  yyf += 2;
		}
	      else
		{
		  yyp++;
		  yyf++;
		}
	    }
	}
      return yysize;
    }
}
#endif /* YYERROR_VERBOSE */


/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

/*ARGSUSED*/
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep, YYLTYPE *yylocationp)
#else
static void
yydestruct (yymsg, yytype, yyvaluep, yylocationp)
    const char *yymsg;
    int yytype;
    YYSTYPE *yyvaluep;
    YYLTYPE *yylocationp;
#endif
{
  YYUSE (yyvaluep);
  YYUSE (yylocationp);

  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  switch (yytype)
    {

      default:
	break;
    }
}

/* Prevent warnings from -Wmissing-prototypes.  */
#ifdef YYPARSE_PARAM
#if defined __STDC__ || defined __cplusplus
int yyparse (void *YYPARSE_PARAM);
#else
int yyparse ();
#endif
#else /* ! YYPARSE_PARAM */
#if defined __STDC__ || defined __cplusplus
int yyparse (void);
#else
int yyparse ();
#endif
#endif /* ! YYPARSE_PARAM */


/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc;

/* Number of syntax errors so far.  */
int yynerrs;



/*-------------------------.
| yyparse or yypush_parse.  |
`-------------------------*/

#ifdef YYPARSE_PARAM
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void *YYPARSE_PARAM)
#else
int
yyparse (YYPARSE_PARAM)
    void *YYPARSE_PARAM;
#endif
#else /* ! YYPARSE_PARAM */
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
int
yyparse (void)
#else
int
yyparse ()

#endif
#endif
{


    int yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       `yyss': related to states.
       `yyvs': related to semantic values.
       `yyls': related to locations.

       Refer to the stacks thru separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yytype_int16 yyssa[YYINITDEPTH];
    yytype_int16 *yyss;
    yytype_int16 *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    /* The location stack.  */
    YYLTYPE yylsa[YYINITDEPTH];
    YYLTYPE *yyls;
    YYLTYPE *yylsp;

    /* The locations where the error started and ended.  */
    YYLTYPE yyerror_range[2];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;
  YYLTYPE yyloc;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYSIZE_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N), yylsp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yytoken = 0;
  yyss = yyssa;
  yyvs = yyvsa;
  yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */

  /* Initialize stack pointers.
     Waste one element of value and location stack
     so that they stay on the same level as the state stack.
     The wasted elements are never initialized.  */
  yyssp = yyss;
  yyvsp = yyvs;
  yylsp = yyls;

#if YYLTYPE_IS_TRIVIAL
  /* Initialize the default location before parsing starts.  */
  yylloc.first_line   = yylloc.last_line   = 1;
  yylloc.first_column = yylloc.last_column = 1;
#endif

  goto yysetstate;

/*------------------------------------------------------------.
| yynewstate -- Push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
 yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;

 yysetstate:
  *yyssp = yystate;

  if (yyss + yystacksize - 1 <= yyssp)
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYSIZE_T yysize = yyssp - yyss + 1;

#ifdef yyoverflow
      {
	/* Give user a chance to reallocate the stack.  Use copies of
	   these so that the &'s don't force the real ones into
	   memory.  */
	YYSTYPE *yyvs1 = yyvs;
	yytype_int16 *yyss1 = yyss;
	YYLTYPE *yyls1 = yyls;

	/* Each stack pointer address is followed by the size of the
	   data in use in that stack, in bytes.  This used to be a
	   conditional around just the two extra args, but that might
	   be undefined if yyoverflow is a macro.  */
	yyoverflow (YY_("memory exhausted"),
		    &yyss1, yysize * sizeof (*yyssp),
		    &yyvs1, yysize * sizeof (*yyvsp),
		    &yyls1, yysize * sizeof (*yylsp),
		    &yystacksize);

	yyls = yyls1;
	yyss = yyss1;
	yyvs = yyvs1;
      }
#else /* no yyoverflow */
# ifndef YYSTACK_RELOCATE
      goto yyexhaustedlab;
# else
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
	goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
	yystacksize = YYMAXDEPTH;

      {
	yytype_int16 *yyss1 = yyss;
	union yyalloc *yyptr =
	  (union yyalloc *) YYSTACK_ALLOC (YYSTACK_BYTES (yystacksize));
	if (! yyptr)
	  goto yyexhaustedlab;
	YYSTACK_RELOCATE (yyss_alloc, yyss);
	YYSTACK_RELOCATE (yyvs_alloc, yyvs);
	YYSTACK_RELOCATE (yyls_alloc, yyls);
#  undef YYSTACK_RELOCATE
	if (yyss1 != yyssa)
	  YYSTACK_FREE (yyss1);
      }
# endif
#endif /* no yyoverflow */

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;
      yylsp = yyls + yysize - 1;

      YYDPRINTF ((stderr, "Stack size increased to %lu\n",
		  (unsigned long int) yystacksize));

      if (yyss + yystacksize - 1 <= yyssp)
	YYABORT;
    }

  YYDPRINTF ((stderr, "Entering state %d\n", yystate));

  if (yystate == YYFINAL)
    YYACCEPT;

  goto yybackup;

/*-----------.
| yybackup.  |
`-----------*/
yybackup:

  /* Do appropriate processing given the current state.  Read a
     lookahead token if we need one and don't already have one.  */

  /* First try to decide what to do without reference to lookahead token.  */
  yyn = yypact[yystate];
  if (yyn == YYPACT_NINF)
    goto yydefault;

  /* Not known => get a lookahead token if don't already have one.  */

  /* YYCHAR is either YYEMPTY or YYEOF or a valid lookahead symbol.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token: "));
      yychar = YYLEX;
    }

  if (yychar <= YYEOF)
    {
      yychar = yytoken = YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else
    {
      yytoken = YYTRANSLATE (yychar);
      YY_SYMBOL_PRINT ("Next token is", yytoken, &yylval, &yylloc);
    }

  /* If the proper action on seeing token YYTOKEN is to reduce or to
     detect an error, take that action.  */
  yyn += yytoken;
  if (yyn < 0 || YYLAST < yyn || yycheck[yyn] != yytoken)
    goto yydefault;
  yyn = yytable[yyn];
  if (yyn <= 0)
    {
      if (yyn == 0 || yyn == YYTABLE_NINF)
	goto yyerrlab;
      yyn = -yyn;
      goto yyreduce;
    }

  /* Count tokens shifted since error; after three, turn off error
     status.  */
  if (yyerrstatus)
    yyerrstatus--;

  /* Shift the lookahead token.  */
  YY_SYMBOL_PRINT ("Shifting", yytoken, &yylval, &yylloc);

  /* Discard the shifted token.  */
  yychar = YYEMPTY;

  yystate = yyn;
  *++yyvsp = yylval;
  *++yylsp = yylloc;
  goto yynewstate;


/*-----------------------------------------------------------.
| yydefault -- do the default action for the current state.  |
`-----------------------------------------------------------*/
yydefault:
  yyn = yydefact[yystate];
  if (yyn == 0)
    goto yyerrlab;
  goto yyreduce;


/*-----------------------------.
| yyreduce -- Do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     `$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];

  /* Default location.  */
  YYLLOC_DEFAULT (yyloc, (yylsp - yylen), yylen);
  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
        case 2:

/* Line 1455 of yacc.c  */
#line 82 "Parser.y"
    { DEBUGPRINT_BISON("\nMAIN: block"); ;}
    break;

  case 3:

/* Line 1455 of yacc.c  */
#line 86 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK: stat_list"); ;}
    break;

  case 4:

/* Line 1455 of yacc.c  */
#line 87 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK: stat_list ret"); ;}
    break;

  case 5:

/* Line 1455 of yacc.c  */
#line 90 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: stat_list opt_stat"); ;}
    break;

  case 6:

/* Line 1455 of yacc.c  */
#line 91 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: opt_stat"); ;}
    break;

  case 7:

/* Line 1455 of yacc.c  */
#line 94 "Parser.y"
    { DEBUGPRINT_BISON("\nOPT_STAT: stat"); ;}
    break;

  case 8:

/* Line 1455 of yacc.c  */
#line 95 "Parser.y"
    { DEBUGPRINT_BISON("\nOPT_STAT: empty"); ;}
    break;

  case 9:

/* Line 1455 of yacc.c  */
#line 99 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: ';'"); ;}
    break;

  case 10:

/* Line 1455 of yacc.c  */
#line 100 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: var_list '=' exp_list"); ;}
    break;

  case 11:

/* Line 1455 of yacc.c  */
#line 101 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: function_call"); ;}
    break;

  case 12:

/* Line 1455 of yacc.c  */
#line 103 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: label"); ;}
    break;

  case 13:

/* Line 1455 of yacc.c  */
#line 104 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); ;}
    break;

  case 14:

/* Line 1455 of yacc.c  */
#line 105 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); ;}
    break;

  case 15:

/* Line 1455 of yacc.c  */
#line 107 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: while_do"); ;}
    break;

  case 16:

/* Line 1455 of yacc.c  */
#line 109 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: statement"); ;}
    break;

  case 17:

/* Line 1455 of yacc.c  */
#line 110 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: for_cycle"); ;}
    break;

  case 18:

/* Line 1455 of yacc.c  */
#line 112 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: FUNCTION function_name function_body"); ;}
    break;

  case 19:

/* Line 1455 of yacc.c  */
#line 114 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: locals"); ;}
    break;

  case 31:

/* Line 1455 of yacc.c  */
#line 145 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block END"); ;}
    break;

  case 32:

/* Line 1455 of yacc.c  */
#line 147 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if END"); ;}
    break;

  case 33:

/* Line 1455 of yacc.c  */
#line 148 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block ELSE block END"); ;}
    break;

  case 34:

/* Line 1455 of yacc.c  */
#line 149 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if ELSE block END"); ;}
    break;

  case 35:

/* Line 1455 of yacc.c  */
#line 152 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: else_if ELSEIF exp THEN block"); ;}
    break;

  case 36:

/* Line 1455 of yacc.c  */
#line 153 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: ELSEIF exp THEN block"); ;}
    break;

  case 37:

/* Line 1455 of yacc.c  */
#line 160 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: attr_list ',' NAME attr"); ;}
    break;

  case 38:

/* Line 1455 of yacc.c  */
#line 161 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: NAME attr"); ;}
    break;

  case 39:

/* Line 1455 of yacc.c  */
#line 167 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: '<' NAME '>'"); ;}
    break;

  case 40:

/* Line 1455 of yacc.c  */
#line 168 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: empty"); ;}
    break;

  case 41:

/* Line 1455 of yacc.c  */
#line 175 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN"); ;}
    break;

  case 42:

/* Line 1455 of yacc.c  */
#line 176 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN ;'"); ;}
    break;

  case 43:

/* Line 1455 of yacc.c  */
#line 177 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list"); ;}
    break;

  case 44:

/* Line 1455 of yacc.c  */
#line 178 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list ';'"); ;}
    break;

  case 45:

/* Line 1455 of yacc.c  */
#line 184 "Parser.y"
    { DEBUGPRINT_BISON("\nLABEL: LABEL_DEF NAME LABEL_DEF"); ;}
    break;

  case 46:

/* Line 1455 of yacc.c  */
#line 191 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part"); ;}
    break;

  case 47:

/* Line 1455 of yacc.c  */
#line 192 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part ':' NAME"); ;}
    break;

  case 48:

/* Line 1455 of yacc.c  */
#line 196 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: function_name_part '.' NAME"); ;}
    break;

  case 49:

/* Line 1455 of yacc.c  */
#line 197 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: NAME"); ;}
    break;

  case 50:

/* Line 1455 of yacc.c  */
#line 203 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var_list ',' var"); ;}
    break;

  case 51:

/* Line 1455 of yacc.c  */
#line 204 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var"); ;}
    break;

  case 52:

/* Line 1455 of yacc.c  */
#line 210 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: NAME"); ;}
    break;

  case 53:

/* Line 1455 of yacc.c  */
#line 211 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '[' exp ']'"); ;}
    break;

  case 54:

/* Line 1455 of yacc.c  */
#line 212 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '.' NAME"); ;}
    break;

  case 55:

/* Line 1455 of yacc.c  */
#line 218 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: var"); ;}
    break;

  case 56:

/* Line 1455 of yacc.c  */
#line 219 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: function_call"); ;}
    break;

  case 57:

/* Line 1455 of yacc.c  */
#line 220 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: '(' exp ')'"); ;}
    break;

  case 58:

/* Line 1455 of yacc.c  */
#line 226 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: FUNCTION function_body"); ;}
    break;

  case 59:

/* Line 1455 of yacc.c  */
#line 229 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' ')' block END"); ;}
    break;

  case 60:

/* Line 1455 of yacc.c  */
#line 230 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' par_list ')' block END"); ;}
    break;

  case 61:

/* Line 1455 of yacc.c  */
#line 236 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp args"); ;}
    break;

  case 62:

/* Line 1455 of yacc.c  */
#line 237 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp ':' Name args"); ;}
    break;

  case 63:

/* Line 1455 of yacc.c  */
#line 243 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' ')'"); ;}
    break;

  case 64:

/* Line 1455 of yacc.c  */
#line 244 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); ;}
    break;

  case 65:

/* Line 1455 of yacc.c  */
#line 245 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' name_list ')'"); ;}
    break;

  case 66:

/* Line 1455 of yacc.c  */
#line 246 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: literalString"); ;}
    break;

  case 67:

/* Line 1455 of yacc.c  */
#line 252 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list"); ;}
    break;

  case 68:

/* Line 1455 of yacc.c  */
#line 253 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list ',' DOTS"); ;}
    break;

  case 69:

/* Line 1455 of yacc.c  */
#line 254 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: DOTS"); ;}
    break;

  case 70:

/* Line 1455 of yacc.c  */
#line 260 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp_list ',' exp"); ;}
    break;

  case 71:

/* Line 1455 of yacc.c  */
#line 261 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp"); ;}
    break;

  case 72:

/* Line 1455 of yacc.c  */
#line 268 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: name_list ',' NAME"); ;}
    break;

  case 73:

/* Line 1455 of yacc.c  */
#line 269 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: NAME"); ;}
    break;

  case 74:

/* Line 1455 of yacc.c  */
#line 275 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' '}' "); ;}
    break;

  case 75:

/* Line 1455 of yacc.c  */
#line 276 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' field_list '}'"); ;}
    break;

  case 76:

/* Line 1455 of yacc.c  */
#line 283 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part field_sep"); ;}
    break;

  case 77:

/* Line 1455 of yacc.c  */
#line 284 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part"); ;}
    break;

  case 78:

/* Line 1455 of yacc.c  */
#line 288 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field_list_part field_sep"); ;}
    break;

  case 79:

/* Line 1455 of yacc.c  */
#line 289 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field"); ;}
    break;

  case 80:

/* Line 1455 of yacc.c  */
#line 294 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); ;}
    break;

  case 81:

/* Line 1455 of yacc.c  */
#line 295 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); ;}
    break;

  case 82:

/* Line 1455 of yacc.c  */
#line 296 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: exp"); ;}
    break;

  case 83:

/* Line 1455 of yacc.c  */
#line 300 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ','"); ;}
    break;

  case 84:

/* Line 1455 of yacc.c  */
#line 301 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ';'"); ;}
    break;

  case 85:

/* Line 1455 of yacc.c  */
#line 305 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: NIL"); ;}
    break;

  case 86:

/* Line 1455 of yacc.c  */
#line 306 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: FALSE"); ;}
    break;

  case 87:

/* Line 1455 of yacc.c  */
#line 307 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: TRUE"); ;}
    break;

  case 88:

/* Line 1455 of yacc.c  */
#line 308 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: DOTS"); ;}
    break;

  case 89:

/* Line 1455 of yacc.c  */
#line 310 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: '(' exp ')' "); ;}
    break;

  case 90:

/* Line 1455 of yacc.c  */
#line 311 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); ;}
    break;

  case 91:

/* Line 1455 of yacc.c  */
#line 312 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); ;}
    break;

  case 92:

/* Line 1455 of yacc.c  */
#line 315 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '<' exp"); ;}
    break;

  case 93:

/* Line 1455 of yacc.c  */
#line 316 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '>' exp"); ;}
    break;

  case 94:

/* Line 1455 of yacc.c  */
#line 319 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: MINUS exp"); ;}
    break;

  case 95:

/* Line 1455 of yacc.c  */
#line 320 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: UNOP exp"); ;}
    break;

  case 96:

/* Line 1455 of yacc.c  */
#line 321 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: numeral"); ;}
    break;

  case 97:

/* Line 1455 of yacc.c  */
#line 322 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: literalString"); ;}
    break;

  case 98:

/* Line 1455 of yacc.c  */
#line 323 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: table_body"); ;}
    break;

  case 99:

/* Line 1455 of yacc.c  */
#line 325 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_def"); ;}
    break;

  case 100:

/* Line 1455 of yacc.c  */
#line 326 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_call"); ;}
    break;

  case 102:

/* Line 1455 of yacc.c  */
#line 332 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); ;}
    break;

  case 103:

/* Line 1455 of yacc.c  */
#line 333 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); ;}
    break;

  case 104:

/* Line 1455 of yacc.c  */
#line 334 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: LONGSTRING"); ;}
    break;

  case 105:

/* Line 1455 of yacc.c  */
#line 339 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: INT"); ;}
    break;

  case 106:

/* Line 1455 of yacc.c  */
#line 340 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX"); ;}
    break;

  case 107:

/* Line 1455 of yacc.c  */
#line 341 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: FLOAT"); ;}
    break;

  case 108:

/* Line 1455 of yacc.c  */
#line 342 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX_FLOAT"); ;}
    break;



/* Line 1455 of yacc.c  */
#line 2331 "Parser.tab.c"
      default: break;
    }
  YY_SYMBOL_PRINT ("-> $$ =", yyr1[yyn], &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);

  *++yyvsp = yyval;
  *++yylsp = yyloc;

  /* Now `shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */

  yyn = yyr1[yyn];

  yystate = yypgoto[yyn - YYNTOKENS] + *yyssp;
  if (0 <= yystate && yystate <= YYLAST && yycheck[yystate] == *yyssp)
    yystate = yytable[yystate];
  else
    yystate = yydefgoto[yyn - YYNTOKENS];

  goto yynewstate;


/*------------------------------------.
| yyerrlab -- here on detecting error |
`------------------------------------*/
yyerrlab:
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
      {
	YYSIZE_T yysize = yysyntax_error (0, yystate, yychar);
	if (yymsg_alloc < yysize && yymsg_alloc < YYSTACK_ALLOC_MAXIMUM)
	  {
	    YYSIZE_T yyalloc = 2 * yysize;
	    if (! (yysize <= yyalloc && yyalloc <= YYSTACK_ALLOC_MAXIMUM))
	      yyalloc = YYSTACK_ALLOC_MAXIMUM;
	    if (yymsg != yymsgbuf)
	      YYSTACK_FREE (yymsg);
	    yymsg = (char *) YYSTACK_ALLOC (yyalloc);
	    if (yymsg)
	      yymsg_alloc = yyalloc;
	    else
	      {
		yymsg = yymsgbuf;
		yymsg_alloc = sizeof yymsgbuf;
	      }
	  }

	if (0 < yysize && yysize <= yymsg_alloc)
	  {
	    (void) yysyntax_error (yymsg, yystate, yychar);
	    yyerror (yymsg);
	  }
	else
	  {
	    yyerror (YY_("syntax error"));
	    if (yysize != 0)
	      goto yyexhaustedlab;
	  }
      }
#endif
    }

  yyerror_range[0] = yylloc;

  if (yyerrstatus == 3)
    {
      /* If just tried and failed to reuse lookahead token after an
	 error, discard it.  */

      if (yychar <= YYEOF)
	{
	  /* Return failure if at end of input.  */
	  if (yychar == YYEOF)
	    YYABORT;
	}
      else
	{
	  yydestruct ("Error: discarding",
		      yytoken, &yylval, &yylloc);
	  yychar = YYEMPTY;
	}
    }

  /* Else will try to reuse lookahead token after shifting the error
     token.  */
  goto yyerrlab1;


/*---------------------------------------------------.
| yyerrorlab -- error raised explicitly by YYERROR.  |
`---------------------------------------------------*/
yyerrorlab:

  /* Pacify compilers like GCC when the user code never invokes
     YYERROR and the label yyerrorlab therefore never appears in user
     code.  */
  if (/*CONSTCOND*/ 0)
     goto yyerrorlab;

  yyerror_range[0] = yylsp[1-yylen];
  /* Do not reclaim the symbols of the rule which action triggered
     this YYERROR.  */
  YYPOPSTACK (yylen);
  yylen = 0;
  YY_STACK_PRINT (yyss, yyssp);
  yystate = *yyssp;
  goto yyerrlab1;


/*-------------------------------------------------------------.
| yyerrlab1 -- common code for both syntax error and YYERROR.  |
`-------------------------------------------------------------*/
yyerrlab1:
  yyerrstatus = 3;	/* Each real token shifted decrements this.  */

  for (;;)
    {
      yyn = yypact[yystate];
      if (yyn != YYPACT_NINF)
	{
	  yyn += YYTERROR;
	  if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYTERROR)
	    {
	      yyn = yytable[yyn];
	      if (0 < yyn)
		break;
	    }
	}

      /* Pop the current state because it cannot handle the error token.  */
      if (yyssp == yyss)
	YYABORT;

      yyerror_range[0] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  *++yyvsp = yylval;

  yyerror_range[1] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, (yyerror_range - 1), 2);
  *++yylsp = yyloc;

  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", yystos[yyn], yyvsp, yylsp);

  yystate = yyn;
  goto yynewstate;


/*-------------------------------------.
| yyacceptlab -- YYACCEPT comes here.  |
`-------------------------------------*/
yyacceptlab:
  yyresult = 0;
  goto yyreturn;

/*-----------------------------------.
| yyabortlab -- YYABORT comes here.  |
`-----------------------------------*/
yyabortlab:
  yyresult = 1;
  goto yyreturn;

#if !defined(yyoverflow) || YYERROR_VERBOSE
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  /* Fall through.  */
#endif

yyreturn:
  if (yychar != YYEMPTY)
     yydestruct ("Cleanup: discarding lookahead",
		 yytoken, &yylval, &yylloc);
  /* Do not reclaim the symbols of the rule which action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
		  yystos[*yyssp], yyvsp, yylsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif
#if YYERROR_VERBOSE
  if (yymsg != yymsgbuf)
    YYSTACK_FREE (yymsg);
#endif
  /* Make sure YYID is used.  */
  return YYID (yyresult);
}



/* Line 1675 of yacc.c  */
#line 360 "Parser.y"


int parser_main(int argc, char *argv[])
{
	FILE *fp = NULL;
	if (argc == 2)
	{
		fp = fopen(argv[1], "rb");
		if (fp == NULL)
		{
			perror("Failed to open file.");
			return -1;
		}
		else
		{
			yyin = fp;
		}
	}
	yyparse();

	if(fp != NULL)
	{
		fclose(fp);
	}
	return 0;

}

int yyerror(const char *p)
{ 
	printf("\n%s in line %d. %d:%d - %d:%d\n", p, yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column);
	return 0;
}

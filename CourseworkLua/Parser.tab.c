/* A Bison parser, made by GNU Bison 2.7.12-4996.  */

/* Bison implementation for Yacc-like parsers in C
   
      Copyright (C) 1984, 1989-1990, 2000-2013 Free Software Foundation, Inc.
   
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
#define YYBISON_VERSION "2.7.12-4996"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* Copy the first part of user declarations.  */
/* Line 371 of yacc.c  */
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



/* Line 371 of yacc.c  */
#line 101 "Parser.tab.c"

# ifndef YY_NULL
#  if defined __cplusplus && 201103L <= __cplusplus
#   define YY_NULL nullptr
#  else
#   define YY_NULL 0
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* In a future release of Bison, this section will be replaced
   by #include "Parser.tab.h".  */
#ifndef YY_YY_PARSER_TAB_H_INCLUDED
# define YY_YY_PARSER_TAB_H_INCLUDED
/* Enabling traces.  */
#ifndef YYDEBUG
# define YYDEBUG 1
#endif
#if YYDEBUG
extern int yydebug;
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

extern YYSTYPE yylval;
extern YYLTYPE yylloc;
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

#endif /* !YY_YY_PARSER_TAB_H_INCLUDED  */

/* Copy the second part of user declarations.  */

/* Line 390 of yacc.c  */
#line 217 "Parser.tab.c"

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
# if defined YYENABLE_NLS && YYENABLE_NLS
#  if ENABLE_NLS
#   include <libintl.h> /* INFRINGES ON USER NAME SPACE */
#   define YY_(Msgid) dgettext ("bison-runtime", Msgid)
#  endif
# endif
# ifndef YY_
#  define YY_(Msgid) Msgid
# endif
#endif

#ifndef __attribute__
/* This feature is available in gcc versions 2.5 and later.  */
# if (! defined __GNUC__ || __GNUC__ < 2 \
      || (__GNUC__ == 2 && __GNUC_MINOR__ < 5))
#  define __attribute__(Spec) /* empty */
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif


/* Identity function, used to suppress warnings about constant conditions.  */
#ifndef lint
# define YYID(N) (N)
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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
#     include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
      /* Use EXIT_SUCCESS as a witness for stdlib.h.  */
#     ifndef EXIT_SUCCESS
#      define EXIT_SUCCESS 0
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
#  if (defined __cplusplus && ! defined EXIT_SUCCESS \
       && ! ((defined YYMALLOC || defined malloc) \
	     && (defined YYFREE || defined free)))
#   include <stdlib.h> /* INFRINGES ON USER NAME SPACE */
#   ifndef EXIT_SUCCESS
#    define EXIT_SUCCESS 0
#   endif
#  endif
#  ifndef YYMALLOC
#   define YYMALLOC malloc
#   if ! defined malloc && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS && (defined __STDC__ || defined __C99__FUNC__ \
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

# define YYCOPY_NEEDED 1

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

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, (Count) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYSIZE_T yyi;                         \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (YYID (0))
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  66
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   467

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  51
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  107
/* YYNRULES -- Number of states.  */
#define YYNSTATES  199

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
      45,    49,    55,    60,    65,    68,    73,    81,    89,    93,
      97,   103,   110,   118,   127,   133,   138,   143,   146,   150,
     151,   153,   156,   159,   163,   167,   169,   173,   177,   179,
     183,   185,   187,   192,   196,   198,   200,   204,   207,   212,
     218,   221,   226,   229,   233,   235,   237,   239,   243,   245,
     249,   251,   255,   257,   260,   264,   267,   269,   273,   275,
     281,   285,   287,   289,   291,   293,   295,   297,   299,   303,
     307,   311,   315,   319,   322,   325,   327,   329,   331,   333,
     335,   337,   339,   341,   343,   345,   347,   349
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
      -1,    23,    60,    28,    74,    21,    53,    26,    -1,    60,
      40,    84,    -1,    84,    40,    84,    -1,    29,    84,    30,
      53,    26,    -1,    29,    84,    30,    53,    62,    26,    -1,
      29,    84,    30,    53,    32,    53,    26,    -1,    29,    84,
      30,    53,    62,    32,    53,    26,    -1,    62,    31,    84,
      30,    53,    -1,    31,    84,    30,    53,    -1,    63,    40,
      13,    64,    -1,    13,    64,    -1,    41,    13,    42,    -1,
      -1,    36,    -1,    36,    38,    -1,    36,    77,    -1,    36,
      77,    38,    -1,    37,    13,    37,    -1,    68,    -1,    68,
      43,    13,    -1,    68,    44,    13,    -1,    13,    -1,    69,
      40,    70,    -1,    70,    -1,    13,    -1,    71,    45,    84,
      46,    -1,    71,    44,    13,    -1,    70,    -1,    74,    -1,
      47,    84,    48,    -1,    34,    73,    -1,    47,    48,    53,
      26,    -1,    47,    76,    48,    53,    26,    -1,    71,    75,
      -1,    71,    43,    13,    75,    -1,    47,    48,    -1,    47,
      77,    48,    -1,    79,    -1,    85,    -1,    78,    -1,    78,
      40,    14,    -1,    14,    -1,    77,    40,    84,    -1,    84,
      -1,    78,    40,    13,    -1,    13,    -1,    49,    50,    -1,
      49,    80,    50,    -1,    81,    83,    -1,    81,    -1,    81,
      83,    82,    -1,    82,    -1,    45,    84,    46,    39,    84,
      -1,    13,    39,    84,    -1,    84,    -1,    40,    -1,    38,
      -1,    15,    -1,    16,    -1,    17,    -1,    14,    -1,    47,
      84,    48,    -1,    84,    18,    84,    -1,    84,    20,    84,
      -1,    84,    41,    84,    -1,    84,    42,    84,    -1,    20,
      84,    -1,    19,    84,    -1,    86,    -1,    85,    -1,    79,
      -1,    72,    -1,    74,    -1,    70,    -1,     9,    -1,    10,
      -1,    11,    -1,     3,    -1,     4,    -1,     5,    -1,     6,
      -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    86,    87,    90,    91,    94,    95,    99,
     100,   101,   103,   104,   105,   107,   109,   110,   112,   114,
     118,   119,   120,   125,   127,   128,   133,   134,   137,   138,
     144,   146,   147,   148,   151,   152,   159,   160,   166,   167,
     174,   175,   176,   177,   183,   190,   191,   195,   196,   202,
     203,   209,   210,   211,   217,   218,   219,   225,   228,   229,
     235,   236,   242,   243,   244,   245,   251,   252,   253,   259,
     260,   267,   268,   274,   275,   282,   283,   287,   288,   293,
     294,   295,   299,   300,   304,   305,   306,   307,   309,   310,
     311,   314,   315,   318,   319,   320,   321,   322,   324,   325,
     327,   331,   332,   333,   338,   339,   340,   341
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
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
  "field_sep", "exp", "literalString", "numeral", YY_NULL
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
      57,    57,    57,    58,    58,    58,    59,    59,    60,    60,
      61,    61,    61,    61,    62,    62,    63,    63,    64,    64,
      65,    65,    65,    65,    66,    67,    67,    68,    68,    69,
      69,    70,    70,    70,    71,    71,    71,    72,    73,    73,
      74,    74,    75,    75,    75,    75,    76,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    82,
      82,    82,    83,    83,    84,    84,    84,    84,    84,    84,
      84,    84,    84,    84,    84,    84,    84,    84,    84,    84,
      84,    85,    85,    85,    86,    86,    86,    86
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     0,     1,
       3,     1,     1,     1,     2,     1,     1,     1,     3,     1,
       3,     5,     4,     4,     2,     4,     7,     7,     3,     3,
       5,     6,     7,     8,     5,     4,     4,     2,     3,     0,
       1,     2,     2,     3,     3,     1,     3,     3,     1,     3,
       1,     1,     4,     3,     1,     1,     3,     2,     4,     5,
       2,     4,     2,     3,     1,     1,     1,     3,     1,     3,
       1,     3,     1,     2,     3,     2,     1,     3,     1,     5,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     3,
       3,     3,     3,     2,     2,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    51,     8,     0,     0,     8,     0,     0,     0,     0,
      13,     0,     9,     0,     0,     2,     3,     6,     7,    15,
      19,    17,    16,    12,     0,    54,     0,    11,     0,   104,
     105,   106,   107,   101,   102,   103,    87,    84,    85,    86,
       0,     0,     0,     0,     0,   100,    98,    99,    97,     0,
      96,    95,    51,     0,     0,     0,    14,     0,    39,     0,
      24,    48,     0,    45,     0,     0,     1,    40,     5,     4,
       0,     0,     0,     0,     0,     0,    60,    64,    65,    20,
      94,    93,     0,    57,     0,    51,     0,    73,     0,    76,
      78,    81,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     8,     0,    37,     0,     0,     0,    18,     0,
       0,    44,    56,    41,    42,    70,    10,    54,    55,     0,
      53,     0,    62,     0,    72,    68,     8,     0,    66,    88,
       0,     0,    74,    83,    82,    75,    89,    90,     0,    91,
      92,     0,    54,    55,    28,    29,    22,     0,     0,    23,
      25,    39,    46,    47,    43,     0,    61,    52,    63,     0,
       8,     0,    80,     0,    77,    21,     8,     8,    30,     0,
       8,     0,    38,    36,    69,    58,     0,    71,    67,     0,
       0,     0,     0,     0,    31,     0,     8,    59,    79,    26,
      27,     8,    32,     0,     0,    35,     8,    33,    34
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    21,    53,
      22,   171,    60,   104,    69,    23,    62,    63,    24,    45,
      26,    46,    83,    47,    76,   127,   114,   128,    48,    88,
      89,    90,   135,   115,    50,    51
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
     400,   -62,   400,   343,   365,   400,    -5,   343,    11,     6,
     -62,    41,   -62,   343,    35,   -62,   373,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    22,    69,   114,    56,    -4,   -62,
     -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     343,   343,    12,   343,    23,   163,   -62,   172,   -62,   346,
     -62,   -62,    30,   -10,   399,    60,   -62,   309,    33,    66,
      91,   -62,    12,     5,    53,    95,   -62,    72,   -62,   -62,
     343,     4,   101,   104,   343,   248,   -62,   -62,   -62,   -62,
     214,   214,    -7,   -62,    98,    65,   343,   -62,    78,    20,
     -62,   214,   343,   343,   400,   343,   343,   343,     4,   343,
     343,   343,   400,   121,   -62,    12,   343,   125,   -62,   128,
     129,   -62,   -62,   -62,    55,   214,    82,    93,   -62,   276,
     -62,   109,   -62,   -27,   -62,   -62,   400,    97,   107,   227,
     343,   183,   -62,   -62,   -62,   296,   214,   214,   122,   214,
     214,    -9,   -62,   133,   214,   214,   214,    21,   123,   -62,
      82,    33,   -62,   -62,   -62,   343,   -62,   -62,   -62,   138,
     400,    50,   214,   110,   -62,   -62,   400,   400,   -62,   343,
     400,    24,   -62,   -62,   214,   -62,   142,   -62,   -62,   343,
     145,   151,   412,   154,   -62,   343,   400,   -62,   214,   -62,
     -62,   400,   -62,   425,   161,   -62,   400,   -62,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,    18,   -62,   178,   -62,   -62,   -62,   -62,   100,
     -62,   -62,   -62,    47,   -62,   -62,   -62,   -62,   -62,     0,
     -62,   -62,   -61,     9,    80,   -62,   -60,   -62,   -23,   -62,
     -62,    67,   -62,   149,   -22,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -57
static const yytype_int16 yytable[] =
{
      25,   108,    25,    77,    78,    25,   124,   125,    56,    27,
     116,    27,   166,   155,    27,   123,    25,     1,    98,    61,
      28,   158,    79,    55,    58,    27,    29,    30,    31,    32,
      99,    99,    33,    34,    35,    66,    85,    36,    37,    38,
      39,   126,    40,    41,   149,    59,   150,   168,   109,   110,
     184,    13,   169,   170,    64,   185,   186,    42,   133,    82,
     134,    70,    71,   177,   178,   -55,   -55,   -55,    86,    97,
      43,   117,    44,    87,   103,    29,    30,    31,    32,   105,
     118,    33,    34,    35,   101,     1,    36,    37,    38,    39,
     111,    40,    41,   154,    25,   155,    77,    78,   142,   -55,
     -55,   -55,    25,    27,   130,   -55,    42,   143,   -50,   -50,
     113,    27,   138,    92,   119,    93,    92,   120,    93,    43,
     147,    44,   155,    33,    34,    35,    25,    92,   132,    93,
     106,   107,   -49,   -49,   148,    27,    95,    96,   151,    95,
      96,   152,   153,   112,   159,   160,   129,   161,   165,   179,
      95,    96,    49,    54,   167,   157,    57,    72,    73,    74,
      25,    75,    65,    44,   175,   172,    25,    25,   187,    27,
      25,   189,   -54,   -54,   -54,    27,    27,   190,   176,    27,
     192,   -55,   -55,   -55,   180,   181,    25,   197,   183,    80,
      81,    25,    84,    91,    68,    27,    25,   141,   173,   156,
      27,    92,   164,    93,   194,    27,   -54,   -54,   -54,   195,
     -54,     0,   -54,     0,   198,   -55,   -55,   -55,     0,   -55,
       0,   -55,     0,   121,    95,    96,     0,     0,     0,   163,
       0,     0,    92,     0,    93,   131,   -56,   -56,   -56,     0,
       0,   136,   137,     0,   139,   140,    54,     0,   144,   145,
     146,    29,    30,    31,    32,    95,    96,    33,    34,    35,
       0,     1,    36,    37,    38,    39,     0,    40,    41,     0,
     -56,   -56,   -56,     0,   -56,     0,   -56,     0,     0,   162,
       0,     0,    42,     0,    91,    33,    34,    35,     0,     0,
       0,     0,     0,     0,     0,    43,   122,    44,     0,    29,
      30,    31,    32,     0,   174,    33,    34,    35,     0,    85,
      36,    37,    38,    39,     0,    40,    41,     0,   182,     0,
       0,     0,     0,    75,     0,    44,     0,    92,   188,    93,
      42,     0,     0,     0,   193,     0,     0,     0,     0,   102,
       0,    86,     0,    43,     0,    44,    29,    30,    31,    32,
      95,    96,    33,    34,    35,     0,     1,    36,    37,    38,
      39,     0,    40,    41,    92,     0,    93,    94,    29,    30,
      31,    32,     0,     0,    33,    34,    35,    42,    52,    36,
      37,    38,    39,     0,    40,    41,     1,    95,    96,     0,
      43,     0,    44,     0,     2,     3,     4,     0,     5,    42,
       6,     0,     7,     0,     0,     0,     8,     9,    10,    67,
      11,    12,    43,     1,    44,     0,     0,    92,     0,    93,
      13,     2,     3,     4,     0,     5,     0,     6,     0,     7,
      92,     0,    93,     8,     9,    10,     0,    11,    12,   100,
      95,    96,   191,    92,     0,    93,     0,    13,     0,     0,
       0,     0,     0,    95,    96,   196,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     0,    95,    96
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       0,    62,     2,    26,    26,     5,    13,    14,    13,     0,
      70,     2,    21,    40,     5,    75,    16,    13,    28,    13,
       2,    48,    26,     5,    13,    16,     3,     4,     5,     6,
      40,    40,     9,    10,    11,     0,    13,    14,    15,    16,
      17,    48,    19,    20,   105,    34,   106,    26,    43,    44,
      26,    47,    31,    32,    13,    31,    32,    34,    38,    47,
      40,    39,    40,    13,    14,     9,    10,    11,    45,    39,
      47,    71,    49,    50,    41,     3,     4,     5,     6,    13,
      71,     9,    10,    11,    24,    13,    14,    15,    16,    17,
      37,    19,    20,    38,    94,    40,   119,   119,    98,    43,
      44,    45,   102,    94,    39,    49,    34,    98,    39,    40,
      38,   102,    94,    18,    13,    20,    18,    13,    20,    47,
     102,    49,    40,     9,    10,    11,   126,    18,    50,    20,
      39,    40,    39,    40,    13,   126,    41,    42,    13,    41,
      42,    13,    13,    48,   126,    48,    48,    40,    26,    39,
      41,    42,     3,     4,    21,    46,     7,    43,    44,    45,
     160,    47,    13,    49,    26,    42,   166,   167,    26,   160,
     170,    26,     9,    10,    11,   166,   167,    26,   160,   170,
      26,     9,    10,    11,   166,   167,   186,    26,   170,    40,
      41,   191,    43,    44,    16,   186,   196,    97,   151,   119,
     191,    18,   135,    20,   186,   196,    43,    44,    45,   191,
      47,    -1,    49,    -1,   196,    43,    44,    45,    -1,    47,
      -1,    49,    -1,    74,    41,    42,    -1,    -1,    -1,    46,
      -1,    -1,    18,    -1,    20,    86,     9,    10,    11,    -1,
      -1,    92,    93,    -1,    95,    96,    97,    -1,    99,   100,
     101,     3,     4,     5,     6,    41,    42,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    -1,    19,    20,    -1,
      43,    44,    45,    -1,    47,    -1,    49,    -1,    -1,   130,
      -1,    -1,    34,    -1,   135,     9,    10,    11,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    47,    48,    49,    -1,     3,
       4,     5,     6,    -1,   155,     9,    10,    11,    -1,    13,
      14,    15,    16,    17,    -1,    19,    20,    -1,   169,    -1,
      -1,    -1,    -1,    47,    -1,    49,    -1,    18,   179,    20,
      34,    -1,    -1,    -1,   185,    -1,    -1,    -1,    -1,    30,
      -1,    45,    -1,    47,    -1,    49,     3,     4,     5,     6,
      41,    42,     9,    10,    11,    -1,    13,    14,    15,    16,
      17,    -1,    19,    20,    18,    -1,    20,    21,     3,     4,
       5,     6,    -1,    -1,     9,    10,    11,    34,    13,    14,
      15,    16,    17,    -1,    19,    20,    13,    41,    42,    -1,
      47,    -1,    49,    -1,    21,    22,    23,    -1,    25,    34,
      27,    -1,    29,    -1,    -1,    -1,    33,    34,    35,    36,
      37,    38,    47,    13,    49,    -1,    -1,    18,    -1,    20,
      47,    21,    22,    23,    -1,    25,    -1,    27,    -1,    29,
      18,    -1,    20,    33,    34,    35,    -1,    37,    38,    40,
      41,    42,    30,    18,    -1,    20,    -1,    47,    -1,    -1,
      -1,    -1,    -1,    41,    42,    30,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    -1,    -1,    -1,    41,    42
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
      40,    24,    30,    41,    64,    13,    39,    40,    73,    43,
      44,    37,    48,    38,    77,    84,    77,    70,    74,    13,
      13,    84,    48,    77,    13,    14,    48,    76,    78,    48,
      39,    84,    50,    38,    40,    83,    84,    84,    53,    84,
      84,    60,    70,    74,    84,    84,    84,    53,    13,    73,
      77,    13,    13,    13,    38,    40,    75,    46,    48,    53,
      48,    40,    84,    46,    82,    26,    21,    21,    26,    31,
      32,    62,    42,    64,    84,    26,    53,    13,    14,    39,
      53,    53,    84,    53,    26,    31,    32,    26,    84,    26,
      26,    30,    26,    84,    53,    53,    30,    26,    53
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
   Once GCC version 2 has supplanted version 1, this can go.  However,
   YYFAIL appears to be in use.  Nevertheless, it is formally deprecated
   in Bison 2.4.2's NEWS entry, where a plan to phase it out is
   discussed.  */

#define YYFAIL		goto yyerrlab
#if defined YYFAIL
  /* This is here to suppress warnings from the GCC cpp's
     -Wunused-macros.  Normally we don't worry about that warning, but
     some users do, and we want to make it easy for users to remove
     YYFAIL uses, which will produce warnings from Bison 2.5.  */
#endif

#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                  \
do                                                              \
  if (yychar == YYEMPTY)                                        \
    {                                                           \
      yychar = (Token);                                         \
      yylval = (Value);                                         \
      YYPOPSTACK (yylen);                                       \
      yystate = *yyssp;                                         \
      goto yybackup;                                            \
    }                                                           \
  else                                                          \
    {                                                           \
      yyerror (YY_("syntax error: cannot back up")); \
      YYERROR;							\
    }								\
while (YYID (0))

/* Error token number */
#define YYTERROR	1
#define YYERRCODE	256


/* YYLLOC_DEFAULT -- Set CURRENT to span from RHS[1] to RHS[N].
   If N is 0, then set CURRENT to the empty location which ends
   the previous symbol: RHS[0] (always defined).  */

#ifndef YYLLOC_DEFAULT
# define YYLLOC_DEFAULT(Current, Rhs, N)                                \
    do                                                                  \
      if (YYID (N))                                                     \
        {                                                               \
          (Current).first_line   = YYRHSLOC (Rhs, 1).first_line;        \
          (Current).first_column = YYRHSLOC (Rhs, 1).first_column;      \
          (Current).last_line    = YYRHSLOC (Rhs, N).last_line;         \
          (Current).last_column  = YYRHSLOC (Rhs, N).last_column;       \
        }                                                               \
      else                                                              \
        {                                                               \
          (Current).first_line   = (Current).last_line   =              \
            YYRHSLOC (Rhs, 0).last_line;                                \
          (Current).first_column = (Current).last_column =              \
            YYRHSLOC (Rhs, 0).last_column;                              \
        }                                                               \
    while (YYID (0))
#endif

#define YYRHSLOC(Rhs, K) ((Rhs)[K])


/* YY_LOCATION_PRINT -- Print the location on the stream.
   This macro was not mandated originally: define only if we know
   we won't break user code: when these are the locations we know.  */

#ifndef YY_LOCATION_PRINT
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL

/* Print *YYLOCP on YYO.  Private, do not rely on its existence. */

__attribute__((__unused__))
#if (defined __STDC__ || defined __C99__FUNC__ \
     || defined __cplusplus || defined _MSC_VER)
static unsigned
yy_location_print_ (FILE *yyo, YYLTYPE const * const yylocp)
#else
static unsigned
yy_location_print_ (yyo, yylocp)
    FILE *yyo;
    YYLTYPE const * const yylocp;
#endif
{
  unsigned res = 0;
  int end_col = 0 != yylocp->last_column ? yylocp->last_column - 1 : 0;
  if (0 <= yylocp->first_line)
    {
      res += fprintf (yyo, "%d", yylocp->first_line);
      if (0 <= yylocp->first_column)
        res += fprintf (yyo, ".%d", yylocp->first_column);
    }
  if (0 <= yylocp->last_line)
    {
      if (yylocp->first_line < yylocp->last_line)
        {
          res += fprintf (yyo, "-%d", yylocp->last_line);
          if (0 <= end_col)
            res += fprintf (yyo, ".%d", end_col);
        }
      else if (0 <= end_col && yylocp->first_column < end_col)
        res += fprintf (yyo, "-%d", end_col);
    }
  return res;
 }

#  define YY_LOCATION_PRINT(File, Loc)          \
  yy_location_print_ (File, &(Loc))

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
  FILE *yyo = yyoutput;
  YYUSE (yyo);
  if (!yyvaluep)
    return;
  YYUSE (yylocationp);
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyoutput, yytoknum[yytype], *yyvaluep);
# else
  YYUSE (yyoutput);
# endif
  YYUSE (yytype);
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

/* Copy into *YYMSG, which is of size *YYMSG_ALLOC, an error message
   about the unexpected token YYTOKEN for the state stack whose top is
   YYSSP.

   Return 0 if *YYMSG was successfully written.  Return 1 if *YYMSG is
   not large enough to hold the message.  In that case, also set
   *YYMSG_ALLOC to the required number of bytes.  Return 2 if the
   required number of bytes is too large to store.  */
static int
yysyntax_error (YYSIZE_T *yymsg_alloc, char **yymsg,
                yytype_int16 *yyssp, int yytoken)
{
  YYSIZE_T yysize0 = yytnamerr (YY_NULL, yytname[yytoken]);
  YYSIZE_T yysize = yysize0;
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULL;
  /* Arguments of yyformat. */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Number of reported tokens (one for the "unexpected", one per
     "expected"). */
  int yycount = 0;

  /* There are many possibilities here to consider:
     - Assume YYFAIL is not used.  It's too flawed to consider.  See
       <http://lists.gnu.org/archive/html/bison-patches/2009-12/msg00024.html>
       for details.  YYERROR is fine as it does not invoke this
       function.
     - If this state is a consistent state with a default action, then
       the only way this function was invoked is if the default action
       is an error action.  In that case, don't check for expected
       tokens because there are none.
     - The only way there can be no lookahead present (in yychar) is if
       this state is a consistent state with a default action.  Thus,
       detecting the absence of a lookahead is sufficient to determine
       that there is no unexpected or expected token to report.  In that
       case, just report a simple "syntax error".
     - Don't assume there isn't a lookahead just because this state is a
       consistent state with a default action.  There might have been a
       previous inconsistent state, consistent state with a non-default
       action, or user semantic action that manipulated yychar.
     - Of course, the expected token list depends on states to have
       correct lookahead information, and it depends on the parser not
       to perform extra reductions after fetching a lookahead from the
       scanner and before detecting a syntax error.  Thus, state merging
       (from LALR or IELR) and default reductions corrupt the expected
       token list.  However, the list is correct for canonical LR with
       one exception: it will still contain any token that will not be
       accepted due to an error action in a later state.
  */
  if (yytoken != YYEMPTY)
    {
      int yyn = yypact[*yyssp];
      yyarg[yycount++] = yytname[yytoken];
      if (!yypact_value_is_default (yyn))
        {
          /* Start YYX at -YYN if negative to avoid negative indexes in
             YYCHECK.  In other words, skip the first -YYN actions for
             this state because they are default actions.  */
          int yyxbegin = yyn < 0 ? -yyn : 0;
          /* Stay within bounds of both yycheck and yytname.  */
          int yychecklim = YYLAST - yyn + 1;
          int yyxend = yychecklim < YYNTOKENS ? yychecklim : YYNTOKENS;
          int yyx;

          for (yyx = yyxbegin; yyx < yyxend; ++yyx)
            if (yycheck[yyx + yyn] == yyx && yyx != YYTERROR
                && !yytable_value_is_error (yytable[yyx + yyn]))
              {
                if (yycount == YYERROR_VERBOSE_ARGS_MAXIMUM)
                  {
                    yycount = 1;
                    yysize = yysize0;
                    break;
                  }
                yyarg[yycount++] = yytname[yyx];
                {
                  YYSIZE_T yysize1 = yysize + yytnamerr (YY_NULL, yytname[yyx]);
                  if (! (yysize <= yysize1
                         && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
                    return 2;
                  yysize = yysize1;
                }
              }
        }
    }

  switch (yycount)
    {
# define YYCASE_(N, S)                      \
      case N:                               \
        yyformat = S;                       \
      break
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    YYSIZE_T yysize1 = yysize + yystrlen (yyformat);
    if (! (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM))
      return 2;
    yysize = yysize1;
  }

  if (*yymsg_alloc < yysize)
    {
      *yymsg_alloc = 2 * yysize;
      if (! (yysize <= *yymsg_alloc
             && *yymsg_alloc <= YYSTACK_ALLOC_MAXIMUM))
        *yymsg_alloc = YYSTACK_ALLOC_MAXIMUM;
      return 1;
    }

  /* Avoid sprintf, as that infringes on the user's name space.
     Don't have undefined behavior even if the translation
     produced a string with the wrong number of "%s"s.  */
  {
    char *yyp = *yymsg;
    int yyi = 0;
    while ((*yyp = *yyformat) != '\0')
      if (*yyp == '%' && yyformat[1] == 's' && yyi < yycount)
        {
          yyp += yytnamerr (yyp, yyarg[yyi++]);
          yyformat += 2;
        }
      else
        {
          yyp++;
          yyformat++;
        }
  }
  return 0;
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

  YYUSE (yytype);
}




/* The lookahead symbol.  */
int yychar;


#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval YY_INITIAL_VALUE(yyval_default);

/* Location data for the lookahead symbol.  */
YYLTYPE yylloc
# if defined YYLTYPE_IS_TRIVIAL && YYLTYPE_IS_TRIVIAL
  = { 1, 1, 1, 1 }
# endif
;


/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

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

       Refer to the stacks through separate pointers, to allow yyoverflow
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
    YYLTYPE yyerror_range[3];

    YYSIZE_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
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

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yylsp = yyls = yylsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  yylsp[0] = yylloc;
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
  if (yypact_value_is_default (yyn))
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
      if (yytable_value_is_error (yyn))
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
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END
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
/* Line 1802 of yacc.c  */
#line 82 "Parser.y"
    { DEBUGPRINT_BISON("\nMAIN: block"); }
    break;

  case 3:
/* Line 1802 of yacc.c  */
#line 86 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK: stat_list"); }
    break;

  case 4:
/* Line 1802 of yacc.c  */
#line 87 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK: stat_list ret"); }
    break;

  case 5:
/* Line 1802 of yacc.c  */
#line 90 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: stat_list opt_stat"); }
    break;

  case 6:
/* Line 1802 of yacc.c  */
#line 91 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: opt_stat"); }
    break;

  case 7:
/* Line 1802 of yacc.c  */
#line 94 "Parser.y"
    { DEBUGPRINT_BISON("\nOPT_STAT: stat"); }
    break;

  case 8:
/* Line 1802 of yacc.c  */
#line 95 "Parser.y"
    { DEBUGPRINT_BISON("\nOPT_STAT: empty"); }
    break;

  case 9:
/* Line 1802 of yacc.c  */
#line 99 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: ';'"); }
    break;

  case 10:
/* Line 1802 of yacc.c  */
#line 100 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: var_list '=' exp_list"); }
    break;

  case 11:
/* Line 1802 of yacc.c  */
#line 101 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: function_call"); }
    break;

  case 12:
/* Line 1802 of yacc.c  */
#line 103 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: label"); }
    break;

  case 13:
/* Line 1802 of yacc.c  */
#line 104 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }
    break;

  case 14:
/* Line 1802 of yacc.c  */
#line 105 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }
    break;

  case 15:
/* Line 1802 of yacc.c  */
#line 107 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: while_do"); }
    break;

  case 16:
/* Line 1802 of yacc.c  */
#line 109 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: statement"); }
    break;

  case 17:
/* Line 1802 of yacc.c  */
#line 110 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: for_cycle"); }
    break;

  case 18:
/* Line 1802 of yacc.c  */
#line 112 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: FUNCTION function_name function_body"); }
    break;

  case 19:
/* Line 1802 of yacc.c  */
#line 114 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: locals"); }
    break;

  case 30:
/* Line 1802 of yacc.c  */
#line 144 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block END"); }
    break;

  case 31:
/* Line 1802 of yacc.c  */
#line 146 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if END"); }
    break;

  case 32:
/* Line 1802 of yacc.c  */
#line 147 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block ELSE block END"); }
    break;

  case 33:
/* Line 1802 of yacc.c  */
#line 148 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if ELSE block END"); }
    break;

  case 34:
/* Line 1802 of yacc.c  */
#line 151 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: else_if ELSEIF exp THEN block"); }
    break;

  case 35:
/* Line 1802 of yacc.c  */
#line 152 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: ELSEIF exp THEN block"); }
    break;

  case 36:
/* Line 1802 of yacc.c  */
#line 159 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: attr_list ',' NAME attr"); }
    break;

  case 37:
/* Line 1802 of yacc.c  */
#line 160 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: NAME attr"); }
    break;

  case 38:
/* Line 1802 of yacc.c  */
#line 166 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: '<' NAME '>'"); }
    break;

  case 39:
/* Line 1802 of yacc.c  */
#line 167 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: empty"); }
    break;

  case 40:
/* Line 1802 of yacc.c  */
#line 174 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN"); }
    break;

  case 41:
/* Line 1802 of yacc.c  */
#line 175 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN ;'"); }
    break;

  case 42:
/* Line 1802 of yacc.c  */
#line 176 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list"); }
    break;

  case 43:
/* Line 1802 of yacc.c  */
#line 177 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list ';'"); }
    break;

  case 44:
/* Line 1802 of yacc.c  */
#line 183 "Parser.y"
    { DEBUGPRINT_BISON("\nLABEL: LABEL_DEF NAME LABEL_DEF"); }
    break;

  case 45:
/* Line 1802 of yacc.c  */
#line 190 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part"); }
    break;

  case 46:
/* Line 1802 of yacc.c  */
#line 191 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part ':' NAME"); }
    break;

  case 47:
/* Line 1802 of yacc.c  */
#line 195 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: function_name_part '.' NAME"); }
    break;

  case 48:
/* Line 1802 of yacc.c  */
#line 196 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: NAME"); }
    break;

  case 49:
/* Line 1802 of yacc.c  */
#line 202 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var_list ',' var"); }
    break;

  case 50:
/* Line 1802 of yacc.c  */
#line 203 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var"); }
    break;

  case 51:
/* Line 1802 of yacc.c  */
#line 209 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: NAME"); }
    break;

  case 52:
/* Line 1802 of yacc.c  */
#line 210 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '[' exp ']'"); }
    break;

  case 53:
/* Line 1802 of yacc.c  */
#line 211 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '.' NAME"); }
    break;

  case 54:
/* Line 1802 of yacc.c  */
#line 217 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: var"); }
    break;

  case 55:
/* Line 1802 of yacc.c  */
#line 218 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: function_call"); }
    break;

  case 56:
/* Line 1802 of yacc.c  */
#line 219 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: '(' exp ')'"); }
    break;

  case 57:
/* Line 1802 of yacc.c  */
#line 225 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: FUNCTION function_body"); }
    break;

  case 58:
/* Line 1802 of yacc.c  */
#line 228 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' ')' block END"); }
    break;

  case 59:
/* Line 1802 of yacc.c  */
#line 229 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' par_list ')' block END"); }
    break;

  case 60:
/* Line 1802 of yacc.c  */
#line 235 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp args"); }
    break;

  case 61:
/* Line 1802 of yacc.c  */
#line 236 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp ':' Name args"); }
    break;

  case 62:
/* Line 1802 of yacc.c  */
#line 242 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' ')'"); }
    break;

  case 63:
/* Line 1802 of yacc.c  */
#line 243 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); }
    break;

  case 64:
/* Line 1802 of yacc.c  */
#line 244 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' name_list ')'"); }
    break;

  case 65:
/* Line 1802 of yacc.c  */
#line 245 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: literalString"); }
    break;

  case 66:
/* Line 1802 of yacc.c  */
#line 251 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list"); }
    break;

  case 67:
/* Line 1802 of yacc.c  */
#line 252 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list ',' DOTS"); }
    break;

  case 68:
/* Line 1802 of yacc.c  */
#line 253 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: DOTS"); }
    break;

  case 69:
/* Line 1802 of yacc.c  */
#line 259 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp_list ',' exp"); }
    break;

  case 70:
/* Line 1802 of yacc.c  */
#line 260 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp"); }
    break;

  case 71:
/* Line 1802 of yacc.c  */
#line 267 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: name_list ',' NAME"); }
    break;

  case 72:
/* Line 1802 of yacc.c  */
#line 268 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: NAME"); }
    break;

  case 73:
/* Line 1802 of yacc.c  */
#line 274 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' '}' "); }
    break;

  case 74:
/* Line 1802 of yacc.c  */
#line 275 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' field_list '}'"); }
    break;

  case 75:
/* Line 1802 of yacc.c  */
#line 282 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part field_sep"); }
    break;

  case 76:
/* Line 1802 of yacc.c  */
#line 283 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part"); }
    break;

  case 77:
/* Line 1802 of yacc.c  */
#line 287 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field_list_part field_sep"); }
    break;

  case 78:
/* Line 1802 of yacc.c  */
#line 288 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field"); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 293 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 294 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 295 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: exp"); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 299 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ','"); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 300 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ';'"); }
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 304 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: NIL"); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 305 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: FALSE"); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 306 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: TRUE"); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 307 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: DOTS"); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 309 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: '(' exp ')' "); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 310 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 311 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 314 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '<' exp"); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 315 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '>' exp"); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 318 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: MINUS exp"); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 319 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: UNOP exp"); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 320 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: numeral"); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 321 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: literalString"); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 322 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: table_body"); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 324 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_def"); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 325 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_call"); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 331 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
    break;

  case 102:
/* Line 1802 of yacc.c  */
#line 332 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); }
    break;

  case 103:
/* Line 1802 of yacc.c  */
#line 333 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: LONGSTRING"); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 338 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: INT"); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 339 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX"); }
    break;

  case 106:
/* Line 1802 of yacc.c  */
#line 340 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: FLOAT"); }
    break;

  case 107:
/* Line 1802 of yacc.c  */
#line 341 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX_FLOAT"); }
    break;


/* Line 1802 of yacc.c  */
#line 2321 "Parser.tab.c"
      default: break;
    }
  /* User semantic actions sometimes alter yychar, and that requires
     that yytoken be updated with the new translation.  We take the
     approach of translating immediately before every use of yytoken.
     One alternative is translating here after every semantic action,
     but that translation would be missed if the semantic action invokes
     YYABORT, YYACCEPT, or YYERROR immediately after altering yychar or
     if it invokes YYBACKUP.  In the case of YYABORT or YYACCEPT, an
     incorrect destructor might then be invoked immediately.  In the
     case of YYERROR or YYBACKUP, subsequent parser actions might lead
     to an incorrect destructor call or verbose syntax error message
     before the lookahead is translated.  */
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
  /* Make sure we have latest lookahead translation.  See comments at
     user semantic actions for why this is necessary.  */
  yytoken = yychar == YYEMPTY ? YYEMPTY : YYTRANSLATE (yychar);

  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
#if ! YYERROR_VERBOSE
      yyerror (YY_("syntax error"));
#else
# define YYSYNTAX_ERROR yysyntax_error (&yymsg_alloc, &yymsg, \
                                        yyssp, yytoken)
      {
        char const *yymsgp = YY_("syntax error");
        int yysyntax_error_status;
        yysyntax_error_status = YYSYNTAX_ERROR;
        if (yysyntax_error_status == 0)
          yymsgp = yymsg;
        else if (yysyntax_error_status == 1)
          {
            if (yymsg != yymsgbuf)
              YYSTACK_FREE (yymsg);
            yymsg = (char *) YYSTACK_ALLOC (yymsg_alloc);
            if (!yymsg)
              {
                yymsg = yymsgbuf;
                yymsg_alloc = sizeof yymsgbuf;
                yysyntax_error_status = 2;
              }
            else
              {
                yysyntax_error_status = YYSYNTAX_ERROR;
                yymsgp = yymsg;
              }
          }
        yyerror (yymsgp);
        if (yysyntax_error_status == 2)
          goto yyexhaustedlab;
      }
# undef YYSYNTAX_ERROR
#endif
    }

  yyerror_range[1] = yylloc;

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

  yyerror_range[1] = yylsp[1-yylen];
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
      if (!yypact_value_is_default (yyn))
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

      yyerror_range[1] = *yylsp;
      yydestruct ("Error: popping",
		  yystos[yystate], yyvsp, yylsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  yyerror_range[2] = yylloc;
  /* Using YYLLOC is tempting, but would change the location of
     the lookahead.  YYLOC is available though.  */
  YYLLOC_DEFAULT (yyloc, yyerror_range, 2);
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

#if !defined yyoverflow || YYERROR_VERBOSE
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
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval, &yylloc);
    }
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


/* Line 2050 of yacc.c  */
#line 359 "Parser.y"


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
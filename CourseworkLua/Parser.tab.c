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
     DO = 273,
     WHILE = 274,
     FOR = 275,
     UNTIL = 276,
     REPEAT = 277,
     END = 278,
     GOTO = 279,
     IN = 280,
     FUNCTION = 281,
     BREAK = 282,
     RETURN = 283,
     LABEL_DEF = 284,
     IF = 285,
     THEN = 286,
     ELSEIF = 287,
     ELSE = 288,
     LOCAL = 289,
     MINUS = 290,
     UNOP = 291,
     BINOP = 292,
     UMINUS = 293
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
#line 218 "Parser.tab.c"

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
#define YYFINAL  4
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   336

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  52
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  38
/* YYNRULES -- Number of rules.  */
#define YYNRULES  105
/* YYNRULES -- Number of states.  */
#define YYNSTATES  193

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   293

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      48,    49,     2,     2,    41,     2,    45,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    44,    39,
      42,    40,    43,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    46,     2,    47,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    50,     2,    51,     2,     2,     2,     2,
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
      35,    36,    37,    38
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     8,    10,    11,    14,    15,    17,
      21,    23,    25,    27,    30,    32,    34,    36,    40,    42,
      46,    52,    57,    62,    65,    70,    78,    86,    89,    93,
      98,   104,   109,   115,   120,   125,   128,   132,   133,   137,
     139,   140,   142,   143,   147,   149,   153,   157,   159,   163,
     165,   167,   172,   176,   178,   180,   184,   187,   192,   198,
     201,   206,   209,   213,   215,   217,   219,   223,   225,   229,
     231,   235,   237,   240,   244,   247,   249,   253,   255,   261,
     265,   267,   269,   271,   273,   275,   277,   279,   283,   287,
     291,   295,   299,   302,   305,   307,   309,   311,   313,   315,
     317,   319,   321,   323,   325,   327
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      53,     0,    -1,    54,    -1,    56,    55,    -1,    66,    -1,
      -1,    56,    57,    -1,    -1,    39,    -1,    72,    40,    80,
      -1,    77,    -1,    69,    -1,    27,    -1,    24,    13,    -1,
      58,    -1,    61,    -1,    60,    -1,    26,    70,    76,    -1,
      59,    -1,    18,    54,    23,    -1,    19,    87,    18,    54,
      23,    -1,    22,    54,    21,    87,    -1,    34,    26,    13,
      76,    -1,    34,    64,    -1,    34,    64,    40,    80,    -1,
      20,    13,    40,    80,    18,    54,    23,    -1,    20,    80,
      25,    80,    18,    54,    23,    -1,    62,    23,    -1,    62,
      63,    23,    -1,    62,    33,    54,    23,    -1,    62,    63,
      33,    54,    23,    -1,    30,    87,    31,    54,    -1,    63,
      32,    87,    31,    54,    -1,    32,    87,    31,    54,    -1,
      64,    41,    13,    65,    -1,    13,    65,    -1,    42,    13,
      43,    -1,    -1,    28,    68,    67,    -1,    39,    -1,    -1,
      80,    -1,    -1,    29,    13,    29,    -1,    71,    -1,    71,
      44,    13,    -1,    71,    45,    13,    -1,    13,    -1,    72,
      41,    73,    -1,    73,    -1,    13,    -1,    74,    46,    87,
      47,    -1,    74,    45,    13,    -1,    73,    -1,    77,    -1,
      48,    87,    49,    -1,    26,    76,    -1,    48,    49,    54,
      23,    -1,    48,    79,    49,    54,    23,    -1,    74,    78,
      -1,    74,    44,    13,    78,    -1,    48,    49,    -1,    48,
      80,    49,    -1,    82,    -1,    88,    -1,    81,    -1,    81,
      41,    14,    -1,    14,    -1,    80,    41,    87,    -1,    87,
      -1,    81,    41,    13,    -1,    13,    -1,    50,    51,    -1,
      50,    83,    51,    -1,    84,    86,    -1,    84,    -1,    84,
      86,    85,    -1,    85,    -1,    46,    87,    47,    40,    87,
      -1,    13,    40,    87,    -1,    87,    -1,    41,    -1,    39,
      -1,    15,    -1,    16,    -1,    17,    -1,    14,    -1,    48,
      87,    49,    -1,    87,    37,    87,    -1,    87,    35,    87,
      -1,    87,    42,    87,    -1,    87,    43,    87,    -1,    35,
      87,    -1,    36,    87,    -1,    89,    -1,    88,    -1,    82,
      -1,    75,    -1,    73,    -1,     9,    -1,    10,    -1,    11,
      -1,     3,    -1,     4,    -1,     5,    -1,     6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    84,    84,    88,    91,    92,    94,    95,   105,   106,
     107,   109,   110,   111,   113,   115,   116,   118,   120,   124,
     125,   126,   131,   133,   134,   139,   140,   146,   148,   149,
     150,   153,   156,   157,   164,   165,   171,   172,   179,   182,
     183,   186,   187,   194,   201,   202,   206,   207,   213,   214,
     220,   221,   222,   228,   229,   230,   236,   239,   240,   246,
     247,   253,   254,   255,   256,   262,   263,   264,   270,   271,
     278,   279,   285,   286,   293,   294,   298,   299,   304,   305,
     306,   310,   311,   315,   316,   317,   318,   320,   321,   322,
     325,   326,   329,   330,   331,   332,   333,   335,   337,   341,
     342,   343,   348,   349,   350,   351
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "INT", "HEX", "FLOAT", "HEX_FLOAT",
  "TWOQ", "ONEQ", "ONEQSTRING", "TWOQSTRING", "LONGSTRING", "NESTED_STR",
  "NAME", "DOTS", "NIL", "FALSE", "TRUE", "DO", "WHILE", "FOR", "UNTIL",
  "REPEAT", "END", "GOTO", "IN", "FUNCTION", "BREAK", "RETURN",
  "LABEL_DEF", "IF", "THEN", "ELSEIF", "ELSE", "LOCAL", "MINUS", "UNOP",
  "BINOP", "UMINUS", "';'", "'='", "','", "'<'", "'>'", "':'", "'.'",
  "'['", "']'", "'('", "')'", "'{'", "'}'", "$accept", "main", "block",
  "block_ret", "stat_list", "stat", "while_do", "locals", "for_cycle",
  "statement", "if_start", "else_if", "attr_list", "attr", "ret",
  "ret_wrap_endl", "ret_wrap_exp", "label", "function_name",
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,    59,
      61,    44,    60,    62,    58,    46,    91,    93,    40,    41,
     123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    52,    53,    54,    55,    55,    56,    56,    57,    57,
      57,    57,    57,    57,    57,    57,    57,    57,    57,    58,
      58,    58,    59,    59,    59,    60,    60,    61,    61,    61,
      61,    62,    63,    63,    64,    64,    65,    65,    66,    67,
      67,    68,    68,    69,    70,    70,    71,    71,    72,    72,
      73,    73,    73,    74,    74,    74,    75,    76,    76,    77,
      77,    78,    78,    78,    78,    79,    79,    79,    80,    80,
      81,    81,    82,    82,    83,    83,    84,    84,    85,    85,
      85,    86,    86,    87,    87,    87,    87,    87,    87,    87,
      87,    87,    87,    87,    87,    87,    87,    87,    87,    88,
      88,    88,    89,    89,    89,    89
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     2,     1,     0,     2,     0,     1,     3,
       1,     1,     1,     2,     1,     1,     1,     3,     1,     3,
       5,     4,     4,     2,     4,     7,     7,     2,     3,     4,
       5,     4,     5,     4,     4,     2,     3,     0,     3,     1,
       0,     1,     0,     3,     1,     3,     3,     1,     3,     1,
       1,     4,     3,     1,     1,     3,     2,     4,     5,     2,
       4,     2,     3,     1,     1,     1,     3,     1,     3,     1,
       3,     1,     2,     3,     2,     1,     3,     1,     5,     3,
       1,     1,     1,     1,     1,     1,     1,     3,     3,     3,
       3,     3,     2,     2,     1,     1,     1,     1,     1,     1,
       1,     1,     1,     1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       7,     0,     2,     5,     1,    50,     7,     0,     0,     7,
       0,     0,    12,    42,     0,     0,     0,     8,     0,     3,
       6,    14,    18,    16,    15,     0,     4,    11,     0,    53,
       0,    10,     0,   102,   103,   104,   105,    99,   100,   101,
      86,    83,    84,    85,     0,     0,     0,     0,     0,    98,
      97,    54,    96,     0,    95,    94,    50,     0,    69,     0,
      13,    47,     0,    44,    40,    41,     0,     0,    37,     0,
      23,     0,    27,     0,     7,     0,     0,     0,     0,     0,
       0,     0,    59,    63,    64,    19,     0,    56,    92,    93,
       0,    50,     0,    72,     0,    75,    77,    80,     7,     0,
       0,     0,     0,     0,     0,     0,     0,    17,     0,     0,
      39,    38,    43,     7,     0,    35,     0,     0,     0,    55,
       0,     0,    28,     0,     7,     9,    53,     0,    52,     0,
      61,     0,    71,    67,     7,     0,    65,    87,     0,     0,
      73,    82,    81,    74,     0,    89,    88,    90,    91,     0,
       0,    68,    21,    45,    46,    31,     0,    22,    24,    37,
       7,    29,     0,     0,    60,    51,    62,     0,     7,     0,
      79,     0,    76,    20,     7,     7,    36,    34,    33,     7,
      30,    57,     0,    70,    66,     0,     0,     0,    32,    58,
      78,    25,    26
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,    19,     3,    20,    21,    22,    23,    24,
      25,    75,    70,   115,    26,   111,    64,    27,    62,    63,
      28,    49,    30,    50,    87,    51,    82,   135,    57,   136,
      52,    94,    95,    96,   143,    58,    54,    55
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -62
static const yytype_int16 yypact[] =
{
     -62,    31,   -62,   265,   -62,   -62,   -62,   210,   238,   -62,
      -1,    43,   -62,   210,    47,   210,    16,   -62,   210,   -62,
     -62,   -62,   -62,   -62,   -62,    54,   -62,   -62,     9,    38,
      79,    24,    13,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,   -62,    15,   210,   210,   210,    11,   109,
     -62,   -62,   -62,    91,   -62,   -62,    35,    23,   196,    50,
     -62,   -62,    15,     7,    44,    56,    62,    70,    64,    95,
      74,   233,   -62,   210,   -62,   129,   210,    10,    97,   108,
     210,   134,   -62,   -62,   -62,   -62,     5,   -62,    99,    99,
     266,    90,   210,   -62,    84,    26,   -62,   196,   -62,   210,
     210,   210,   210,   210,   210,   210,   210,   -62,   133,   143,
     -62,   -62,   -62,   -62,   152,   -62,    15,   210,   158,   -62,
     169,   151,   -62,   210,   -62,    56,   123,    34,   -62,   275,
     -62,   -39,   -62,   -62,   -62,   126,   135,   252,   210,   284,
     -62,   -62,   -62,   182,   156,    99,    99,    99,    99,    -9,
      12,   196,   196,   -62,   -62,   -62,   137,   -62,    56,    64,
     -62,   -62,   293,   166,   -62,   -62,   -62,   167,   -62,   154,
     196,   141,   -62,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   171,   -62,   -62,   210,   178,   179,   -62,   -62,
     196,   -62,   -62
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -62,   -62,    -2,   -62,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,   -62,   -62,    46,   -62,   -62,   -62,   -62,   -62,   -62,
     -62,     3,   -62,   -62,   -61,   200,    80,   -62,     0,   -62,
     -27,   -62,   -62,    66,   -62,    -7,   -25,   -62
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -56
static const yytype_int16 yytable[] =
{
      53,   107,   105,    83,    32,    84,    29,    59,    67,   174,
     166,    71,    60,    65,    33,    34,    35,    36,   132,   133,
      37,    38,    39,     5,    91,    40,    41,    42,    43,    68,
     175,     4,   105,   -54,   -54,   -54,    85,    44,    88,    89,
      90,    97,    69,    37,    38,    39,    45,    46,   104,    76,
      77,   108,   109,   105,   134,   157,    61,    92,    18,    47,
      66,    48,    93,    86,   105,   141,   120,   142,   -54,   -54,
     -54,   106,   121,   129,   -54,   103,   125,    72,   -49,   -49,
     126,   131,    81,   110,    48,   139,    73,    74,    37,    38,
      39,   112,   145,   146,   147,   148,   144,   105,   151,   152,
      83,   113,    84,   149,   150,    99,   114,   100,   116,    98,
     127,   155,   101,   102,   117,   118,   162,   158,   -53,   -53,
     -53,   128,   163,    78,    79,    80,    99,    81,   100,    48,
     138,   170,   167,   101,   102,   140,    97,    33,    34,    35,
      36,   101,   102,    37,    38,    39,   153,     5,    40,    41,
      42,    43,   122,   -53,   -53,   -53,   154,   -53,   178,   -53,
      44,   123,   124,   -48,   -48,   156,   182,   183,   184,    45,
      46,   159,   186,   187,   161,   168,   169,   188,   190,   173,
     176,   185,    47,   130,    48,    33,    34,    35,    36,   180,
     181,    37,    38,    39,   189,    91,    40,    41,    42,    43,
     160,   191,   192,    31,    99,   177,   100,   164,    44,   172,
       0,   101,   102,    33,    34,    35,    36,    45,    46,    37,
      38,    39,     0,     5,    40,    41,    42,    43,    92,     0,
      47,    99,    48,   100,     0,     0,    44,     0,   101,   102,
       0,    33,    34,    35,    36,    45,    46,    37,    38,    39,
       0,    56,    40,    41,    42,    43,     0,     0,    47,     0,
      48,   -55,   -55,   -55,    44,     0,     0,     0,    99,     0,
     100,     0,     0,    45,    46,   101,   102,     0,     5,     0,
       0,     0,   119,     6,     7,     8,    47,     9,    48,    10,
       0,    11,    12,    13,    14,    15,   -55,   -55,   -55,    16,
     -55,    99,   -55,   100,    17,     0,     0,     0,   101,   102,
      99,     0,   100,    18,     0,   137,     0,   101,   102,    99,
       0,   100,   165,     0,   179,     0,   101,   102,    99,     0,
     100,   171,     0,     0,     0,   101,   102
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-62)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       7,    62,    41,    30,     6,    30,     3,     9,    15,    18,
      49,    18,    13,    13,     3,     4,     5,     6,    13,    14,
       9,    10,    11,    13,    13,    14,    15,    16,    17,    13,
      18,     0,    41,     9,    10,    11,    23,    26,    45,    46,
      47,    48,    26,     9,    10,    11,    35,    36,    25,    40,
      41,    44,    45,    41,    49,   116,    13,    46,    48,    48,
      13,    50,    51,    48,    41,    39,    73,    41,    44,    45,
      46,    21,    74,    80,    50,    40,    76,    23,    40,    41,
      77,    81,    48,    39,    50,    92,    32,    33,     9,    10,
      11,    29,    99,   100,   101,   102,    98,    41,   105,   106,
     127,    31,   127,   103,   104,    35,    42,    37,    13,    18,
      13,   113,    42,    43,    40,    41,   123,   117,     9,    10,
      11,    13,   124,    44,    45,    46,    35,    48,    37,    50,
      40,   138,   134,    42,    43,    51,   143,     3,     4,     5,
       6,    42,    43,     9,    10,    11,    13,    13,    14,    15,
      16,    17,    23,    44,    45,    46,    13,    48,   160,    50,
      26,    32,    33,    40,    41,    13,   168,    13,    14,    35,
      36,    13,   174,   175,    23,    49,    41,   179,   185,    23,
      43,    40,    48,    49,    50,     3,     4,     5,     6,    23,
      23,     9,    10,    11,    23,    13,    14,    15,    16,    17,
      31,    23,    23,     3,    35,   159,    37,   127,    26,   143,
      -1,    42,    43,     3,     4,     5,     6,    35,    36,     9,
      10,    11,    -1,    13,    14,    15,    16,    17,    46,    -1,
      48,    35,    50,    37,    -1,    -1,    26,    -1,    42,    43,
      -1,     3,     4,     5,     6,    35,    36,     9,    10,    11,
      -1,    13,    14,    15,    16,    17,    -1,    -1,    48,    -1,
      50,     9,    10,    11,    26,    -1,    -1,    -1,    35,    -1,
      37,    -1,    -1,    35,    36,    42,    43,    -1,    13,    -1,
      -1,    -1,    49,    18,    19,    20,    48,    22,    50,    24,
      -1,    26,    27,    28,    29,    30,    44,    45,    46,    34,
      48,    35,    50,    37,    39,    -1,    -1,    -1,    42,    43,
      35,    -1,    37,    48,    -1,    49,    -1,    42,    43,    35,
      -1,    37,    47,    -1,    31,    -1,    42,    43,    35,    -1,
      37,    47,    -1,    -1,    -1,    42,    43
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    53,    54,    56,     0,    13,    18,    19,    20,    22,
      24,    26,    27,    28,    29,    30,    34,    39,    48,    55,
      57,    58,    59,    60,    61,    62,    66,    69,    72,    73,
      74,    77,    54,     3,     4,     5,     6,     9,    10,    11,
      14,    15,    16,    17,    26,    35,    36,    48,    50,    73,
      75,    77,    82,    87,    88,    89,    13,    80,    87,    54,
      13,    13,    70,    71,    68,    80,    13,    87,    13,    26,
      64,    87,    23,    32,    33,    63,    40,    41,    44,    45,
      46,    48,    78,    82,    88,    23,    48,    76,    87,    87,
      87,    13,    46,    51,    83,    84,    85,    87,    18,    35,
      37,    42,    43,    40,    25,    41,    21,    76,    44,    45,
      39,    67,    29,    31,    42,    65,    13,    40,    41,    49,
      87,    54,    23,    32,    33,    80,    73,    13,    13,    87,
      49,    80,    13,    14,    49,    79,    81,    49,    40,    87,
      51,    39,    41,    86,    54,    87,    87,    87,    87,    80,
      80,    87,    87,    13,    13,    54,    13,    76,    80,    13,
      31,    23,    87,    54,    78,    47,    49,    54,    49,    41,
      87,    47,    85,    23,    18,    18,    43,    65,    54,    31,
      23,    23,    54,    13,    14,    40,    54,    54,    54,    23,
      87,    23,    23
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
#line 84 "Parser.y"
    { DEBUGPRINT_BISON("\nMAIN: block"); }
    break;

  case 3:
/* Line 1802 of yacc.c  */
#line 88 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK: stat_list ret"); }
    break;

  case 4:
/* Line 1802 of yacc.c  */
#line 91 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK_RET: ret"); }
    break;

  case 5:
/* Line 1802 of yacc.c  */
#line 92 "Parser.y"
    { DEBUGPRINT_BISON("\nBLOCK_RET: empty"); }
    break;

  case 6:
/* Line 1802 of yacc.c  */
#line 94 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: stat_list stat"); }
    break;

  case 7:
/* Line 1802 of yacc.c  */
#line 95 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT_LIST: empty"); }
    break;

  case 8:
/* Line 1802 of yacc.c  */
#line 105 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: ';'"); }
    break;

  case 9:
/* Line 1802 of yacc.c  */
#line 106 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: var_list '=' exp_list"); }
    break;

  case 10:
/* Line 1802 of yacc.c  */
#line 107 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: function_call"); }
    break;

  case 11:
/* Line 1802 of yacc.c  */
#line 109 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: label"); }
    break;

  case 12:
/* Line 1802 of yacc.c  */
#line 110 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }
    break;

  case 13:
/* Line 1802 of yacc.c  */
#line 111 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }
    break;

  case 14:
/* Line 1802 of yacc.c  */
#line 113 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: while_do"); }
    break;

  case 15:
/* Line 1802 of yacc.c  */
#line 115 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: statement"); }
    break;

  case 16:
/* Line 1802 of yacc.c  */
#line 116 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: for_cycle"); }
    break;

  case 17:
/* Line 1802 of yacc.c  */
#line 118 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: FUNCTION function_name function_body"); }
    break;

  case 18:
/* Line 1802 of yacc.c  */
#line 120 "Parser.y"
    { DEBUGPRINT_BISON("\nSTAT: locals"); }
    break;

  case 27:
/* Line 1802 of yacc.c  */
#line 146 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block END"); }
    break;

  case 28:
/* Line 1802 of yacc.c  */
#line 148 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if END"); }
    break;

  case 29:
/* Line 1802 of yacc.c  */
#line 149 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block ELSE block END"); }
    break;

  case 30:
/* Line 1802 of yacc.c  */
#line 150 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if ELSE block END"); }
    break;

  case 31:
/* Line 1802 of yacc.c  */
#line 153 "Parser.y"
    { DEBUGPRINT_BISON("\nEIF_START: IF exp THEN"); }
    break;

  case 32:
/* Line 1802 of yacc.c  */
#line 156 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: else_if ELSEIF exp THEN block"); }
    break;

  case 33:
/* Line 1802 of yacc.c  */
#line 157 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: ELSEIF exp THEN block"); }
    break;

  case 34:
/* Line 1802 of yacc.c  */
#line 164 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: attr_list ',' NAME attr"); }
    break;

  case 35:
/* Line 1802 of yacc.c  */
#line 165 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: NAME attr"); }
    break;

  case 36:
/* Line 1802 of yacc.c  */
#line 171 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: '<' NAME '>'"); }
    break;

  case 37:
/* Line 1802 of yacc.c  */
#line 172 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: empty"); }
    break;

  case 38:
/* Line 1802 of yacc.c  */
#line 179 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN"); }
    break;

  case 39:
/* Line 1802 of yacc.c  */
#line 182 "Parser.y"
    { DEBUGPRINT_BISON("\nRET_WRAP_ENDL: exp_list"); }
    break;

  case 40:
/* Line 1802 of yacc.c  */
#line 183 "Parser.y"
    { DEBUGPRINT_BISON("\nRET_WRAP_ENDL: empty"); }
    break;

  case 41:
/* Line 1802 of yacc.c  */
#line 186 "Parser.y"
    { DEBUGPRINT_BISON("\nRET_WRAP_EXP: exp_list"); }
    break;

  case 42:
/* Line 1802 of yacc.c  */
#line 187 "Parser.y"
    { DEBUGPRINT_BISON("\nRET_WRAP_EXP: empty"); }
    break;

  case 43:
/* Line 1802 of yacc.c  */
#line 194 "Parser.y"
    { DEBUGPRINT_BISON("\nLABEL: LABEL_DEF NAME LABEL_DEF"); }
    break;

  case 44:
/* Line 1802 of yacc.c  */
#line 201 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part"); }
    break;

  case 45:
/* Line 1802 of yacc.c  */
#line 202 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part ':' NAME"); }
    break;

  case 46:
/* Line 1802 of yacc.c  */
#line 206 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: function_name_part '.' NAME"); }
    break;

  case 47:
/* Line 1802 of yacc.c  */
#line 207 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: NAME"); }
    break;

  case 48:
/* Line 1802 of yacc.c  */
#line 213 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var_list ',' var"); }
    break;

  case 49:
/* Line 1802 of yacc.c  */
#line 214 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var"); }
    break;

  case 50:
/* Line 1802 of yacc.c  */
#line 220 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: NAME"); }
    break;

  case 51:
/* Line 1802 of yacc.c  */
#line 221 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '[' exp ']'"); }
    break;

  case 52:
/* Line 1802 of yacc.c  */
#line 222 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '.' NAME"); }
    break;

  case 53:
/* Line 1802 of yacc.c  */
#line 228 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: var"); }
    break;

  case 54:
/* Line 1802 of yacc.c  */
#line 229 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: function_call"); }
    break;

  case 55:
/* Line 1802 of yacc.c  */
#line 230 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: '(' exp ')'"); }
    break;

  case 56:
/* Line 1802 of yacc.c  */
#line 236 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: FUNCTION function_body"); }
    break;

  case 57:
/* Line 1802 of yacc.c  */
#line 239 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' ')' block END"); }
    break;

  case 58:
/* Line 1802 of yacc.c  */
#line 240 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' par_list ')' block END"); }
    break;

  case 59:
/* Line 1802 of yacc.c  */
#line 246 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp args"); }
    break;

  case 60:
/* Line 1802 of yacc.c  */
#line 247 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp ':' Name args"); }
    break;

  case 61:
/* Line 1802 of yacc.c  */
#line 253 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' ')'"); }
    break;

  case 62:
/* Line 1802 of yacc.c  */
#line 254 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); }
    break;

  case 63:
/* Line 1802 of yacc.c  */
#line 255 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' name_list ')'"); }
    break;

  case 64:
/* Line 1802 of yacc.c  */
#line 256 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: literalString"); }
    break;

  case 65:
/* Line 1802 of yacc.c  */
#line 262 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list"); }
    break;

  case 66:
/* Line 1802 of yacc.c  */
#line 263 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list ',' DOTS"); }
    break;

  case 67:
/* Line 1802 of yacc.c  */
#line 264 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: DOTS"); }
    break;

  case 68:
/* Line 1802 of yacc.c  */
#line 270 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp_list ',' exp"); }
    break;

  case 69:
/* Line 1802 of yacc.c  */
#line 271 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp"); }
    break;

  case 70:
/* Line 1802 of yacc.c  */
#line 278 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: name_list ',' NAME"); }
    break;

  case 71:
/* Line 1802 of yacc.c  */
#line 279 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: NAME"); }
    break;

  case 72:
/* Line 1802 of yacc.c  */
#line 285 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' '}' "); }
    break;

  case 73:
/* Line 1802 of yacc.c  */
#line 286 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' field_list '}'"); }
    break;

  case 74:
/* Line 1802 of yacc.c  */
#line 293 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part field_sep"); }
    break;

  case 75:
/* Line 1802 of yacc.c  */
#line 294 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part"); }
    break;

  case 76:
/* Line 1802 of yacc.c  */
#line 298 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field_list_part field_sep"); }
    break;

  case 77:
/* Line 1802 of yacc.c  */
#line 299 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field"); }
    break;

  case 78:
/* Line 1802 of yacc.c  */
#line 304 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 305 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 306 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: exp"); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 310 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ','"); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 311 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ';'"); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 315 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: NIL"); }
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 316 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: FALSE"); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 317 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: TRUE"); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 318 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: DOTS"); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 320 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: '(' exp ')' "); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 321 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 322 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 325 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '<' exp"); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 326 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '>' exp"); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 329 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: MINUS exp"); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 330 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: UNOP exp"); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 331 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: numeral"); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 332 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: literalString"); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 333 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: table_body"); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 335 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_def"); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 337 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_call"); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 341 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 342 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 343 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: LONGSTRING"); }
    break;

  case 102:
/* Line 1802 of yacc.c  */
#line 348 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: INT"); }
    break;

  case 103:
/* Line 1802 of yacc.c  */
#line 349 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX"); }
    break;

  case 104:
/* Line 1802 of yacc.c  */
#line 350 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: FLOAT"); }
    break;

  case 105:
/* Line 1802 of yacc.c  */
#line 351 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX_FLOAT"); }
    break;


/* Line 1802 of yacc.c  */
#line 2300 "Parser.tab.c"
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
#line 369 "Parser.y"


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
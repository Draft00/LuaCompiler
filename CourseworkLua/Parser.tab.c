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
     IF = 283,
     THEN = 284,
     ELSEIF = 285,
     ELSE = 286,
     LOCAL = 287,
     FUNCTION = 288,
     BREAK = 289,
     RETURN = 290,
     LABEL_DEF = 291
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
#line 216 "Parser.tab.c"

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
#define YYFINAL  61
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   340

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  50
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  36
/* YYNRULES -- Number of rules.  */
#define YYNRULES  102
/* YYNRULES -- Number of states.  */
#define YYNSTATES  184

/* YYTRANSLATE(YYLEX) -- Bison symbol number corresponding to YYLEX.  */
#define YYUNDEFTOK  2
#define YYMAXUTOK   291

#define YYTRANSLATE(YYX)						\
  ((unsigned int) (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[YYLEX] -- Bison symbol number corresponding to YYLEX.  */
static const yytype_uint8 yytranslate[] =
{
       0,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      46,    47,     2,     2,    39,     2,    43,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,    42,    37,
      40,    38,    41,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    44,     2,    45,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    48,     2,    49,     2,     2,     2,     2,
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
      35,    36
};

#if YYDEBUG
/* YYPRHS[YYN] -- Index of the first RHS symbol of rule number YYN in
   YYRHS.  */
static const yytype_uint16 yyprhs[] =
{
       0,     0,     3,     5,     7,    10,    13,    15,    17,    18,
      20,    24,    26,    28,    30,    33,    35,    37,    39,    43,
      45,    49,    55,    60,    65,    68,    73,    81,    85,    89,
      95,   102,   108,   113,   118,   121,   125,   126,   128,   131,
     134,   138,   142,   144,   148,   152,   154,   158,   160,   162,
     167,   171,   173,   175,   179,   182,   187,   193,   196,   201,
     204,   208,   212,   214,   216,   218,   222,   224,   228,   230,
     234,   236,   239,   243,   246,   248,   252,   254,   260,   264,
     266,   268,   270,   272,   274,   276,   278,   282,   286,   290,
     294,   297,   300,   302,   304,   306,   308,   310,   312,   314,
     316,   318,   320
};

/* YYRHS -- A `-1'-separated list of the rules' RHS.  */
static const yytype_int8 yyrhs[] =
{
      51,     0,    -1,    52,    -1,    53,    -1,    53,    64,    -1,
      53,    54,    -1,    54,    -1,    55,    -1,    -1,    37,    -1,
      68,    38,    76,    -1,    73,    -1,    65,    -1,    34,    -1,
      27,    13,    -1,    56,    -1,    60,    -1,    58,    -1,    33,
      66,    72,    -1,    57,    -1,    21,    52,    26,    -1,    22,
      83,    21,    52,    26,    -1,    25,    52,    24,    83,    -1,
      32,    33,    13,    72,    -1,    32,    62,    -1,    32,    62,
      38,    76,    -1,    23,    13,    38,    59,    21,    52,    26,
      -1,    59,    39,    83,    -1,    83,    39,    83,    -1,    28,
      83,    29,    52,    26,    -1,    28,    83,    29,    52,    61,
      26,    -1,    61,    30,    83,    29,    52,    -1,    30,    83,
      29,    52,    -1,    62,    39,    13,    63,    -1,    13,    63,
      -1,    40,    13,    41,    -1,    -1,    35,    -1,    35,    37,
      -1,    35,    76,    -1,    35,    76,    37,    -1,    36,    13,
      36,    -1,    67,    -1,    67,    42,    13,    -1,    67,    43,
      13,    -1,    13,    -1,    68,    39,    69,    -1,    69,    -1,
      13,    -1,    70,    44,    83,    45,    -1,    70,    43,    13,
      -1,    69,    -1,    73,    -1,    46,    83,    47,    -1,    33,
      72,    -1,    46,    47,    52,    26,    -1,    46,    75,    47,
      52,    26,    -1,    70,    74,    -1,    70,    42,    13,    74,
      -1,    46,    47,    -1,    46,    76,    47,    -1,    46,    77,
      47,    -1,    78,    -1,    84,    -1,    77,    -1,    77,    39,
      14,    -1,    14,    -1,    76,    39,    83,    -1,    83,    -1,
      77,    39,    13,    -1,    13,    -1,    48,    49,    -1,    48,
      79,    49,    -1,    80,    82,    -1,    80,    -1,    80,    82,
      81,    -1,    81,    -1,    44,    83,    45,    38,    83,    -1,
      13,    38,    83,    -1,    83,    -1,    39,    -1,    37,    -1,
      15,    -1,    16,    -1,    17,    -1,    14,    -1,    83,    18,
      83,    -1,    83,    20,    83,    -1,    83,    40,    83,    -1,
      83,    41,    83,    -1,    20,    83,    -1,    19,    83,    -1,
      85,    -1,    84,    -1,    78,    -1,    71,    -1,     9,    -1,
      10,    -1,    11,    -1,     3,    -1,     4,    -1,     5,    -1,
       6,    -1
};

/* YYRLINE[YYN] -- source line where rule number YYN was defined.  */
static const yytype_uint16 yyrline[] =
{
       0,    82,    82,    86,    87,    90,    91,    94,    95,    99,
     100,   101,   103,   104,   105,   107,   109,   110,   112,   114,
     118,   119,   120,   125,   127,   128,   133,   136,   137,   143,
     145,   148,   149,   156,   157,   163,   164,   171,   172,   173,
     174,   180,   187,   188,   192,   193,   199,   200,   206,   207,
     208,   214,   215,   216,   222,   225,   226,   232,   233,   239,
     240,   241,   242,   243,   249,   250,   251,   257,   258,   264,
     265,   271,   272,   279,   280,   284,   285,   290,   291,   292,
     296,   297,   301,   302,   303,   304,   306,   307,   310,   311,
     314,   316,   318,   319,   320,   322,   326,   327,   328,   333,
     334,   335,   336
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
  "WHILE", "FOR", "UNTIL", "REPEAT", "END", "GOTO", "IF", "THEN", "ELSEIF",
  "ELSE", "LOCAL", "FUNCTION", "BREAK", "RETURN", "LABEL_DEF", "';'",
  "'='", "','", "'<'", "'>'", "':'", "'.'", "'['", "']'", "'('", "')'",
  "'{'", "'}'", "$accept", "main", "block", "stat_list", "opt_stat",
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
     285,   286,   287,   288,   289,   290,   291,    59,    61,    44,
      60,    62,    58,    46,    91,    93,    40,    41,   123,   125
};
# endif

/* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_uint8 yyr1[] =
{
       0,    50,    51,    52,    52,    53,    53,    54,    54,    55,
      55,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      56,    56,    56,    57,    57,    57,    58,    59,    59,    60,
      60,    61,    61,    62,    62,    63,    63,    64,    64,    64,
      64,    65,    66,    66,    67,    67,    68,    68,    69,    69,
      69,    70,    70,    70,    71,    72,    72,    73,    73,    74,
      74,    74,    74,    74,    75,    75,    75,    76,    76,    77,
      77,    78,    78,    79,    79,    80,    80,    81,    81,    81,
      82,    82,    83,    83,    83,    83,    83,    83,    83,    83,
      83,    83,    83,    83,    83,    83,    84,    84,    84,    85,
      85,    85,    85
};

/* YYR2[YYN] -- Number of symbols composing right hand side of rule YYN.  */
static const yytype_uint8 yyr2[] =
{
       0,     2,     1,     1,     2,     2,     1,     1,     0,     1,
       3,     1,     1,     1,     2,     1,     1,     1,     3,     1,
       3,     5,     4,     4,     2,     4,     7,     3,     3,     5,
       6,     5,     4,     4,     2,     3,     0,     1,     2,     2,
       3,     3,     1,     3,     3,     1,     3,     1,     1,     4,
       3,     1,     1,     3,     2,     4,     5,     2,     4,     2,
       3,     3,     1,     1,     1,     3,     1,     3,     1,     3,
       1,     2,     3,     2,     1,     3,     1,     5,     3,     1,
       1,     1,     1,     1,     1,     1,     3,     3,     3,     3,
       2,     2,     1,     1,     1,     1,     1,     1,     1,     1,
       1,     1,     1
};

/* YYDEFACT[STATE-NAME] -- Default reduction number in state STATE-NUM.
   Performed when YYTABLE doesn't specify something else to do.  Zero
   means the default is an error.  */
static const yytype_uint8 yydefact[] =
{
       8,    48,     8,     0,     0,     8,     0,     0,     0,     0,
      13,     0,     9,     0,     0,     2,     3,     6,     7,    15,
      19,    17,    16,    12,     0,    51,     0,    11,     0,    99,
     100,   101,   102,    96,    97,    98,    85,    82,    83,    84,
       0,     0,     0,     0,    95,    94,     0,    93,    92,     0,
       0,    14,     0,    36,     0,    24,    45,     0,    42,     0,
       0,     1,    37,     5,     4,     0,     0,     0,     0,     0,
       0,    57,    62,    63,    20,    91,    90,     0,    54,     0,
       0,    71,     0,    74,    76,    79,     0,     0,     8,     0,
       0,     0,     0,     8,     0,    34,     0,     0,     0,    18,
       0,     0,    41,    53,    38,    39,    68,    10,    51,    52,
       0,    50,     0,    70,    59,     0,     0,    66,     8,     0,
      64,     0,     0,    72,    81,    80,    73,    86,    87,     0,
      88,    89,     0,     0,    22,     0,     0,    23,    25,    36,
      43,    44,    40,     0,    58,    49,    60,     0,    61,     0,
       8,     0,    78,     0,    75,    21,     8,     0,     0,    29,
       0,     0,    35,    33,    67,    69,    55,     0,    65,     0,
       0,    27,    28,     0,    30,     0,    56,    77,    26,     8,
       0,    32,     8,    31
};

/* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,    14,    15,    16,    17,    18,    19,    20,    21,   132,
      22,   161,    55,    95,    64,    23,    57,    58,    24,    25,
      26,    44,    78,    27,    71,   119,   105,   116,    45,    82,
      83,    84,   126,   106,    47,    48
};

/* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
   STATE-NUM.  */
#define YYPACT_NINF -50
static const yytype_int16 yypact[] =
{
     269,   -50,   269,   233,     7,   269,    13,   233,    54,    29,
     -50,    52,   -50,   233,    48,   -50,   242,   -50,   -50,   -50,
     -50,   -50,   -50,   -50,    62,    94,    20,    27,   -19,   -50,
     -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,   -50,
     233,   233,    30,     8,   -50,   -50,   116,   -50,   -50,    43,
      60,   -50,   280,    65,    98,   100,   -50,    30,   122,    78,
      14,   -50,   198,   -50,   -50,   233,   -11,   105,   112,   233,
      93,   -50,   -50,   -50,   -50,   299,   299,    26,   -50,    85,
     233,   -50,    86,    21,   -50,   299,   233,   233,   269,   233,
     233,   233,   233,   269,   114,   -50,    30,   233,   118,   -50,
     136,   145,   -50,   -50,   -50,    82,   299,   120,   106,   -50,
      69,   -50,   102,   -50,   -50,    12,    35,   -50,   269,   115,
     127,   233,   110,   -50,   -50,   -50,   178,   299,   299,   141,
     299,   299,    -6,   290,   299,   -21,   128,   -50,   120,    65,
     -50,   -50,   -50,   233,   -50,   -50,   -50,   155,   -50,   144,
     269,   139,   299,   133,   -50,   -50,   269,   233,   233,   -50,
     233,    23,   -50,   -50,   299,   -50,   -50,   147,   -50,   233,
     148,   299,   299,   293,   -50,   233,   -50,   299,   -50,   269,
     296,   -50,   269,   -50
};

/* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -50,   -50,    -2,   -50,   159,   -50,   -50,   -50,   -50,   -50,
     -50,   -50,   -50,    37,   -50,   -50,   -50,   -50,   -50,   113,
     -50,   -50,   -49,   119,    76,   -50,   -20,   123,   -25,   -50,
     -50,    64,   -50,     3,   -22,   -50
};

/* YYTABLE[YYPACT[STATE-NUM]].  What to do in state STATE-NUM.  If
   positive, shift that token.  If negative, reduce the rule which
   number is the opposite.  If YYTABLE_NINF, syntax error.  */
#define YYTABLE_NINF -53
static const yytype_int16 yytable[] =
{
      28,    72,     1,    50,    73,   159,    46,    74,    99,   160,
      52,    29,    30,    31,    32,   156,    60,    33,    34,    35,
      49,    79,    36,    37,    38,    39,    51,    40,    41,    33,
      34,    35,    86,   157,    87,    13,   -52,   -52,   -52,   113,
     117,    42,    56,    75,    76,   107,    85,   137,    61,   174,
     115,   143,    80,   175,    89,    90,    43,    81,   124,   146,
     125,   103,    67,    68,    69,    59,    70,    53,    43,   -52,
     -52,   -52,   112,   118,   147,   -52,    77,   138,    33,    34,
      35,    91,   148,   122,    92,    72,   129,    54,    73,   127,
     128,   135,   130,   131,   133,   134,    29,    30,    31,    32,
      65,    66,    33,    34,    35,    94,   113,    36,    37,    38,
      39,    96,    40,    41,   102,    70,   149,    43,   110,   142,
      86,   143,    87,   121,   152,   111,    42,   136,    86,    85,
      87,   139,   -47,   -47,    86,   123,    87,    88,    97,    98,
     114,    43,    89,    90,   -46,   -46,   164,   145,   167,   140,
      89,    90,   165,   168,   170,   153,    89,    90,   141,   143,
     171,   172,   150,   173,   100,   101,   151,   155,   165,   162,
     166,   169,   177,   176,   178,    63,   163,   181,   180,   108,
     183,    29,    30,    31,    32,   109,   144,    33,    34,    35,
     154,    79,    36,    37,    38,    39,     0,    40,    41,     0,
     120,    29,    30,    31,    32,     0,     0,    33,    34,    35,
       0,    42,    36,    37,    38,    39,     0,    40,    41,     0,
       0,     0,    80,     0,     0,     0,    43,     0,     0,     0,
       0,    42,     0,     0,     0,   104,    29,    30,    31,    32,
       0,     0,    33,    34,    35,     0,    43,    36,    37,    38,
      39,     0,    40,    41,     0,     1,     0,     0,     0,     0,
       0,     0,     0,     2,     3,     4,    42,     5,     0,     6,
       7,     0,     0,     0,     8,     9,    10,    62,    11,    12,
       0,    43,     1,     0,     0,     0,     0,     0,    13,     0,
       2,     3,     4,     0,     5,     0,     6,     7,    86,     0,
      87,     8,     9,    10,     0,    11,    12,     0,    86,    93,
      87,    86,     0,    87,    86,    13,    87,    86,     0,    87,
      89,    90,   179,     0,     0,   182,     0,     0,     0,   158,
      89,    90,     0,    89,    90,     0,    89,    90,     0,    89,
      90
};

#define yypact_value_is_default(Yystate) \
  (!!((Yystate) == (-50)))

#define yytable_value_is_error(Yytable_value) \
  YYID (0)

static const yytype_int16 yycheck[] =
{
       2,    26,    13,     5,    26,    26,     3,    26,    57,    30,
       7,     3,     4,     5,     6,    21,    13,     9,    10,    11,
      13,    13,    14,    15,    16,    17,    13,    19,    20,     9,
      10,    11,    18,    39,    20,    46,     9,    10,    11,    13,
      14,    33,    13,    40,    41,    65,    43,    96,     0,    26,
      70,    39,    44,    30,    40,    41,    48,    49,    37,    47,
      39,    47,    42,    43,    44,    13,    46,    13,    48,    42,
      43,    44,    69,    47,    39,    48,    46,    97,     9,    10,
      11,    38,    47,    80,    24,   110,    88,    33,   110,    86,
      87,    93,    89,    90,    91,    92,     3,     4,     5,     6,
      38,    39,     9,    10,    11,    40,    13,    14,    15,    16,
      17,    13,    19,    20,    36,    46,   118,    48,    13,    37,
      18,    39,    20,    38,   121,    13,    33,    13,    18,   126,
      20,    13,    38,    39,    18,    49,    20,    21,    38,    39,
      47,    48,    40,    41,    38,    39,   143,    45,   150,    13,
      40,    41,    13,    14,   156,    45,    40,    41,    13,    39,
     157,   158,    47,   160,    42,    43,    39,    26,    13,    41,
      26,    38,   169,    26,    26,    16,   139,   179,   175,    66,
     182,     3,     4,     5,     6,    66,   110,     9,    10,    11,
     126,    13,    14,    15,    16,    17,    -1,    19,    20,    -1,
      77,     3,     4,     5,     6,    -1,    -1,     9,    10,    11,
      -1,    33,    14,    15,    16,    17,    -1,    19,    20,    -1,
      -1,    -1,    44,    -1,    -1,    -1,    48,    -1,    -1,    -1,
      -1,    33,    -1,    -1,    -1,    37,     3,     4,     5,     6,
      -1,    -1,     9,    10,    11,    -1,    48,    14,    15,    16,
      17,    -1,    19,    20,    -1,    13,    -1,    -1,    -1,    -1,
      -1,    -1,    -1,    21,    22,    23,    33,    25,    -1,    27,
      28,    -1,    -1,    -1,    32,    33,    34,    35,    36,    37,
      -1,    48,    13,    -1,    -1,    -1,    -1,    -1,    46,    -1,
      21,    22,    23,    -1,    25,    -1,    27,    28,    18,    -1,
      20,    32,    33,    34,    -1,    36,    37,    -1,    18,    29,
      20,    18,    -1,    20,    18,    46,    20,    18,    -1,    20,
      40,    41,    29,    -1,    -1,    29,    -1,    -1,    -1,    39,
      40,    41,    -1,    40,    41,    -1,    40,    41,    -1,    40,
      41
};

/* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
   symbol of state STATE-NUM.  */
static const yytype_uint8 yystos[] =
{
       0,    13,    21,    22,    23,    25,    27,    28,    32,    33,
      34,    36,    37,    46,    51,    52,    53,    54,    55,    56,
      57,    58,    60,    65,    68,    69,    70,    73,    52,     3,
       4,     5,     6,     9,    10,    11,    14,    15,    16,    17,
      19,    20,    33,    48,    71,    78,    83,    84,    85,    13,
      52,    13,    83,    13,    33,    62,    13,    66,    67,    13,
      83,     0,    35,    54,    64,    38,    39,    42,    43,    44,
      46,    74,    78,    84,    26,    83,    83,    46,    72,    13,
      44,    49,    79,    80,    81,    83,    18,    20,    21,    40,
      41,    38,    24,    29,    40,    63,    13,    38,    39,    72,
      42,    43,    36,    47,    37,    76,    83,    76,    69,    73,
      13,    13,    83,    13,    47,    76,    77,    14,    47,    75,
      77,    38,    83,    49,    37,    39,    82,    83,    83,    52,
      83,    83,    59,    83,    83,    52,    13,    72,    76,    13,
      13,    13,    37,    39,    74,    45,    47,    39,    47,    52,
      47,    39,    83,    45,    81,    26,    21,    39,    39,    26,
      30,    61,    41,    63,    83,    13,    26,    52,    14,    38,
      52,    83,    83,    83,    26,    30,    26,    83,    26,    29,
      83,    52,    29,    52
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

  case 29:
/* Line 1802 of yacc.c  */
#line 143 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block END"); }
    break;

  case 30:
/* Line 1802 of yacc.c  */
#line 145 "Parser.y"
    { DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if END"); }
    break;

  case 31:
/* Line 1802 of yacc.c  */
#line 148 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: else_if ELSEIF exp THEN block"); }
    break;

  case 32:
/* Line 1802 of yacc.c  */
#line 149 "Parser.y"
    { DEBUGPRINT_BISON("\nELSE_IF: ELSEIF exp THEN block"); }
    break;

  case 33:
/* Line 1802 of yacc.c  */
#line 156 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: attr_list ',' NAME attr"); }
    break;

  case 34:
/* Line 1802 of yacc.c  */
#line 157 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR_LIST: NAME attr"); }
    break;

  case 35:
/* Line 1802 of yacc.c  */
#line 163 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: '<' NAME '>'"); }
    break;

  case 36:
/* Line 1802 of yacc.c  */
#line 164 "Parser.y"
    { DEBUGPRINT_BISON("\nATTR: empty"); }
    break;

  case 37:
/* Line 1802 of yacc.c  */
#line 171 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN"); }
    break;

  case 38:
/* Line 1802 of yacc.c  */
#line 172 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN ;'"); }
    break;

  case 39:
/* Line 1802 of yacc.c  */
#line 173 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list"); }
    break;

  case 40:
/* Line 1802 of yacc.c  */
#line 174 "Parser.y"
    { DEBUGPRINT_BISON("\nRET: RETURN exp_list ';'"); }
    break;

  case 41:
/* Line 1802 of yacc.c  */
#line 180 "Parser.y"
    { DEBUGPRINT_BISON("\nLABEL: LABEL_DEF NAME LABEL_DEF"); }
    break;

  case 42:
/* Line 1802 of yacc.c  */
#line 187 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part"); }
    break;

  case 43:
/* Line 1802 of yacc.c  */
#line 188 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part ':' NAME"); }
    break;

  case 44:
/* Line 1802 of yacc.c  */
#line 192 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: function_name_part '.' NAME"); }
    break;

  case 45:
/* Line 1802 of yacc.c  */
#line 193 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: NAME"); }
    break;

  case 46:
/* Line 1802 of yacc.c  */
#line 199 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var_list ',' var"); }
    break;

  case 47:
/* Line 1802 of yacc.c  */
#line 200 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR_LIST: var"); }
    break;

  case 48:
/* Line 1802 of yacc.c  */
#line 206 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: NAME"); }
    break;

  case 49:
/* Line 1802 of yacc.c  */
#line 207 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '[' exp ']'"); }
    break;

  case 50:
/* Line 1802 of yacc.c  */
#line 208 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: prefix_exp '.' NAME"); }
    break;

  case 51:
/* Line 1802 of yacc.c  */
#line 214 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: var"); }
    break;

  case 52:
/* Line 1802 of yacc.c  */
#line 215 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: function_call"); }
    break;

  case 53:
/* Line 1802 of yacc.c  */
#line 216 "Parser.y"
    { DEBUGPRINT_BISON("\nPREFIX_EXP: '(' exp ')'"); }
    break;

  case 54:
/* Line 1802 of yacc.c  */
#line 222 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: FUNCTION function_body"); }
    break;

  case 55:
/* Line 1802 of yacc.c  */
#line 225 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' ')' block END"); }
    break;

  case 56:
/* Line 1802 of yacc.c  */
#line 226 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' par_list ')' block END"); }
    break;

  case 57:
/* Line 1802 of yacc.c  */
#line 232 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp args"); }
    break;

  case 58:
/* Line 1802 of yacc.c  */
#line 233 "Parser.y"
    { DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp ':' Name args"); }
    break;

  case 59:
/* Line 1802 of yacc.c  */
#line 239 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' ')'"); }
    break;

  case 60:
/* Line 1802 of yacc.c  */
#line 240 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); }
    break;

  case 61:
/* Line 1802 of yacc.c  */
#line 241 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); }
    break;

  case 62:
/* Line 1802 of yacc.c  */
#line 242 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: '(' name_list ')'"); }
    break;

  case 63:
/* Line 1802 of yacc.c  */
#line 243 "Parser.y"
    { DEBUGPRINT_BISON("\nARGS: literalString"); }
    break;

  case 64:
/* Line 1802 of yacc.c  */
#line 249 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list"); }
    break;

  case 65:
/* Line 1802 of yacc.c  */
#line 250 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: name_list ',' DOTS"); }
    break;

  case 66:
/* Line 1802 of yacc.c  */
#line 251 "Parser.y"
    { DEBUGPRINT_BISON("\nPAR_LIST: DOTS"); }
    break;

  case 67:
/* Line 1802 of yacc.c  */
#line 257 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp_list ',' exp"); }
    break;

  case 68:
/* Line 1802 of yacc.c  */
#line 258 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP_LIST: exp"); }
    break;

  case 69:
/* Line 1802 of yacc.c  */
#line 264 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: name_list ',' NAME"); }
    break;

  case 70:
/* Line 1802 of yacc.c  */
#line 265 "Parser.y"
    { DEBUGPRINT_BISON("\nNAME_LIST: NAME"); }
    break;

  case 71:
/* Line 1802 of yacc.c  */
#line 271 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' '}' "); }
    break;

  case 72:
/* Line 1802 of yacc.c  */
#line 272 "Parser.y"
    { DEBUGPRINT_BISON("\nTABLE_BODY: '{' field_list '}'"); }
    break;

  case 73:
/* Line 1802 of yacc.c  */
#line 279 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part field_sep"); }
    break;

  case 74:
/* Line 1802 of yacc.c  */
#line 280 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part"); }
    break;

  case 75:
/* Line 1802 of yacc.c  */
#line 284 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field_list_part field_sep"); }
    break;

  case 76:
/* Line 1802 of yacc.c  */
#line 285 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_LIST_PART: field"); }
    break;

  case 77:
/* Line 1802 of yacc.c  */
#line 290 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); }
    break;

  case 78:
/* Line 1802 of yacc.c  */
#line 291 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); }
    break;

  case 79:
/* Line 1802 of yacc.c  */
#line 292 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD: exp"); }
    break;

  case 80:
/* Line 1802 of yacc.c  */
#line 296 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ','"); }
    break;

  case 81:
/* Line 1802 of yacc.c  */
#line 297 "Parser.y"
    { DEBUGPRINT_BISON("\nFIELD_SEP: ';'"); }
    break;

  case 82:
/* Line 1802 of yacc.c  */
#line 301 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: NIL"); }
    break;

  case 83:
/* Line 1802 of yacc.c  */
#line 302 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: FALSE"); }
    break;

  case 84:
/* Line 1802 of yacc.c  */
#line 303 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: TRUE"); }
    break;

  case 85:
/* Line 1802 of yacc.c  */
#line 304 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: DOTS"); }
    break;

  case 86:
/* Line 1802 of yacc.c  */
#line 306 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
    break;

  case 87:
/* Line 1802 of yacc.c  */
#line 307 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }
    break;

  case 88:
/* Line 1802 of yacc.c  */
#line 310 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '<' exp"); }
    break;

  case 89:
/* Line 1802 of yacc.c  */
#line 311 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: exp '>' exp"); }
    break;

  case 90:
/* Line 1802 of yacc.c  */
#line 314 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: MINUS exp"); }
    break;

  case 91:
/* Line 1802 of yacc.c  */
#line 316 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: UNOP exp"); }
    break;

  case 92:
/* Line 1802 of yacc.c  */
#line 318 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: numeral"); }
    break;

  case 93:
/* Line 1802 of yacc.c  */
#line 319 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: literalString"); }
    break;

  case 94:
/* Line 1802 of yacc.c  */
#line 320 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: table_body"); }
    break;

  case 95:
/* Line 1802 of yacc.c  */
#line 322 "Parser.y"
    { DEBUGPRINT_BISON("\nEXP: function_def"); }
    break;

  case 96:
/* Line 1802 of yacc.c  */
#line 326 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
    break;

  case 97:
/* Line 1802 of yacc.c  */
#line 327 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); }
    break;

  case 98:
/* Line 1802 of yacc.c  */
#line 328 "Parser.y"
    { DEBUGPRINT_BISON("\nVAR: LONGSTRING"); }
    break;

  case 99:
/* Line 1802 of yacc.c  */
#line 333 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: INT"); }
    break;

  case 100:
/* Line 1802 of yacc.c  */
#line 334 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX"); }
    break;

  case 101:
/* Line 1802 of yacc.c  */
#line 335 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: FLOAT"); }
    break;

  case 102:
/* Line 1802 of yacc.c  */
#line 336 "Parser.y"
    { DEBUGPRINT_BISON("\nNUMERAL: HEX_FLOAT"); }
    break;


/* Line 1802 of yacc.c  */
#line 2271 "Parser.tab.c"
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
#line 354 "Parser.y"


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
/* A Bison parser, made by GNU Bison 3.5.1.  */

/* Bison implementation for Yacc-like parsers in C

   Copyright (C) 1984, 1989-1990, 2000-2015, 2018-2020 Free Software Foundation,
   Inc.

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.5.1"

/* Skeleton name.  */
#define YYSKELETON_NAME "yacc.c"

/* Pure parsers.  */
#define YYPURE 0

/* Push parsers.  */
#define YYPUSH 0

/* Pull parsers.  */
#define YYPULL 1




/* First part of user prologue.  */
#line 1 "exemple.y"

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "genCode.c"
extern int nbLigne;

int err= 0;
// the variable nom will stock the name of an identifier
char nom [256];
int intValue;
char operSymbol [10];
int idx;
int codeTabIndex;
int beginOfWhile;
int calledMethodIndex;
int backToMainIndex;
char calledMethodName [50];
//------------- THIS BLOCK IS FOR METHODS HANDELING---------------------
char methodName [50];
char * mehtodArgs [50];
int nbArgs=0;
int nbCalledArgs=0;
//----------------
int yyerror(char const * msg);	
int yylex();


#line 99 "exemple.tab.c"

# ifndef YY_CAST
#  ifdef __cplusplus
#   define YY_CAST(Type, Val) static_cast<Type> (Val)
#   define YY_REINTERPRET_CAST(Type, Val) reinterpret_cast<Type> (Val)
#  else
#   define YY_CAST(Type, Val) ((Type) (Val))
#   define YY_REINTERPRET_CAST(Type, Val) ((Type) (Val))
#  endif
# endif
# ifndef YY_NULLPTR
#  if defined __cplusplus
#   if 201103L <= __cplusplus
#    define YY_NULLPTR nullptr
#   else
#    define YY_NULLPTR 0
#   endif
#  else
#   define YY_NULLPTR ((void*)0)
#  endif
# endif

/* Enabling verbose error messages.  */
#ifdef YYERROR_VERBOSE
# undef YYERROR_VERBOSE
# define YYERROR_VERBOSE 1
#else
# define YYERROR_VERBOSE 0
#endif

/* Use api.header.include to #include this header
   instead of duplicating it here.  */
#ifndef YY_YY_EXEMPLE_TAB_H_INCLUDED
# define YY_YY_EXEMPLE_TAB_H_INCLUDED
/* Debug traces.  */
#ifndef YYDEBUG
# define YYDEBUG 0
#endif
#if YYDEBUG
extern int yydebug;
#endif

/* Token type.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    kw_class = 258,
    kw_public = 259,
    kw_static = 260,
    kw_void = 261,
    kw_main = 262,
    kw_extends = 263,
    kw_return = 264,
    kw_if = 265,
    kw_else = 266,
    kw_while = 267,
    kw_print = 268,
    kw_this = 269,
    kw_new = 270,
    kw_length = 271,
    _type = 272,
    kw_String = 273,
    openParentheses = 274,
    closeParentheses = 275,
    openSquareBrackets = 276,
    closeSquareBrackets = 277,
    openBraces = 278,
    closeBraces = 279,
    operator = 280,
    affectation = 281,
    notOperator = 282,
    dot = 283,
    Semicolon = 284,
    comma = 285,
    doubleQuote = 286,
    simpleQuote = 287,
    booleanLiteral = 288,
    integerLiteral = 289,
    identifier = 290
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
typedef int YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_EXEMPLE_TAB_H_INCLUDED  */



#ifdef short
# undef short
#endif

/* On compilers that do not define __PTRDIFF_MAX__ etc., make sure
   <limits.h> and (if available) <stdint.h> are included
   so that the code can choose integer types of a good width.  */

#ifndef __PTRDIFF_MAX__
# include <limits.h> /* INFRINGES ON USER NAME SPACE */
# if defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stdint.h> /* INFRINGES ON USER NAME SPACE */
#  define YY_STDINT_H
# endif
#endif

/* Narrow types that promote to a signed type and that can represent a
   signed or unsigned integer of at least N bits.  In tables they can
   save space and decrease cache pressure.  Promoting to a signed type
   helps avoid bugs in integer arithmetic.  */

#ifdef __INT_LEAST8_MAX__
typedef __INT_LEAST8_TYPE__ yytype_int8;
#elif defined YY_STDINT_H
typedef int_least8_t yytype_int8;
#else
typedef signed char yytype_int8;
#endif

#ifdef __INT_LEAST16_MAX__
typedef __INT_LEAST16_TYPE__ yytype_int16;
#elif defined YY_STDINT_H
typedef int_least16_t yytype_int16;
#else
typedef short yytype_int16;
#endif

#if defined __UINT_LEAST8_MAX__ && __UINT_LEAST8_MAX__ <= __INT_MAX__
typedef __UINT_LEAST8_TYPE__ yytype_uint8;
#elif (!defined __UINT_LEAST8_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST8_MAX <= INT_MAX)
typedef uint_least8_t yytype_uint8;
#elif !defined __UINT_LEAST8_MAX__ && UCHAR_MAX <= INT_MAX
typedef unsigned char yytype_uint8;
#else
typedef short yytype_uint8;
#endif

#if defined __UINT_LEAST16_MAX__ && __UINT_LEAST16_MAX__ <= __INT_MAX__
typedef __UINT_LEAST16_TYPE__ yytype_uint16;
#elif (!defined __UINT_LEAST16_MAX__ && defined YY_STDINT_H \
       && UINT_LEAST16_MAX <= INT_MAX)
typedef uint_least16_t yytype_uint16;
#elif !defined __UINT_LEAST16_MAX__ && USHRT_MAX <= INT_MAX
typedef unsigned short yytype_uint16;
#else
typedef int yytype_uint16;
#endif

#ifndef YYPTRDIFF_T
# if defined __PTRDIFF_TYPE__ && defined __PTRDIFF_MAX__
#  define YYPTRDIFF_T __PTRDIFF_TYPE__
#  define YYPTRDIFF_MAXIMUM __PTRDIFF_MAX__
# elif defined PTRDIFF_MAX
#  ifndef ptrdiff_t
#   include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  endif
#  define YYPTRDIFF_T ptrdiff_t
#  define YYPTRDIFF_MAXIMUM PTRDIFF_MAX
# else
#  define YYPTRDIFF_T long
#  define YYPTRDIFF_MAXIMUM LONG_MAX
# endif
#endif

#ifndef YYSIZE_T
# ifdef __SIZE_TYPE__
#  define YYSIZE_T __SIZE_TYPE__
# elif defined size_t
#  define YYSIZE_T size_t
# elif defined __STDC_VERSION__ && 199901 <= __STDC_VERSION__
#  include <stddef.h> /* INFRINGES ON USER NAME SPACE */
#  define YYSIZE_T size_t
# else
#  define YYSIZE_T unsigned
# endif
#endif

#define YYSIZE_MAXIMUM                                  \
  YY_CAST (YYPTRDIFF_T,                                 \
           (YYPTRDIFF_MAXIMUM < YY_CAST (YYSIZE_T, -1)  \
            ? YYPTRDIFF_MAXIMUM                         \
            : YY_CAST (YYSIZE_T, -1)))

#define YYSIZEOF(X) YY_CAST (YYPTRDIFF_T, sizeof (X))

/* Stored state numbers (used for stacks). */
typedef yytype_int16 yy_state_t;

/* State numbers in computations.  */
typedef int yy_state_fast_t;

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

#ifndef YY_ATTRIBUTE_PURE
# if defined __GNUC__ && 2 < __GNUC__ + (96 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_PURE __attribute__ ((__pure__))
# else
#  define YY_ATTRIBUTE_PURE
# endif
#endif

#ifndef YY_ATTRIBUTE_UNUSED
# if defined __GNUC__ && 2 < __GNUC__ + (7 <= __GNUC_MINOR__)
#  define YY_ATTRIBUTE_UNUSED __attribute__ ((__unused__))
# else
#  define YY_ATTRIBUTE_UNUSED
# endif
#endif

/* Suppress unused-variable warnings by "using" E.  */
#if ! defined lint || defined __GNUC__
# define YYUSE(E) ((void) (E))
#else
# define YYUSE(E) /* empty */
#endif

#if defined __GNUC__ && ! defined __ICC && 407 <= __GNUC__ * 100 + __GNUC_MINOR__
/* Suppress an incorrect diagnostic about yylval being uninitialized.  */
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN                            \
    _Pragma ("GCC diagnostic push")                                     \
    _Pragma ("GCC diagnostic ignored \"-Wuninitialized\"")              \
    _Pragma ("GCC diagnostic ignored \"-Wmaybe-uninitialized\"")
# define YY_IGNORE_MAYBE_UNINITIALIZED_END      \
    _Pragma ("GCC diagnostic pop")
#else
# define YY_INITIAL_VALUE(Value) Value
#endif
#ifndef YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
# define YY_IGNORE_MAYBE_UNINITIALIZED_END
#endif
#ifndef YY_INITIAL_VALUE
# define YY_INITIAL_VALUE(Value) /* Nothing. */
#endif

#if defined __cplusplus && defined __GNUC__ && ! defined __ICC && 6 <= __GNUC__
# define YY_IGNORE_USELESS_CAST_BEGIN                          \
    _Pragma ("GCC diagnostic push")                            \
    _Pragma ("GCC diagnostic ignored \"-Wuseless-cast\"")
# define YY_IGNORE_USELESS_CAST_END            \
    _Pragma ("GCC diagnostic pop")
#endif
#ifndef YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_BEGIN
# define YY_IGNORE_USELESS_CAST_END
#endif


#define YY_ASSERT(E) ((void) (0 && (E)))

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
#    if ! defined _ALLOCA_H && ! defined EXIT_SUCCESS
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
   /* Pacify GCC's 'empty if-body' warning.  */
#  define YYSTACK_FREE(Ptr) do { /* empty */; } while (0)
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
#   if ! defined malloc && ! defined EXIT_SUCCESS
void *malloc (YYSIZE_T); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
#  ifndef YYFREE
#   define YYFREE free
#   if ! defined free && ! defined EXIT_SUCCESS
void free (void *); /* INFRINGES ON USER NAME SPACE */
#   endif
#  endif
# endif
#endif /* ! defined yyoverflow || YYERROR_VERBOSE */


#if (! defined yyoverflow \
     && (! defined __cplusplus \
         || (defined YYSTYPE_IS_TRIVIAL && YYSTYPE_IS_TRIVIAL)))

/* A type that is properly aligned for any stack member.  */
union yyalloc
{
  yy_state_t yyss_alloc;
  YYSTYPE yyvs_alloc;
};

/* The size of the maximum gap between one aligned stack and the next.  */
# define YYSTACK_GAP_MAXIMUM (YYSIZEOF (union yyalloc) - 1)

/* The size of an array large to enough to hold all stacks, each with
   N elements.  */
# define YYSTACK_BYTES(N) \
     ((N) * (YYSIZEOF (yy_state_t) + YYSIZEOF (YYSTYPE)) \
      + YYSTACK_GAP_MAXIMUM)

# define YYCOPY_NEEDED 1

/* Relocate STACK from its old location to the new one.  The
   local variables YYSIZE and YYSTACKSIZE give the old and new number of
   elements in the stack, and YYPTR gives the new location of the
   stack.  Advance YYPTR to a properly aligned location for the next
   stack.  */
# define YYSTACK_RELOCATE(Stack_alloc, Stack)                           \
    do                                                                  \
      {                                                                 \
        YYPTRDIFF_T yynewbytes;                                         \
        YYCOPY (&yyptr->Stack_alloc, Stack, yysize);                    \
        Stack = &yyptr->Stack_alloc;                                    \
        yynewbytes = yystacksize * YYSIZEOF (*Stack) + YYSTACK_GAP_MAXIMUM; \
        yyptr += yynewbytes / YYSIZEOF (*yyptr);                        \
      }                                                                 \
    while (0)

#endif

#if defined YYCOPY_NEEDED && YYCOPY_NEEDED
/* Copy COUNT objects from SRC to DST.  The source and destination do
   not overlap.  */
# ifndef YYCOPY
#  if defined __GNUC__ && 1 < __GNUC__
#   define YYCOPY(Dst, Src, Count) \
      __builtin_memcpy (Dst, Src, YY_CAST (YYSIZE_T, (Count)) * sizeof (*(Src)))
#  else
#   define YYCOPY(Dst, Src, Count)              \
      do                                        \
        {                                       \
          YYPTRDIFF_T yyi;                      \
          for (yyi = 0; yyi < (Count); yyi++)   \
            (Dst)[yyi] = (Src)[yyi];            \
        }                                       \
      while (0)
#  endif
# endif
#endif /* !YYCOPY_NEEDED */

/* YYFINAL -- State number of the termination state.  */
#define YYFINAL  3
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   430

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  36
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  37
/* YYNRULES -- Number of rules.  */
#define YYNRULES  95
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  273

#define YYUNDEFTOK  2
#define YYMAXUTOK   290


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK ? yytranslate[YYX] : YYUNDEFTOK)

/* YYTRANSLATE[TOKEN-NUM] -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex.  */
static const yytype_int8 yytranslate[] =
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
      15,    16,    17,    18,    19,    20,    21,    22,    23,    24,
      25,    26,    27,    28,    29,    30,    31,    32,    33,    34,
      35
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_int16 yyrline[] =
{
       0,    67,    67,    67,    78,    77,    83,    87,    87,    90,
      92,    94,    96,    98,   100,   102,   103,   104,   105,   107,
     107,   109,   109,   113,   114,   115,   116,   117,   118,   119,
     120,   121,   122,   123,   124,   124,   127,   133,   126,   139,
     142,   149,   149,   150,   163,   162,   174,   175,   177,   183,
     188,   176,   192,   196,   202,   191,   208,   209,   213,   215,
     220,   213,   234,   235,   236,   237,   238,   239,   240,   240,
     242,   242,   256,   258,   258,   268,   268,   277,   278,   279,
     280,   286,   280,   291,   297,   298,   299,   300,   306,   307,
     308,   309,   309,   311,   311,   311
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "kw_class", "kw_public", "kw_static",
  "kw_void", "kw_main", "kw_extends", "kw_return", "kw_if", "kw_else",
  "kw_while", "kw_print", "kw_this", "kw_new", "kw_length", "_type",
  "kw_String", "openParentheses", "closeParentheses", "openSquareBrackets",
  "closeSquareBrackets", "openBraces", "closeBraces", "operator",
  "affectation", "notOperator", "dot", "Semicolon", "comma", "doubleQuote",
  "simpleQuote", "booleanLiteral", "integerLiteral", "identifier",
  "$accept", "program", "$@1", "mainClass", "$@2", "classHead", "$@3",
  "classDeclaration", "parentClass", "identifierOrNumber",
  "varsDeclaration", "$@4", "typeDeclaration", "methodDeclaration", "$@5",
  "$@6", "functionVars", "functionVariables", "$@7", "statement", "$@8",
  "$@9", "$@10", "$@11", "$@12", "$@13", "$@14", "$@15", "$@16",
  "expression", "$@17", "$@18", "$@19", "$@20", "$@21",
  "anotherExpression", "$@22", YY_NULLPTR
};
#endif

# ifdef YYPRINT
/* YYTOKNUM[NUM] -- (External) token number corresponding to the
   (internal) symbol number NUM (which must be that of a token).  */
static const yytype_int16 yytoknum[] =
{
       0,   256,   257,   258,   259,   260,   261,   262,   263,   264,
     265,   266,   267,   268,   269,   270,   271,   272,   273,   274,
     275,   276,   277,   278,   279,   280,   281,   282,   283,   284,
     285,   286,   287,   288,   289,   290
};
# endif

#define YYPACT_NINF (-127)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-94)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
    -127,    29,    13,  -127,    -4,   285,    39,    43,     9,    59,
    -127,    87,    16,    16,   345,   174,   121,    89,    14,   106,
     109,    16,     7,   104,  -127,  -127,   149,     5,   150,  -127,
    -127,  -127,   174,   174,  -127,   174,   396,    -6,   199,   137,
      69,   159,    12,   156,   149,   149,   149,   149,   133,   170,
     154,   161,   285,   133,   170,   162,   142,    31,  -127,   153,
     186,   190,   195,   227,  -127,  -127,   200,  -127,   211,  -127,
    -127,   205,  -127,   219,   223,  -127,   224,     8,   170,   222,
     285,   285,   285,   285,   170,   168,   235,   170,   170,   170,
     170,   170,   170,  -127,   236,  -127,  -127,  -127,  -127,  -127,
     225,   242,  -127,   168,  -127,  -127,  -127,  -127,  -127,  -127,
     254,   234,   249,   248,    24,   281,    99,   289,   295,   300,
     168,   232,    99,   301,   306,  -127,   317,   320,   328,   332,
     189,    71,   349,   232,   208,  -127,   389,   389,  -127,   389,
      80,   330,   336,   389,   389,   340,   389,   353,   246,   208,
    -127,   337,   389,   389,   273,   262,   342,   309,   183,   389,
     312,   226,   226,   119,   313,  -127,    32,   389,   346,   246,
     352,   322,   276,  -127,  -127,   348,   354,   356,   389,   389,
     363,    61,  -127,   324,   361,   364,  -127,  -127,   366,   226,
     372,    84,   389,   358,   129,   377,   378,   390,  -127,   343,
     374,   381,   327,   335,   389,  -127,  -127,    45,  -127,   226,
     226,   389,  -127,   389,   389,   389,   141,   149,   387,  -127,
     388,  -127,  -127,  -127,  -127,  -127,   389,  -127,   194,   398,
     407,   397,  -127,  -127,   250,   279,   288,   298,  -127,  -127,
    -127,  -127,  -127,   389,  -127,   246,  -127,  -127,  -127,   350,
    -127,   226,   149,    93,   402,   395,  -127,  -127,   391,   246,
    -127,   389,   406,   403,   226,   245,  -127,  -127,  -127,   391,
     226,  -127,  -127
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       2,     0,     0,     1,     0,     0,     0,     0,     0,     0,
       3,     0,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    34,    35,    40,     0,     0,    16,
      17,    15,     0,     0,     8,     0,     0,     0,     0,     0,
       0,     0,     0,     0,    40,    40,    40,    40,     0,     0,
       0,     0,     0,     0,     0,     0,     0,     0,    21,     0,
       0,     0,     0,     0,    20,    19,     0,    25,     0,    36,
       9,     0,    26,     0,     0,    27,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    42,     0,     0,     0,     0,
       0,     0,     0,    22,     0,    10,    11,    12,    13,    28,
       0,     0,    41,    42,    29,    23,    30,    31,    32,    24,
       0,    43,     0,     0,     0,     0,     0,     0,     0,     0,
       0,     0,     0,     0,     0,    45,     0,     0,     0,     0,
       0,     0,     0,     0,     0,     4,    92,    92,    52,    92,
       0,     0,     0,    92,    92,     0,    92,     0,     0,     0,
      88,     0,    92,    92,     0,     0,    87,     0,     0,    92,
       0,     0,     0,     0,     0,    59,     0,    92,     0,     0,
       0,     0,     0,    86,    84,     0,     0,     0,    92,    92,
       0,     0,    48,     0,    92,     0,    47,    46,     0,     0,
      92,     0,    92,     0,     0,     0,     0,     0,    91,     0,
       0,     0,     0,     0,    92,    79,    80,     0,    53,     0,
       0,    92,    62,    92,    92,    92,     0,    40,     0,     6,
       0,    89,    76,    71,    74,    77,    78,    72,     0,     0,
       0,     0,    57,    56,     0,     0,     0,     0,    60,    39,
      37,     5,    64,    92,    49,     0,    65,    66,    67,    92,
      63,     0,    40,     0,     0,     0,    61,    38,    95,     0,
      54,    92,     0,     0,     0,     0,    82,    50,    55,    95,
       0,    94,    51
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
    -127,  -127,  -127,  -127,  -127,  -127,  -127,    -7,   114,   265,
      15,  -127,   -33,   -44,  -127,  -127,   325,   310,  -127,  -126,
    -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -127,  -125,
    -127,  -127,  -127,  -127,  -127,   160,  -127
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     1,     2,     5,   149,     9,    21,    10,    19,    66,
      26,    78,    27,    39,    86,   252,   101,   102,   115,   132,
     207,   254,   270,   159,   231,   264,   145,   192,   251,   202,
     176,   177,   175,   229,   258,   262,   269
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_int16 yytable[] =
{
      60,    61,    62,    63,   142,    51,    40,   147,    35,    91,
      13,   157,   158,    56,   160,    30,     4,    17,   163,   164,
      48,   166,   168,    49,    18,   118,    41,   171,   172,     3,
      36,     6,    76,   178,   183,   186,   187,    92,    57,   -18,
      42,    58,   194,   196,    14,    70,   126,    44,    45,    31,
      46,    47,   100,   179,   203,   127,   -69,   128,   129,   119,
     181,   193,    11,   212,    67,    64,    65,   216,   130,    72,
     100,    75,   143,    95,    96,    97,    98,   205,    12,   228,
     131,   230,    15,   232,   233,   214,   234,   100,   235,   236,
     237,    16,   144,    93,   178,    53,   206,   -58,    54,    99,
      23,   136,   104,   105,   106,   107,   108,   109,   -33,   -33,
     215,   -33,   -33,   -81,   179,    37,    24,    25,   253,   255,
     178,   181,   -33,   -81,    29,   256,    28,    20,    22,    32,
     178,   121,    33,   263,   -33,    34,   265,   133,   268,    37,
     179,   188,   178,    23,   272,   141,   -33,   181,   189,   148,
     179,   -33,   -33,    38,   -33,   -33,    43,   181,   218,    24,
      25,    52,   179,    59,   169,   -33,   -33,    64,    65,   181,
     238,    23,    79,   239,   -33,    23,    64,    65,   -33,   -33,
     -33,    55,   -33,   -33,   178,    24,    25,    24,    25,    68,
     140,    24,    25,   -33,   -33,   178,    69,    73,   -33,   127,
      50,   128,   129,   182,   179,   -33,    24,    25,   257,    23,
      80,   181,   130,   -33,    81,   179,    24,    25,   -33,    82,
     -33,   -33,   181,   242,   131,    24,    25,   126,    83,    84,
      85,   -33,   -33,   126,    87,   -69,   127,   -69,   128,   129,
      94,   -69,   127,   -33,   128,   129,   178,   126,    88,   130,
     -69,   178,    89,    90,   103,   130,   127,   110,   128,   129,
     111,   131,   112,   174,   -44,   -93,   179,   131,   117,   130,
     -69,   179,   116,   181,   173,   -93,   114,   178,   181,   246,
     178,   131,   -83,   -83,   -83,   -14,     7,   -75,     8,   178,
     -83,   -83,   -83,   -85,   -85,   -85,   -90,   179,   -90,   249,
     179,   -85,   -85,   -85,   181,   -90,   -90,   181,   247,   179,
     178,   120,   122,   184,   190,   123,   181,   248,    71,   179,
     124,    74,    77,   178,   134,   178,   181,   250,   178,   135,
     179,   180,   185,   179,   179,   191,   226,   181,   136,   137,
     181,   181,   198,   179,   208,   179,    17,   138,   179,   225,
     181,   139,   181,    18,   161,   181,   179,   227,   146,   -68,
     162,   -68,   167,   181,   150,   151,   165,   -70,    -7,   152,
     195,   197,   170,   199,   -68,   150,   151,   153,   222,   200,
     152,   201,   217,   154,   155,   156,   150,   151,   153,   204,
     209,   152,   211,   210,   154,   155,   156,    23,   213,   153,
     -33,   219,   220,   150,   151,   154,   155,   156,   152,   223,
     221,   240,   241,    24,    25,   224,   153,   243,   244,   260,
     245,   261,   154,   155,   156,   259,   266,   267,   113,   271,
     125
};

static const yytype_int16 yycheck[] =
{
      44,    45,    46,    47,   130,    38,     1,   133,     1,     1,
       1,   136,   137,     1,   139,     1,     3,     1,   143,   144,
      26,   146,   148,    29,     8,     1,    21,   152,   153,     0,
      23,    35,     1,     1,   159,   161,   162,    29,    26,    23,
      35,    29,   167,   169,    35,    52,     1,    32,    33,    35,
      35,    36,    85,    21,   179,    10,    11,    12,    13,    35,
      28,    29,    23,   189,    49,    34,    35,   192,    23,    54,
     103,    56,     1,    80,    81,    82,    83,    16,    35,   204,
      35,   207,    23,   209,   210,     1,   211,   120,   213,   214,
     215,     4,    21,    78,     1,    26,    35,    26,    29,    84,
       1,    21,    87,    88,    89,    90,    91,    92,     9,    10,
      26,    12,    13,    20,    21,    35,    17,    18,   243,   245,
       1,    28,    23,    30,    35,   251,     5,    13,    14,    23,
       1,   116,    23,   259,    35,    21,   261,   122,   264,    35,
      21,    22,     1,     1,   270,   130,     4,    28,    29,   134,
      21,     9,    10,     4,    12,    13,     6,    28,    29,    17,
      18,    24,    21,     7,   149,    23,    24,    34,    35,    28,
      29,     1,    19,   217,     4,     1,    34,    35,     4,     9,
      10,    22,    12,    13,     1,    17,    18,    17,    18,    35,
       1,    17,    18,    23,    24,     1,    35,    35,    24,    10,
       1,    12,    13,    20,    21,    35,    17,    18,   252,     1,
      24,    28,    23,    24,    24,    21,    17,    18,    10,    24,
      12,    13,    28,    29,    35,    17,    18,     1,     1,    29,
      19,    23,    24,     1,    29,     9,    10,    11,    12,    13,
      18,     9,    10,    35,    12,    13,     1,     1,    29,    23,
      24,     1,    29,    29,    19,    23,    10,    21,    12,    13,
      35,    35,    20,     1,    30,    20,    21,    35,    20,    23,
      24,    21,    23,    28,     1,    30,    22,     1,    28,    29,
       1,    35,    20,    21,    22,     0,     1,    25,     3,     1,
      28,    29,    30,    20,    21,    22,    20,    21,    22,     1,
      21,    28,    29,    30,    28,    29,    30,    28,    29,    21,
       1,    30,    23,     1,     1,    20,    28,    29,    53,    21,
      20,    56,    57,     1,    23,     1,    28,    29,     1,    23,
      21,    22,    20,    21,    21,    22,     1,    28,    21,    19,
      28,    28,    20,    21,    20,    21,     1,    19,    21,    22,
      28,    19,    28,     8,    24,    28,    21,    22,     9,     9,
      24,    11,     9,    28,    14,    15,    26,    25,    23,    19,
      24,    19,    35,    25,    24,    14,    15,    27,    35,    25,
      19,    25,    24,    33,    34,    35,    14,    15,    27,    26,
      29,    19,    26,    29,    33,    34,    35,     1,    26,    27,
       4,    24,    24,    14,    15,    33,    34,    35,    19,    35,
      20,    24,    24,    17,    18,    34,    27,    19,    11,    24,
      23,    30,    33,    34,    35,    23,    20,    24,   103,   269,
     120
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,    37,    38,     0,     3,    39,    35,     1,     3,    41,
      43,    23,    35,     1,    35,    23,     4,     1,     8,    44,
      44,    42,    44,     1,    17,    18,    46,    48,     5,    35,
       1,    35,    23,    23,    44,     1,    23,    35,     4,    49,
       1,    21,    35,     6,    46,    46,    46,    46,    26,    29,
       1,    48,    24,    26,    29,    22,     1,    26,    29,     7,
      49,    49,    49,    49,    34,    35,    45,    46,    35,    35,
      43,    45,    46,    35,    45,    46,     1,    45,    47,    19,
      24,    24,    24,     1,    29,    19,    50,    29,    29,    29,
      29,     1,    29,    46,    18,    43,    43,    43,    43,    46,
      48,    52,    53,    19,    46,    46,    46,    46,    46,    46,
      21,    35,    20,    52,    22,    54,    23,    20,     1,    35,
      30,    46,    23,    20,    20,    53,     1,    10,    12,    13,
      23,    35,    55,    46,    23,    23,    21,    19,    19,    19,
       1,    46,    55,     1,    21,    62,     9,    55,    46,    40,
      14,    15,    19,    27,    33,    34,    35,    65,    65,    59,
      65,    24,    24,    65,    65,    26,    65,     9,    55,    46,
      35,    65,    65,     1,     1,    68,    66,    67,     1,    21,
      22,    28,    20,    65,     1,    20,    55,    55,    22,    29,
       1,    22,    63,    29,    65,    24,    55,    19,    20,    25,
      25,    25,    65,    65,    26,    16,    35,    56,    20,    29,
      29,    26,    55,    26,     1,    26,    65,    24,    29,    24,
      24,    20,    35,    35,    34,    22,     1,    22,    65,    69,
      55,    60,    55,    55,    65,    65,    65,    65,    29,    49,
      24,    24,    29,    19,    11,    23,    29,    29,    29,     1,
      29,    64,    51,    65,    57,    55,    55,    49,    70,    23,
      24,    30,    71,    55,    61,    65,    20,    24,    55,    72,
      58,    71,    55
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    36,    38,    37,    40,    39,    39,    42,    41,    43,
      43,    43,    43,    43,    43,    44,    44,    44,    44,    45,
      45,    47,    46,    46,    46,    46,    46,    46,    46,    46,
      46,    46,    46,    46,    48,    48,    50,    51,    49,    49,
      49,    52,    52,    53,    54,    53,    55,    55,    56,    57,
      58,    55,    59,    60,    61,    55,    55,    55,    62,    63,
      64,    55,    55,    55,    55,    55,    55,    55,    55,    55,
      66,    65,    65,    67,    65,    68,    65,    65,    65,    65,
      69,    70,    65,    65,    65,    65,    65,    65,    65,    65,
      65,    65,    65,    72,    71,    71
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     0,     3,     0,    19,    18,     0,     4,     6,
       8,     8,     8,     8,     0,     2,     2,     2,     0,     1,
       1,     0,     5,     6,     6,     4,     4,     4,     6,     6,
       6,     6,     6,     0,     1,     1,     0,     0,    16,    14,
       0,     1,     0,     2,     0,     5,     4,     4,     0,     0,
       0,    13,     0,     0,     0,    11,     6,     6,     0,     0,
       0,     8,     5,     7,     7,     7,     7,     7,     7,     0,
       0,     4,     4,     0,     4,     0,     4,     4,     4,     3,
       0,     0,     9,     1,     2,     1,     2,     1,     1,     4,
       2,     3,     0,     0,     4,     0
};


#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)
#define YYEMPTY         (-2)
#define YYEOF           0

#define YYACCEPT        goto yyacceptlab
#define YYABORT         goto yyabortlab
#define YYERROR         goto yyerrorlab


#define YYRECOVERING()  (!!yyerrstatus)

#define YYBACKUP(Token, Value)                                    \
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
        YYERROR;                                                  \
      }                                                           \
  while (0)

/* Error token number */
#define YYTERROR        1
#define YYERRCODE       256



/* Enable debugging if requested.  */
#if YYDEBUG

# ifndef YYFPRINTF
#  include <stdio.h> /* INFRINGES ON USER NAME SPACE */
#  define YYFPRINTF fprintf
# endif

# define YYDPRINTF(Args)                        \
do {                                            \
  if (yydebug)                                  \
    YYFPRINTF Args;                             \
} while (0)

/* This macro is provided for backward compatibility. */
#ifndef YY_LOCATION_PRINT
# define YY_LOCATION_PRINT(File, Loc) ((void) 0)
#endif


# define YY_SYMBOL_PRINT(Title, Type, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Type, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yytype < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yytype], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo, int yytype, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yytype < YYNTOKENS ? "token" : "nterm", yytname[yytype]);

  yy_symbol_value_print (yyo, yytype, yyvaluep);
  YYFPRINTF (yyo, ")");
}

/*------------------------------------------------------------------.
| yy_stack_print -- Print the state stack from its BOTTOM up to its |
| TOP (included).                                                   |
`------------------------------------------------------------------*/

static void
yy_stack_print (yy_state_t *yybottom, yy_state_t *yytop)
{
  YYFPRINTF (stderr, "Stack now");
  for (; yybottom <= yytop; yybottom++)
    {
      int yybot = *yybottom;
      YYFPRINTF (stderr, " %d", yybot);
    }
  YYFPRINTF (stderr, "\n");
}

# define YY_STACK_PRINT(Bottom, Top)                            \
do {                                                            \
  if (yydebug)                                                  \
    yy_stack_print ((Bottom), (Top));                           \
} while (0)


/*------------------------------------------------.
| Report that the YYRULE is going to be reduced.  |
`------------------------------------------------*/

static void
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp, int yyrule)
{
  int yylno = yyrline[yyrule];
  int yynrhs = yyr2[yyrule];
  int yyi;
  YYFPRINTF (stderr, "Reducing stack by rule %d (line %d):\n",
             yyrule - 1, yylno);
  /* The symbols being reduced.  */
  for (yyi = 0; yyi < yynrhs; yyi++)
    {
      YYFPRINTF (stderr, "   $%d = ", yyi + 1);
      yy_symbol_print (stderr,
                       yystos[+yyssp[yyi + 1 - yynrhs]],
                       &yyvsp[(yyi + 1) - (yynrhs)]
                                              );
      YYFPRINTF (stderr, "\n");
    }
}

# define YY_REDUCE_PRINT(Rule)          \
do {                                    \
  if (yydebug)                          \
    yy_reduce_print (yyssp, yyvsp, Rule); \
} while (0)

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
#ifndef YYINITDEPTH
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
#   define yystrlen(S) (YY_CAST (YYPTRDIFF_T, strlen (S)))
#  else
/* Return the length of YYSTR.  */
static YYPTRDIFF_T
yystrlen (const char *yystr)
{
  YYPTRDIFF_T yylen;
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
static char *
yystpcpy (char *yydest, const char *yysrc)
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
static YYPTRDIFF_T
yytnamerr (char *yyres, const char *yystr)
{
  if (*yystr == '"')
    {
      YYPTRDIFF_T yyn = 0;
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
            else
              goto append;

          append:
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

  if (yyres)
    return yystpcpy (yyres, yystr) - yyres;
  else
    return yystrlen (yystr);
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
yysyntax_error (YYPTRDIFF_T *yymsg_alloc, char **yymsg,
                yy_state_t *yyssp, int yytoken)
{
  enum { YYERROR_VERBOSE_ARGS_MAXIMUM = 5 };
  /* Internationalized format string. */
  const char *yyformat = YY_NULLPTR;
  /* Arguments of yyformat: reported tokens (one for the "unexpected",
     one per "expected"). */
  char const *yyarg[YYERROR_VERBOSE_ARGS_MAXIMUM];
  /* Actual size of YYARG. */
  int yycount = 0;
  /* Cumulated lengths of YYARG.  */
  YYPTRDIFF_T yysize = 0;

  /* There are many possibilities here to consider:
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
      int yyn = yypact[+*yyssp];
      YYPTRDIFF_T yysize0 = yytnamerr (YY_NULLPTR, yytname[yytoken]);
      yysize = yysize0;
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
                  YYPTRDIFF_T yysize1
                    = yysize + yytnamerr (YY_NULLPTR, yytname[yyx]);
                  if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
                    yysize = yysize1;
                  else
                    return 2;
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
    default: /* Avoid compiler warnings. */
      YYCASE_(0, YY_("syntax error"));
      YYCASE_(1, YY_("syntax error, unexpected %s"));
      YYCASE_(2, YY_("syntax error, unexpected %s, expecting %s"));
      YYCASE_(3, YY_("syntax error, unexpected %s, expecting %s or %s"));
      YYCASE_(4, YY_("syntax error, unexpected %s, expecting %s or %s or %s"));
      YYCASE_(5, YY_("syntax error, unexpected %s, expecting %s or %s or %s or %s"));
# undef YYCASE_
    }

  {
    /* Don't count the "%s"s in the final size, but reserve room for
       the terminator.  */
    YYPTRDIFF_T yysize1 = yysize + (yystrlen (yyformat) - 2 * yycount) + 1;
    if (yysize <= yysize1 && yysize1 <= YYSTACK_ALLOC_MAXIMUM)
      yysize = yysize1;
    else
      return 2;
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
          ++yyp;
          ++yyformat;
        }
  }
  return 0;
}
#endif /* YYERROR_VERBOSE */

/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg, int yytype, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yytype, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yytype);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}




/* The lookahead symbol.  */
int yychar;

/* The semantic value of the lookahead symbol.  */
YYSTYPE yylval;
/* Number of syntax errors so far.  */
int yynerrs;


/*----------.
| yyparse.  |
`----------*/

int
yyparse (void)
{
    yy_state_fast_t yystate;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus;

    /* The stacks and their tools:
       'yyss': related to states.
       'yyvs': related to semantic values.

       Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* The state stack.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss;
    yy_state_t *yyssp;

    /* The semantic value stack.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs;
    YYSTYPE *yyvsp;

    YYPTRDIFF_T yystacksize;

  int yyn;
  int yyresult;
  /* Lookahead token as an internal (translated) token number.  */
  int yytoken = 0;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;

#if YYERROR_VERBOSE
  /* Buffer for error messages, and its allocated size.  */
  char yymsgbuf[128];
  char *yymsg = yymsgbuf;
  YYPTRDIFF_T yymsg_alloc = sizeof yymsgbuf;
#endif

#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  yyssp = yyss = yyssa;
  yyvsp = yyvs = yyvsa;
  yystacksize = YYINITDEPTH;

  YYDPRINTF ((stderr, "Starting parse\n"));

  yystate = 0;
  yyerrstatus = 0;
  yynerrs = 0;
  yychar = YYEMPTY; /* Cause a token to be read.  */
  goto yysetstate;


/*------------------------------------------------------------.
| yynewstate -- push a new state, which is found in yystate.  |
`------------------------------------------------------------*/
yynewstate:
  /* In all cases, when you get here, the value and location stacks
     have just been pushed.  So pushing a state here evens the stacks.  */
  yyssp++;


/*--------------------------------------------------------------------.
| yysetstate -- set current state (the top of the stack) to yystate.  |
`--------------------------------------------------------------------*/
yysetstate:
  YYDPRINTF ((stderr, "Entering state %d\n", yystate));
  YY_ASSERT (0 <= yystate && yystate < YYNSTATES);
  YY_IGNORE_USELESS_CAST_BEGIN
  *yyssp = YY_CAST (yy_state_t, yystate);
  YY_IGNORE_USELESS_CAST_END

  if (yyss + yystacksize - 1 <= yyssp)
#if !defined yyoverflow && !defined YYSTACK_RELOCATE
    goto yyexhaustedlab;
#else
    {
      /* Get the current used size of the three stacks, in elements.  */
      YYPTRDIFF_T yysize = yyssp - yyss + 1;

# if defined yyoverflow
      {
        /* Give user a chance to reallocate the stack.  Use copies of
           these so that the &'s don't force the real ones into
           memory.  */
        yy_state_t *yyss1 = yyss;
        YYSTYPE *yyvs1 = yyvs;

        /* Each stack pointer address is followed by the size of the
           data in use in that stack, in bytes.  This used to be a
           conditional around just the two extra args, but that might
           be undefined if yyoverflow is a macro.  */
        yyoverflow (YY_("memory exhausted"),
                    &yyss1, yysize * YYSIZEOF (*yyssp),
                    &yyvs1, yysize * YYSIZEOF (*yyvsp),
                    &yystacksize);
        yyss = yyss1;
        yyvs = yyvs1;
      }
# else /* defined YYSTACK_RELOCATE */
      /* Extend the stack our own way.  */
      if (YYMAXDEPTH <= yystacksize)
        goto yyexhaustedlab;
      yystacksize *= 2;
      if (YYMAXDEPTH < yystacksize)
        yystacksize = YYMAXDEPTH;

      {
        yy_state_t *yyss1 = yyss;
        union yyalloc *yyptr =
          YY_CAST (union yyalloc *,
                   YYSTACK_ALLOC (YY_CAST (YYSIZE_T, YYSTACK_BYTES (yystacksize))));
        if (! yyptr)
          goto yyexhaustedlab;
        YYSTACK_RELOCATE (yyss_alloc, yyss);
        YYSTACK_RELOCATE (yyvs_alloc, yyvs);
# undef YYSTACK_RELOCATE
        if (yyss1 != yyssa)
          YYSTACK_FREE (yyss1);
      }
# endif

      yyssp = yyss + yysize - 1;
      yyvsp = yyvs + yysize - 1;

      YY_IGNORE_USELESS_CAST_BEGIN
      YYDPRINTF ((stderr, "Stack size increased to %ld\n",
                  YY_CAST (long, yystacksize)));
      YY_IGNORE_USELESS_CAST_END

      if (yyss + yystacksize - 1 <= yyssp)
        YYABORT;
    }
#endif /* !defined yyoverflow && !defined YYSTACK_RELOCATE */

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
      yychar = yylex ();
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
  yystate = yyn;
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END

  /* Discard the shifted token.  */
  yychar = YYEMPTY;
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
| yyreduce -- do a reduction.  |
`-----------------------------*/
yyreduce:
  /* yyn is the number of a rule to reduce with.  */
  yylen = yyr2[yyn];

  /* If YYLEN is nonzero, implement the default value of the action:
     '$$ = $1'.

     Otherwise, the following line sets YYVAL to garbage.
     This behavior is undocumented and Bison
     users should not rely upon it.  Assigning to YYVAL
     unconditionally makes the parser a bit smaller, and it avoids a
     GCC warning that YYVAL may be used uninitialized.  */
  yyval = yyvsp[1-yylen];


  YY_REDUCE_PRINT (yyn);
  switch (yyn)
    {
  case 2:
#line 67 "exemple.y"
            {{init();}}
#line 1563 "exemple.tab.c"
    break;

  case 3:
#line 68 "exemple.y"
                        {{  
                           //printCodeTab();
                            verifyCalledMethods();
                            displayWarnings();
                            printSymbolTable();
                            printCodeTab();
                           //printUsedMethods();
                        }}
#line 1576 "exemple.tab.c"
    break;

  case 4:
#line 78 "exemple.y"
                                                   {  addCode("ENTREE",-1,"main");  }
#line 1582 "exemple.tab.c"
    break;

  case 5:
#line 80 "exemple.y"
            {
              addCode("SORTIE",-1,"main");
            }
#line 1590 "exemple.tab.c"
    break;

  case 6:
#line 84 "exemple.y"
                                                                                                 {yyerror ("Main method args needed"); }
#line 1596 "exemple.tab.c"
    break;

  case 7:
#line 87 "exemple.y"
                                {{
                                  addClass(nom,nbLigne);
                                  }}
#line 1604 "exemple.tab.c"
    break;

  case 10:
#line 93 "exemple.y"
                                                                 {yyerror ("'class' expected"); }
#line 1610 "exemple.tab.c"
    break;

  case 11:
#line 95 "exemple.y"
                                                                 {yyerror ("class name expected"); }
#line 1616 "exemple.tab.c"
    break;

  case 12:
#line 97 "exemple.y"
                                                                 {yyerror ("'{' expected"); }
#line 1622 "exemple.tab.c"
    break;

  case 13:
#line 99 "exemple.y"
                                                           {yyerror ("'}' expected"); }
#line 1628 "exemple.tab.c"
    break;

  case 16:
#line 103 "exemple.y"
                              {yyerror ("'extends' expected"); }
#line 1634 "exemple.tab.c"
    break;

  case 17:
#line 104 "exemple.y"
                              {yyerror ("invalid Parent class name "); }
#line 1640 "exemple.tab.c"
    break;

  case 21:
#line 109 "exemple.y"
                                                      {{
  
                  addVariable(nom,nbLigne,0);
                  }}
#line 1649 "exemple.tab.c"
    break;

  case 25:
#line 115 "exemple.y"
                                                            {yyerror ("invalid type declaration "); }
#line 1655 "exemple.tab.c"
    break;

  case 26:
#line 116 "exemple.y"
                                                                 {yyerror ("invalid identifier declaration "); }
#line 1661 "exemple.tab.c"
    break;

  case 27:
#line 117 "exemple.y"
                                                                  {yyerror (" ';' expected "); }
#line 1667 "exemple.tab.c"
    break;

  case 28:
#line 118 "exemple.y"
                                                                                           {yyerror ("invalid type declaration "); }
#line 1673 "exemple.tab.c"
    break;

  case 29:
#line 119 "exemple.y"
                                                                                                {yyerror ("invalid identifier declaration "); }
#line 1679 "exemple.tab.c"
    break;

  case 30:
#line 120 "exemple.y"
                                                                                              {yyerror ("'=' expected "); }
#line 1685 "exemple.tab.c"
    break;

  case 31:
#line 121 "exemple.y"
                                                                                        {yyerror ("invalid identifier affectation "); }
#line 1691 "exemple.tab.c"
    break;

  case 32:
#line 122 "exemple.y"
                                                                                                 {yyerror ("';' expected "); }
#line 1697 "exemple.tab.c"
    break;

  case 36:
#line 127 "exemple.y"
                    {{
                        codeTabInt[calledMethodIndex].operand = nbCodes;
                        strcpy(methodName,nom);
                        addCode("ENTREE",-1,methodName);
                    }}
#line 1707 "exemple.tab.c"
    break;

  case 37:
#line 133 "exemple.y"
                     {
                      addCode("SORTIE",-1,methodName);
                      addCode("RETOUR",backToMainIndex,"");
                     }
#line 1716 "exemple.tab.c"
    break;

  case 39:
#line 141 "exemple.y"
                    {yyerror ("Missing return type"); }
#line 1722 "exemple.tab.c"
    break;

  case 43:
#line 151 "exemple.y"
                    {{
                    
                          char aux [50];
                          strcpy(aux,nom);
                          mehtodArgs[nbArgs]=(char*)malloc(50*sizeof(char));
                          memcpy(mehtodArgs[nbArgs],aux,strlen(aux)+1);
                          nbArgs ++;
                          addMethod(methodName,mehtodArgs,nbArgs,nbLigne);
                          nbArgs=0;
                    
                    }}
#line 1738 "exemple.tab.c"
    break;

  case 44:
#line 163 "exemple.y"
                    {{
                          char aux [50];
                          strcpy(aux,nom);
                          mehtodArgs[nbArgs]=(char*)malloc(50*sizeof(char));
                          memcpy(mehtodArgs[nbArgs],aux,strlen(aux)+1);
                          nbArgs ++;
                    }}
#line 1750 "exemple.tab.c"
    break;

  case 48:
#line 177 "exemple.y"
            {
              addOperator(operSymbol);
              addCode("SIFAUX",9999,"");
              codeTabIndex=nbCodes-1;
            }
#line 1760 "exemple.tab.c"
    break;

  case 49:
#line 183 "exemple.y"
              {
              addCode("SAUT",3333,"");
              codeTabInt[codeTabIndex].operand=nbCodes;
              codeTabIndex=nbCodes-1;
              }
#line 1770 "exemple.tab.c"
    break;

  case 50:
#line 188 "exemple.y"
                                                {
              codeTabInt[codeTabIndex].operand=nbCodes;
               }
#line 1778 "exemple.tab.c"
    break;

  case 52:
#line 192 "exemple.y"
            {
              beginOfWhile=nbCodes;
            }
#line 1786 "exemple.tab.c"
    break;

  case 53:
#line 196 "exemple.y"
            {
              addOperator(operSymbol);
              addCode("TANTQUEFAUX",2000,"");
              codeTabIndex=nbCodes-1;
            }
#line 1796 "exemple.tab.c"
    break;

  case 54:
#line 202 "exemple.y"
            {
              addCode("TANTQUE",2000,"");
              codeTabInt[codeTabIndex].operand=nbCodes;
              codeTabInt[nbCodes-1].operand=beginOfWhile;
            }
#line 1806 "exemple.tab.c"
    break;

  case 57:
#line 210 "exemple.y"
            {yyerror ("Missing close parentheses"); }
#line 1812 "exemple.tab.c"
    break;

  case 58:
#line 213 "exemple.y"
                       {
              idx= findIdentifier(nom);
            }
#line 1820 "exemple.tab.c"
    break;

  case 59:
#line 215 "exemple.y"
                           {{
            // printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsInitialisated(nom);
            }}
#line 1830 "exemple.tab.c"
    break;

  case 60:
#line 220 "exemple.y"
            { 
              if (!strcmp(operSymbol,"*")){
                addCode("MUL",-1,"");                
              }
              else if (!strcmp(operSymbol,"+")){
                addCode("ADD",-1,""); 
              }
              else if (!strcmp(operSymbol,"-")){
                addCode("SUB",-1,""); 

              }
              addCode("STORE ",idx,"");
            }
#line 1848 "exemple.tab.c"
    break;

  case 62:
#line 234 "exemple.y"
                                                               {yyerror ("Missing affectation"); }
#line 1854 "exemple.tab.c"
    break;

  case 64:
#line 236 "exemple.y"
                                                                                                     {yyerror ("invalid expression"); }
#line 1860 "exemple.tab.c"
    break;

  case 65:
#line 237 "exemple.y"
                                                                                             {yyerror ("'[' expected"); }
#line 1866 "exemple.tab.c"
    break;

  case 66:
#line 238 "exemple.y"
                                                                                            {yyerror ("']' expected"); }
#line 1872 "exemple.tab.c"
    break;

  case 67:
#line 239 "exemple.y"
                                                                                                    {yyerror ("'=' expected"); }
#line 1878 "exemple.tab.c"
    break;

  case 68:
#line 240 "exemple.y"
                                                                                                      {yyerror ("';' expected"); }
#line 1884 "exemple.tab.c"
    break;

  case 70:
#line 242 "exemple.y"
                         {{
            // printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              idx =  findIdentifier(nom);
              addCode("LDV",idx,"");
            }}
#line 1896 "exemple.tab.c"
    break;

  case 71:
#line 248 "exemple.y"
                                    {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              idx =  findIdentifier(nom);
              addCode("LDV",idx,"");
            }}
#line 1908 "exemple.tab.c"
    break;

  case 73:
#line 258 "exemple.y"
                         {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
              markAsUsed(nom);
              idx =  findIdentifier(nom);
              addCode("LDV",idx,"");
            }}
#line 1920 "exemple.tab.c"
    break;

  case 74:
#line 264 "exemple.y"
                                        {
              addCode("LDC",intValue,"");
            }
#line 1928 "exemple.tab.c"
    break;

  case 75:
#line 268 "exemple.y"
                            {
                addCode("LDC",intValue,"");
             }
#line 1936 "exemple.tab.c"
    break;

  case 76:
#line 270 "exemple.y"
                                    {{
             //printf("Hello world\n");
              isIdDeclared(nom,nbLigne);
               idx =  findIdentifier(nom);
              addCode("LDV",idx,"");
            }}
#line 1947 "exemple.tab.c"
    break;

  case 77:
#line 277 "exemple.y"
                                                             {yyerror ("'[' expected"); }
#line 1953 "exemple.tab.c"
    break;

  case 78:
#line 278 "exemple.y"
                                                            {yyerror ("']' expected"); }
#line 1959 "exemple.tab.c"
    break;

  case 80:
#line 280 "exemple.y"
                                       {{ 
               saveMethod(nom,nbLigne);
              calledMethodIndex=nbCodes;
              strcpy(calledMethodName,nom);
              addCode("APPEL",11111,"");
              backToMainIndex=nbCodes;
             }}
#line 1971 "exemple.tab.c"
    break;

  case 81:
#line 286 "exemple.y"
                                          {{nbCalledArgs++;}}
#line 1977 "exemple.tab.c"
    break;

  case 82:
#line 286 "exemple.y"
                                                                                                 {{
                                          //printf("Number of args: %d\n",nbCalledArgs);
                                          usedMethods[nbUsedMethods-1].nbArgs=nbCalledArgs;
                                          nbCalledArgs=0;
                                          }}
#line 1987 "exemple.tab.c"
    break;

  case 83:
#line 292 "exemple.y"
              {
                idx= findIdentifier(nom);
                addCode("LDC",intValue,"");
              }
#line 1996 "exemple.tab.c"
    break;

  case 84:
#line 297 "exemple.y"
                                  {yyerror ("';' expected"); }
#line 2002 "exemple.tab.c"
    break;

  case 86:
#line 299 "exemple.y"
                                  {yyerror ("';' expected"); }
#line 2008 "exemple.tab.c"
    break;

  case 87:
#line 301 "exemple.y"
              {
                idx= findIdentifier(nom);
                addCode("LDV",idx,"");
              }
#line 2017 "exemple.tab.c"
    break;

  case 93:
#line 311 "exemple.y"
                                    {{nbCalledArgs++;}}
#line 2023 "exemple.tab.c"
    break;


#line 2027 "exemple.tab.c"

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

  /* Now 'shift' the result of the reduction.  Determine what state
     that goes to, based on the state we popped back to and the rule
     number reduced by.  */
  {
    const int yylhs = yyr1[yyn] - YYNTOKENS;
    const int yyi = yypgoto[yylhs] + *yyssp;
    yystate = (0 <= yyi && yyi <= YYLAST && yycheck[yyi] == *yyssp
               ? yytable[yyi]
               : yydefgoto[yylhs]);
  }

  goto yynewstate;


/*--------------------------------------.
| yyerrlab -- here on detecting error.  |
`--------------------------------------*/
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
            yymsg = YY_CAST (char *, YYSTACK_ALLOC (YY_CAST (YYSIZE_T, yymsg_alloc)));
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
                      yytoken, &yylval);
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
  /* Pacify compilers when the user code never invokes YYERROR and the
     label yyerrorlab therefore never appears in user code.  */
  if (0)
    YYERROR;

  /* Do not reclaim the symbols of the rule whose action triggered
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
  yyerrstatus = 3;      /* Each real token shifted decrements this.  */

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


      yydestruct ("Error: popping",
                  yystos[yystate], yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


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


/*-----------------------------------------------------.
| yyreturn -- parsing is finished, return the result.  |
`-----------------------------------------------------*/
yyreturn:
  if (yychar != YYEMPTY)
    {
      /* Make sure we have latest lookahead translation.  See comments at
         user semantic actions for why this is necessary.  */
      yytoken = YYTRANSLATE (yychar);
      yydestruct ("Cleanup: discarding lookahead",
                  yytoken, &yylval);
    }
  /* Do not reclaim the symbols of the rule whose action triggered
     this YYABORT or YYACCEPT.  */
  YYPOPSTACK (yylen);
  YY_STACK_PRINT (yyss, yyssp);
  while (yyssp != yyss)
    {
      yydestruct ("Cleanup: popping",
                  yystos[+*yyssp], yyvsp);
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
  return yyresult;
}
#line 314 "exemple.y"


int yyerror(char const *msg) {
	err = 1;
	if(msg == "syntax error")
	  {
     fprintf(stderr, "\nerreur ligne %d :", nbLigne );
    }
  else
	{
  fprintf(stderr, msg);
  exit(0);
  }
	return 0;
}

extern FILE *yyin;

int main()
{
 yyparse();
 return 1;
}
int yywrap()
{
//     if(err==0)
  //   printf("Code compiled successfully\n");

	return(1);
}
  
     

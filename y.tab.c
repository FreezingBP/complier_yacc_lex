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
#line 1 "lexer.y"

#include<stdio.h>
#include<stdlib.h>
#include"lex.yy.c"
#include "SymbolTable.h"
struct symbolTable table;


#line 79 "y.tab.c"

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
#ifndef YY_YY_Y_TAB_H_INCLUDED
# define YY_YY_Y_TAB_H_INCLUDED
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
    BCOMMENT = 258,
    ECOMMENT = 259,
    IF = 260,
    ELSE = 261,
    INT = 262,
    RETURN = 263,
    VOID = 264,
    WHILE = 265,
    PLUS = 266,
    MINUS = 267,
    MULTIPLY = 268,
    DIVIDE = 269,
    LESS_THAN = 270,
    LESS_OR_EQUAL = 271,
    GREATER_THAN = 272,
    GREATER_OR_EQUAL = 273,
    EQUALS = 274,
    ASSIGNMENT = 275,
    NOT_EQUALS = 276,
    EOL = 277,
    COMMA = 278,
    LEFT_PARANTHESIS = 279,
    RIGHT_PARANTHESIS = 280,
    LEFT_BRACKET = 281,
    RIGHT_BRACKET = 282,
    LEFT_SQR_BRACKET = 283,
    RIGHT_SQR_BRACKET = 284,
    DECLARE = 285,
    VAR = 286,
    BOOL = 287,
    CHAR = 288,
    STRING = 289,
    INT_P = 290,
    CHAR_P = 291,
    REAL_P = 292,
    FUNC = 293,
    PROC = 294,
    NULL_P = 295,
    LOGICAL_P = 296,
    AND = 297,
    POWER = 298,
    NOT = 299,
    OR = 300,
    LENGTH = 301,
    REAL_VALUE = 302,
    REAL = 303,
    LOGICAL_AND = 304,
    ADDRESS = 305,
    NL = 306,
    SYMPOL = 307,
    STRINGVALUE = 308,
    ID = 309,
    FUNCID = 310,
    INT_VALUE = 311,
    BOOL_VALUE = 312,
    NUM = 313
  };
#endif
/* Tokens.  */
#define BCOMMENT 258
#define ECOMMENT 259
#define IF 260
#define ELSE 261
#define INT 262
#define RETURN 263
#define VOID 264
#define WHILE 265
#define PLUS 266
#define MINUS 267
#define MULTIPLY 268
#define DIVIDE 269
#define LESS_THAN 270
#define LESS_OR_EQUAL 271
#define GREATER_THAN 272
#define GREATER_OR_EQUAL 273
#define EQUALS 274
#define ASSIGNMENT 275
#define NOT_EQUALS 276
#define EOL 277
#define COMMA 278
#define LEFT_PARANTHESIS 279
#define RIGHT_PARANTHESIS 280
#define LEFT_BRACKET 281
#define RIGHT_BRACKET 282
#define LEFT_SQR_BRACKET 283
#define RIGHT_SQR_BRACKET 284
#define DECLARE 285
#define VAR 286
#define BOOL 287
#define CHAR 288
#define STRING 289
#define INT_P 290
#define CHAR_P 291
#define REAL_P 292
#define FUNC 293
#define PROC 294
#define NULL_P 295
#define LOGICAL_P 296
#define AND 297
#define POWER 298
#define NOT 299
#define OR 300
#define LENGTH 301
#define REAL_VALUE 302
#define REAL 303
#define LOGICAL_AND 304
#define ADDRESS 305
#define NL 306
#define SYMPOL 307
#define STRINGVALUE 308
#define ID 309
#define FUNCID 310
#define INT_VALUE 311
#define BOOL_VALUE 312
#define NUM 313

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 40 "lexer.y"

 
   char *valueToShow;
   struct node* n;

#line 253 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */



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
typedef yytype_uint8 yy_state_t;

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
#define YYFINAL  30
/* YYLAST -- Last index in YYTABLE.  */
#define YYLAST   226

/* YYNTOKENS -- Number of terminals.  */
#define YYNTOKENS  73
/* YYNNTS -- Number of nonterminals.  */
#define YYNNTS  34
/* YYNRULES -- Number of rules.  */
#define YYNRULES  94
/* YYNSTATES -- Number of states.  */
#define YYNSTATES  173

#define YYUNDEFTOK  2
#define YYMAXUTOK   313


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
       2,     2,     2,    68,     2,     2,     2,     2,     2,     2,
      50,    51,    66,    64,     2,    65,     2,    67,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
      62,    61,    63,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,    71,     2,    72,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,     2,     2,     2,     2,     2,     2,     2,
       2,     2,     2,    69,     2,    70,     2,     2,     2,     2,
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
      35,    36,    37,    38,    39,    40,    41,    42,    43,    44,
      45,    46,    47,    48,    49,    52,    53,    54,    55,    56,
      57,    58,    59,    60
};

#if YYDEBUG
  /* YYRLINE[YYN] -- Source line where rule number YYN was defined.  */
static const yytype_uint8 yyrline[] =
{
       0,    70,    70,    70,    72,    73,    74,    75,    76,    77,
      78,    79,    80,    81,    82,    83,    84,    85,    86,    87,
      88,    89,    90,    91,    92,    92,    93,    93,    94,    95,
      96,    96,    97,    98,    99,   100,   101,   102,   103,   104,
     105,   106,   107,   108,   109,   110,   111,   112,   113,   113,
     114,   115,   116,   117,   118,   119,   119,   119,   120,   120,
     121,   122,   123,   124,   125,   126,   127,   128,   129,   129,
     130,   130,   131,   131,   132,   132,   133,   134,   135,   136,
     136,   137,   138,   139,   140,   140,   141,   145,   146,   147,
     148,   149,   150,   151,   151
};
#endif

#if YYDEBUG || YYERROR_VERBOSE || 0
/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "$end", "error", "$undefined", "BCOMMENT", "ECOMMENT", "IF", "ELSE",
  "INT", "RETURN", "VOID", "WHILE", "PLUS", "MINUS", "MULTIPLY", "DIVIDE",
  "LESS_THAN", "LESS_OR_EQUAL", "GREATER_THAN", "GREATER_OR_EQUAL",
  "EQUALS", "ASSIGNMENT", "NOT_EQUALS", "EOL", "COMMA", "LEFT_PARANTHESIS",
  "RIGHT_PARANTHESIS", "LEFT_BRACKET", "RIGHT_BRACKET", "LEFT_SQR_BRACKET",
  "RIGHT_SQR_BRACKET", "DECLARE", "VAR", "BOOL", "CHAR", "STRING", "INT_P",
  "CHAR_P", "REAL_P", "FUNC", "PROC", "NULL_P", "LOGICAL_P", "AND",
  "POWER", "NOT", "OR", "LENGTH", "REAL_VALUE", "REAL", "LOGICAL_AND",
  "'('", "')'", "ADDRESS", "NL", "SYMPOL", "STRINGVALUE", "ID", "FUNCID",
  "INT_VALUE", "BOOL_VALUE", "NUM", "'='", "'<'", "'>'", "'+'", "'-'",
  "'*'", "'/'", "'!'", "'{'", "'}'", "'['", "']'", "$accept", "program",
  "declaration-list", "declaration", "options", "var-declaration",
  "funcall", "parvalue", "funcallpar", "data-type", "func-declaration",
  "proc-declaration", "iter-statment", "more-vars", "var-assignment",
  "more-val", "val", "opperators", "expr", "simple-expression", "relop",
  "additive-expression", "addop", "term", "mulop", "factor", "logical-op",
  "S", "ST", "ST1", "comment", "parameter_list", "return-value", "body", YY_NULLPTR
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
     285,   286,   287,   288,   289,   290,   291,   292,   293,   294,
     295,   296,   297,   298,   299,   300,   301,   302,   303,   304,
      40,    41,   305,   306,   307,   308,   309,   310,   311,   312,
     313,    61,    60,    62,    43,    45,    42,    47,    33,   123,
     125,    91,    93
};
# endif

#define YYPACT_NINF (-90)

#define yypact_value_is_default(Yyn) \
  ((Yyn) == YYPACT_NINF)

#define YYTABLE_NINF (-1)

#define yytable_value_is_error(Yyn) \
  0

  /* YYPACT[STATE-NUM] -- Index in YYTABLE of the portion describing
     STATE-NUM.  */
static const yytype_int16 yypact[] =
{
      54,   -49,    -1,     5,   -20,   -17,    11,    -2,    54,    77,
      54,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,   -90,
     -90,    80,     9,     9,    64,    39,    63,   -14,   -37,     6,
     -90,   -90,   -90,   -90,   -90,   -90,   -90,     9,   -90,   -90,
      66,    50,   124,    20,   -90,    73,    75,    43,    76,    76,
      78,    81,   -90,    94,   -90,   106,   164,   125,   -90,   -90,
     123,    99,   -90,   126,    85,   -90,   -90,     9,   -90,   -90,
     -90,   -90,   -90,   -90,   -90,   -90,     9,     9,   -90,   -90,
       9,    86,   -90,   100,    72,    64,   107,   109,   -90,   -90,
     -90,    -4,   -90,   -90,    78,   -90,   -90,   -90,   -90,    40,
     135,   -90,    54,   -90,    90,    20,   -90,    12,   -90,   -90,
     -90,   -90,    95,   -90,   -90,   -90,   -90,   147,    60,   162,
     104,   174,   133,   -90,   176,   -90,   -90,    54,   -90,   128,
     -90,   -90,   129,   140,   -90,    79,    79,    54,   -90,   179,
     196,   -90,   131,   182,   136,   137,   -90,   139,   184,    76,
      22,    54,    54,   -90,   -90,    38,   201,    54,   141,   188,
     190,   191,   144,    38,   -90,   -90,   -90,   -90,    54,   145,
      54,    54,    54
};

  /* YYDEFACT[STATE-NUM] -- Default reduction number in state STATE-NUM.
     Performed when YYTABLE does not specify something else to do.  Zero
     means the default is an error.  */
static const yytype_int8 yydefact[] =
{
       3,     0,     0,     0,     0,     0,     0,     0,     4,     0,
       2,     6,     9,    12,    10,    11,     8,    19,     7,    81,
      13,     0,     0,     0,    44,     0,     0,    49,     0,     0,
       1,    15,     5,    18,    16,    13,    86,     0,    77,    78,
       0,    59,    61,    69,    73,     0,     0,     0,    89,    89,
       0,     0,    54,    50,    51,     0,     0,     0,    26,    27,
      29,     0,    14,     0,     0,    80,    79,     0,    70,    71,
      62,    63,    64,    65,    66,    67,     0,     0,    74,    75,
       0,     0,    43,     0,     0,    44,     0,     0,    50,    53,
      52,     0,    46,    45,    49,    57,    56,    55,    22,     0,
       0,    76,     4,    58,    60,    68,    72,     0,    42,    30,
      33,    32,     0,    34,    36,    35,    31,     0,     0,     0,
       0,     0,     0,    48,    47,    28,    24,    94,    81,     0,
      84,    41,     0,     0,    20,     0,     0,     4,    23,     0,
      83,    40,     0,    88,     0,     0,    25,     0,     0,    89,
       0,     4,     4,    21,    87,     0,     0,    39,     0,     0,
       0,     0,     0,     0,    82,    92,    90,    91,     4,     0,
      38,     4,    37
};

  /* YYPGOTO[NTERM-NUM].  */
static const yytype_int16 yypgoto[] =
{
     -90,   -90,     0,    -9,   -90,   -90,   -90,   -90,   -11,   -10,
     -90,   -90,    -8,   132,   -90,   122,   -40,   -90,     3,   -90,
     177,   142,   -52,   143,   -50,   146,   -90,    -5,   -89,    69,
       2,   -46,    59,   -79
};

  /* YYDEFGOTO[NTERM-NUM].  */
static const yytype_int16 yydefgoto[] =
{
      -1,     9,   127,    11,    32,    12,    13,    60,    61,   117,
      14,    15,    16,    47,    17,    55,    56,    94,    40,    41,
      95,    42,    77,    43,    80,    44,    67,    18,    19,   129,
      20,    86,   162,   130
};

  /* YYTABLE[YYPACT[STATE-NUM]] -- What to do in state STATE-NUM.  If
     positive, shift that token.  If negative, reduce the rule whose
     number is the opposite.  If YYTABLE_NINF, syntax error.  */
static const yytype_uint8 yytable[] =
{
      10,    31,    33,    87,    96,    34,    97,    21,    29,     1,
      89,     2,    35,   128,    57,     1,     3,     2,    27,    58,
      31,    33,     3,    59,    34,     1,    45,     2,   132,    50,
     155,    35,     3,    78,    79,    37,    24,     4,    51,    25,
      63,    52,    53,     4,     5,     6,    54,   121,    28,    22,
       5,     6,    58,     4,   124,    23,    59,     1,   145,     2,
       5,     6,     7,   128,     3,    38,    83,    26,     7,    39,
     103,   156,    96,    84,    97,     8,    62,    30,     7,   109,
     122,     8,   131,    83,    36,     4,   109,    46,   125,    48,
     135,     8,     5,     6,   159,    65,    58,   160,   161,    66,
      59,    68,    69,   154,   110,   111,   112,   113,   114,   115,
       7,   110,   111,    49,   113,   114,   115,    64,    31,    33,
     116,    50,    34,     8,    81,   143,   144,   116,    92,    35,
      51,    82,    85,    52,    88,    68,    69,    90,    54,    70,
      71,    72,    73,    74,    91,    75,    99,    98,    31,    33,
     100,   157,    34,   101,   102,   107,   108,   126,   119,    35,
     120,    31,    33,    31,    33,    34,   133,    34,   170,   134,
     136,   172,    35,   137,    35,    68,    69,    78,    79,    70,
      71,    72,    73,    74,   139,    75,    93,    68,    69,    78,
      79,    70,    71,    72,    73,    74,   138,    75,   140,   141,
     142,   146,   147,   148,   149,   150,   153,   151,   152,   163,
     165,   164,   166,   167,   168,   171,   123,   118,   104,    76,
     105,   158,   169,     0,     0,     0,   106
};

static const yytype_int16 yycheck[] =
{
       0,    10,    10,    49,    56,    10,    56,    56,     8,     3,
      50,     5,    10,   102,    51,     3,    10,     5,    20,    56,
      29,    29,    10,    60,    29,     3,    23,     5,   107,    43,
       8,    29,    10,    13,    14,    26,    56,    31,    52,    56,
      37,    55,    56,    31,    38,    39,    60,    51,    50,    50,
      38,    39,    56,    31,    94,    50,    60,     3,   137,     5,
      38,    39,    56,   152,    10,    56,    23,    56,    56,    60,
      67,   150,   124,    30,   124,    69,    70,     0,    56,     7,
      91,    69,    70,    23,     4,    31,     7,    23,    99,    50,
      30,    69,    38,    39,    56,    45,    56,    59,    60,    49,
      60,    11,    12,   149,    32,    33,    34,    35,    36,    37,
      56,    32,    33,    50,    35,    36,    37,    51,   127,   127,
      48,    43,   127,    69,    51,   135,   136,    48,    22,   127,
      52,    56,    56,    55,    56,    11,    12,    56,    60,    15,
      16,    17,    18,    19,    50,    21,    23,    22,   157,   157,
      51,   151,   157,    27,    69,    69,    56,    22,    51,   157,
      51,   170,   170,   172,   172,   170,    71,   172,   168,    22,
       8,   171,   170,    69,   172,    11,    12,    13,    14,    15,
      16,    17,    18,    19,    51,    21,    22,    11,    12,    13,
      14,    15,    16,    17,    18,    19,    22,    21,    70,    70,
      60,    22,     6,    72,    22,    69,    22,    70,    69,     8,
      22,    70,    22,    22,    70,    70,    94,    85,    76,    42,
      77,   152,   163,    -1,    -1,    -1,    80
};

  /* YYSTOS[STATE-NUM] -- The (internal number of the) accessing
     symbol of state STATE-NUM.  */
static const yytype_int8 yystos[] =
{
       0,     3,     5,    10,    31,    38,    39,    56,    69,    74,
      75,    76,    78,    79,    83,    84,    85,    87,   100,   101,
     103,    56,    50,    50,    56,    56,    56,    20,    50,    75,
       0,    76,    77,    85,   100,   103,     4,    26,    56,    60,
      91,    92,    94,    96,    98,    91,    23,    86,    50,    50,
      43,    52,    55,    56,    60,    88,    89,    51,    56,    60,
      80,    81,    70,    91,    51,    45,    49,    99,    11,    12,
      15,    16,    17,    18,    19,    21,    93,    95,    13,    14,
      97,    51,    56,    23,    30,    56,   104,   104,    56,    89,
      56,    50,    22,    22,    90,    93,    95,    97,    22,    23,
      51,    27,    69,    91,    94,    96,    98,    69,    56,     7,
      32,    33,    34,    35,    36,    37,    48,    82,    86,    51,
      51,    51,    81,    88,    89,    81,    22,    75,   101,   102,
     106,    70,   106,    71,    22,    30,     8,    69,    22,    51,
      70,    70,    60,    82,    82,   106,    22,     6,    72,    22,
      69,    70,    69,    22,   104,     8,   106,    75,   102,    56,
      59,    60,   105,     8,    70,    22,    22,    22,    70,   105,
      75,    70,    75
};

  /* YYR1[YYN] -- Symbol number of symbol that rule YYN derives.  */
static const yytype_int8 yyr1[] =
{
       0,    73,    74,    74,    75,    75,    75,    75,    75,    76,
      76,    76,    76,    76,    76,    77,    77,    77,    77,    78,
      78,    78,    79,    79,    79,    79,    80,    80,    81,    81,
      82,    82,    82,    82,    82,    82,    82,    83,    83,    84,
      85,    85,    86,    86,    86,    87,    87,    88,    88,    88,
      89,    89,    89,    89,    89,    90,    90,    90,    91,    91,
      92,    92,    93,    93,    93,    93,    93,    93,    94,    94,
      95,    95,    96,    96,    97,    97,    98,    98,    98,    99,
      99,   100,   101,   101,   102,   102,   103,   104,   104,   104,
     105,   105,   105,   106,   106
};

  /* YYR2[YYN] -- Number of symbols on the right hand side of rule YYN.  */
static const yytype_int8 yyr2[] =
{
       0,     2,     1,     0,     0,     2,     1,     1,     1,     1,
       1,     1,     1,     1,     3,     1,     1,     1,     1,     1,
       6,     9,     4,     6,     5,     7,     1,     1,     3,     1,
       1,     1,     1,     1,     1,     1,     1,    13,    12,     9,
       7,     6,     3,     2,     0,     4,     4,     3,     3,     0,
       1,     1,     2,     2,     1,     1,     1,     1,     3,     1,
       3,     1,     1,     1,     1,     1,     1,     1,     3,     1,
       1,     1,     3,     1,     1,     1,     3,     1,     1,     1,
       1,     1,    11,     7,     1,     1,     3,     6,     4,     0,
       2,     2,     2,     0,     1
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
#line 70 "lexer.y"
                         {   printtree((yyvsp[0].n),0);startCode((yyvsp[0].n),&table);}
#line 1571 "y.tab.c"
    break;

  case 4:
#line 72 "lexer.y"
                           {(yyval.n)=makenode("");}
#line 1577 "y.tab.c"
    break;

  case 5:
#line 73 "lexer.y"
                          {(yyval.n)=makeTree2("",(yyvsp[-1].n),(yyvsp[0].n));}
#line 1583 "y.tab.c"
    break;

  case 6:
#line 74 "lexer.y"
            {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1589 "y.tab.c"
    break;

  case 7:
#line 75 "lexer.y"
  {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1595 "y.tab.c"
    break;

  case 8:
#line 76 "lexer.y"
              {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1601 "y.tab.c"
    break;

  case 9:
#line 77 "lexer.y"
                            {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1607 "y.tab.c"
    break;

  case 10:
#line 78 "lexer.y"
                {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1613 "y.tab.c"
    break;

  case 11:
#line 79 "lexer.y"
                 {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1619 "y.tab.c"
    break;

  case 12:
#line 80 "lexer.y"
       {(yyval.n)=(yyvsp[0].n);}
#line 1625 "y.tab.c"
    break;

  case 13:
#line 81 "lexer.y"
        {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1631 "y.tab.c"
    break;

  case 14:
#line 82 "lexer.y"
                        {(yyval.n)=makeTree2("BLOCK",(yyvsp[-1].n),makenode("ENDOFBLOCK"));}
#line 1637 "y.tab.c"
    break;

  case 15:
#line 83 "lexer.y"
                     {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1643 "y.tab.c"
    break;

  case 16:
#line 84 "lexer.y"
  {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1649 "y.tab.c"
    break;

  case 17:
#line 85 "lexer.y"
         {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1655 "y.tab.c"
    break;

  case 18:
#line 86 "lexer.y"
              {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1661 "y.tab.c"
    break;

  case 19:
#line 87 "lexer.y"
                               {(yyval.n)=makeTree1("assignment",(yyvsp[0].n));}
#line 1667 "y.tab.c"
    break;

  case 20:
#line 88 "lexer.y"
                                         {node* t1=makeTree2("id's",makenode((yyvsp[-4].valueToShow)),(yyvsp[-3].n));(yyval.n)=makeTree2("vardeclare",t1,(yyvsp[-1].n));}
#line 1673 "y.tab.c"
    break;

  case 22:
#line 90 "lexer.y"
                       {(yyval.n)=makeTree1("funcCall",makenode((yyvsp[-3].valueToShow)));}
#line 1679 "y.tab.c"
    break;

  case 23:
#line 91 "lexer.y"
                            {(yyval.n)=makeTree2("FUNCCALL",makenode((yyvsp[-5].valueToShow)),makenode((yyvsp[-3].valueToShow)));}
#line 1685 "y.tab.c"
    break;

  case 24:
#line 92 "lexer.y"
                          {(yyval.n)=makeTree2("FUNCCALL",makenode((yyvsp[-4].valueToShow)),(yyvsp[-2].n));}
#line 1691 "y.tab.c"
    break;

  case 25:
#line 92 "lexer.y"
                                                                                                              {(yyval.n)=makeTree3("funcCall",makenode((yyvsp[-6].valueToShow)),makenode((yyvsp[-4].valueToShow)),(yyvsp[-2].n));}
#line 1697 "y.tab.c"
    break;

  case 26:
#line 93 "lexer.y"
             {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1703 "y.tab.c"
    break;

  case 27:
#line 93 "lexer.y"
                                    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1709 "y.tab.c"
    break;

  case 28:
#line 94 "lexer.y"
                                       {(yyval.n)=makeTree2("parameter list",(yyvsp[-2].n),(yyvsp[0].n));}
#line 1715 "y.tab.c"
    break;

  case 29:
#line 95 "lexer.y"
          {(yyval.n)=(yyvsp[0].n);}
#line 1721 "y.tab.c"
    break;

  case 30:
#line 96 "lexer.y"
              {(yyval.n)=makenode("int");}
#line 1727 "y.tab.c"
    break;

  case 31:
#line 96 "lexer.y"
                                          {(yyval.n)=makenode("real");}
#line 1733 "y.tab.c"
    break;

  case 32:
#line 97 "lexer.y"
     {(yyval.n)=makenode("char");}
#line 1739 "y.tab.c"
    break;

  case 33:
#line 98 "lexer.y"
    {(yyval.n)=makenode("bool");}
#line 1745 "y.tab.c"
    break;

  case 34:
#line 99 "lexer.y"
     {(yyval.n)=makenode("int pointer");}
#line 1751 "y.tab.c"
    break;

  case 35:
#line 100 "lexer.y"
       {(yyval.n)=makenode("real pointer");}
#line 1757 "y.tab.c"
    break;

  case 36:
#line 101 "lexer.y"
      {(yyval.n)=makenode("char pointer");}
#line 1763 "y.tab.c"
    break;

  case 37:
#line 102 "lexer.y"
                                                                                                                    { (yyval.n)=makeTree5("func",makenode((yyvsp[-11].valueToShow)),(yyvsp[-9].n),(yyvsp[-6].n),makeTree2("BODY",(yyvsp[-4].n),(yyvsp[-2].n)),(yyvsp[0].n));}
#line 1769 "y.tab.c"
    break;

  case 38:
#line 103 "lexer.y"
                                                                                              { (yyval.n)=makeTree5("func",makenode((yyvsp[-10].valueToShow)),(yyvsp[-8].n),(yyvsp[-5].n),(yyvsp[-2].n),(yyvsp[0].n));}
#line 1775 "y.tab.c"
    break;

  case 39:
#line 104 "lexer.y"
                                                                                { (yyval.n)=makeTree4("PROC",makenode((yyvsp[-7].valueToShow)),(yyvsp[-5].n),(yyvsp[-2].n),(yyvsp[0].n));}
#line 1781 "y.tab.c"
    break;

  case 40:
#line 105 "lexer.y"
                                                {(yyval.n)=makeTree2("while",(yyvsp[-4].n),(yyvsp[-1].n));}
#line 1787 "y.tab.c"
    break;

  case 42:
#line 107 "lexer.y"
                              {(yyval.n)=makeTree2("",(yyvsp[-2].n),makenode((yyvsp[0].valueToShow)));}
#line 1793 "y.tab.c"
    break;

  case 43:
#line 108 "lexer.y"
         {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1799 "y.tab.c"
    break;

  case 44:
#line 109 "lexer.y"
       {(yyval.n)=makenode("");}
#line 1805 "y.tab.c"
    break;

  case 45:
#line 110 "lexer.y"
                                       {(yyval.n)=makeTree2("=",makenode((yyvsp[-3].valueToShow)),(yyvsp[-1].n));}
#line 1811 "y.tab.c"
    break;

  case 46:
#line 111 "lexer.y"
                           {(yyval.n)=makeTree2("=",makenode((yyvsp[-3].valueToShow)),(yyvsp[-1].n));}
#line 1817 "y.tab.c"
    break;

  case 47:
#line 112 "lexer.y"
                            { node* opar=(yyvsp[-1].n); (yyval.n)=makeTree1("",makeTree2(opar->token,(yyvsp[-2].n),(yyvsp[0].n)));}
#line 1823 "y.tab.c"
    break;

  case 48:
#line 113 "lexer.y"
                          {struct node* opar1=(yyvsp[-1].n); ;(yyval.n)=makeTree2(opar1->token,(yyvsp[-2].n),(yyvsp[0].n));}
#line 1829 "y.tab.c"
    break;

  case 50:
#line 114 "lexer.y"
       {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1835 "y.tab.c"
    break;

  case 51:
#line 115 "lexer.y"
    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1841 "y.tab.c"
    break;

  case 52:
#line 116 "lexer.y"
           {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1847 "y.tab.c"
    break;

  case 54:
#line 118 "lexer.y"
            {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1853 "y.tab.c"
    break;

  case 55:
#line 119 "lexer.y"
                 {(yyval.n)=(yyvsp[0].n);}
#line 1859 "y.tab.c"
    break;

  case 56:
#line 119 "lexer.y"
                                 {(yyval.n)=(yyvsp[0].n);}
#line 1865 "y.tab.c"
    break;

  case 57:
#line 119 "lexer.y"
                                                {(yyval.n)=(yyvsp[0].n);}
#line 1871 "y.tab.c"
    break;

  case 59:
#line 120 "lexer.y"
                                                             {(yyval.n)=(yyvsp[0].n);}
#line 1877 "y.tab.c"
    break;

  case 60:
#line 121 "lexer.y"
                                                                {struct node* t=(yyvsp[-1].n);t->node1=(yyvsp[-2].n);t->node2=(yyvsp[0].n);(yyval.n)=t;}
#line 1883 "y.tab.c"
    break;

  case 62:
#line 123 "lexer.y"
                {(yyval.n)=makenode("<");}
#line 1889 "y.tab.c"
    break;

  case 63:
#line 124 "lexer.y"
             {(yyval.n)=makenode("<=");}
#line 1895 "y.tab.c"
    break;

  case 64:
#line 125 "lexer.y"
             {(yyval.n)=makenode(">");}
#line 1901 "y.tab.c"
    break;

  case 65:
#line 126 "lexer.y"
                 {(yyval.n)=makenode("=>");}
#line 1907 "y.tab.c"
    break;

  case 66:
#line 127 "lexer.y"
       {(yyval.n)=makenode("==");}
#line 1913 "y.tab.c"
    break;

  case 67:
#line 128 "lexer.y"
          {(yyval.n)=makenode("!=");}
#line 1919 "y.tab.c"
    break;

  case 69:
#line 129 "lexer.y"
                                                          {(yyval.n)=(yyvsp[0].n);}
#line 1925 "y.tab.c"
    break;

  case 70:
#line 130 "lexer.y"
           {(yyval.n)=makenode("+");}
#line 1931 "y.tab.c"
    break;

  case 71:
#line 130 "lexer.y"
                                      {(yyval.n)=makenode("-");}
#line 1937 "y.tab.c"
    break;

  case 73:
#line 131 "lexer.y"
                                {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1943 "y.tab.c"
    break;

  case 74:
#line 132 "lexer.y"
               {(yyval.n)=makenode("*");}
#line 1949 "y.tab.c"
    break;

  case 75:
#line 132 "lexer.y"
                                           {(yyval.n)=makenode("/");}
#line 1955 "y.tab.c"
    break;

  case 77:
#line 134 "lexer.y"
    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1961 "y.tab.c"
    break;

  case 78:
#line 135 "lexer.y"
      {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1967 "y.tab.c"
    break;

  case 81:
#line 137 "lexer.y"
     { (yyval.n)=(yyvsp[0].n);}
#line 1973 "y.tab.c"
    break;

  case 82:
#line 138 "lexer.y"
                                                {(yyval.n)=makeTree3("if else",(yyvsp[-8].n),(yyvsp[-5].n),(yyvsp[-1].n));}
#line 1979 "y.tab.c"
    break;

  case 83:
#line 139 "lexer.y"
                          {(yyval.n)=makeTree2("if else",(yyvsp[-4].n),makeTree1("",(yyvsp[-1].n)));}
#line 1985 "y.tab.c"
    break;

  case 84:
#line 140 "lexer.y"
         {(yyval.n)=(yyvsp[0].n);}
#line 1991 "y.tab.c"
    break;

  case 85:
#line 140 "lexer.y"
                    {(yyval.n)=(yyvsp[0].n);}
#line 1997 "y.tab.c"
    break;

  case 86:
#line 141 "lexer.y"
                              {(yyval.n)=makeTree3("comment",makenode("{"),makenode("}"),makenode((yyvsp[-1].valueToShow)));}
#line 2003 "y.tab.c"
    break;

  case 87:
#line 145 "lexer.y"
                                                                   {(yyval.n)=makeTree4("args",(yyvsp[-2].n),makenode((yyvsp[-5].valueToShow)),(yyvsp[-4].n),(yyvsp[0].n));}
#line 2009 "y.tab.c"
    break;

  case 88:
#line 146 "lexer.y"
                              {(yyval.n)=makeTree3("args",(yyvsp[0].n),makenode((yyvsp[-3].valueToShow)),(yyvsp[-2].n));}
#line 2015 "y.tab.c"
    break;

  case 89:
#line 147 "lexer.y"
           {(yyval.n)=makenode("NONE");}
#line 2021 "y.tab.c"
    break;

  case 90:
#line 148 "lexer.y"
                            {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 2027 "y.tab.c"
    break;

  case 91:
#line 149 "lexer.y"
        {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 2033 "y.tab.c"
    break;

  case 92:
#line 150 "lexer.y"
       {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 2039 "y.tab.c"
    break;

  case 93:
#line 151 "lexer.y"
              {(yyval.n)=makenode("empty");}
#line 2045 "y.tab.c"
    break;

  case 94:
#line 151 "lexer.y"
                                                        {(yyval.n)=(yyvsp[0].n);}
#line 2051 "y.tab.c"
    break;


#line 2055 "y.tab.c"

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
#line 153 "lexer.y"

int main(){
   yyparse();
   return 0;
}



node *initNodes(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
node *newnode = (node*)malloc(sizeof(node)); 
char *newstr = (char*)malloc(sizeof(token) + 1); 
strcpy(newstr,token);
newnode->node1 = node1;
newnode->node2 = node2;
newnode->node3 = node3;
newnode->node4 = node4;
newnode->node5 = node5;
newnode->node6 = node6;
newnode->token = newstr; 
return newnode; 
}
node *makenode(char *token) {
return initNodes(token,NULL,NULL,NULL,NULL,NULL,NULL);
}
node *makeTree6(char *token,node *node1,node* node2,node* node3,node* node4,node* node5,node* node6){
    return initNodes(token,node1,node2,node3,node4,node5,node6);
}
node *makeTree5(char *token,node *node1,node* node2,node* node3,node* node4,node* node5){
    return initNodes(token,node1,node2,node3,node4,node5,NULL);

}
node *makeTree4(char *token,node *node1,node* node2,node* node3,node* node4){
    return initNodes(token,node1,node2,node3,node4,NULL,NULL);

}
node *makeTree3(char *token,node *node1,node* node2,node* node3){
    return initNodes(token,node1,node2,node3,NULL,NULL,NULL);

}
node *makeTree2(char *token,node *node1,node* node2){
    return initNodes(token,node1,node2,NULL,NULL,NULL,NULL);

}
node *makeTree1(char *token,node *node1){
    return initNodes(token,node1,NULL,NULL,NULL,NULL,NULL);

}
void addChild(node *parent,node *child){
    if(parent->node1==NULL){
        parent->node1=child;
        return;
    }
    if(parent->node2==NULL){
        parent->node2=child;
        return;
    }
    if(parent->node3==NULL){
        parent->node3=child;
        return;}
    if(parent->node4==NULL){
        parent->node4=child; 
        return;
        }                      
    if(parent->node5==NULL){
        parent->node5=child;
        return;
         }   
    if(parent->node6==NULL){

        parent->node6=child;
        return;
        }
}






void printtree(node *tree, int index) {
printf("%s\n", tree->token);
printf("%*s",index,"");
 if(tree->node1)
printtree(tree->node1,index+1); 
if(tree->node2)
printtree(tree->node2,index+1); 
if(tree->node3)
printtree(tree->node3,index+1); 
if(tree->node4)
printtree(tree->node4,index+1); 
if(tree->node5)
printtree(tree->node5,index+1); 
if(tree->node6)
printtree(tree->node6,index+1); 
}

//////////////////////   stack functions ////////////////////////////////
void initStack(struct stack *s)
{                                     
 s->top=-1;
}

int empty(struct stack *s)
    {
      if(s->top == -1)
      {
      return(1);
      }
     return(0);
    }

int full(struct stack *s)
    {
     if(s->top == max-1)
     {
     return(1);
     }
     return(0);
    }

void push(struct stack *s, struct symbolTable x)
    {
    s->top = s->top+1;
    s->data[s->top]=x;
    }

struct symbolTable pop(struct stack *s)
    {
    struct symbolTable x;
    x=s->data[s->top];
    s->top=s->top-1;
    return(x);
    }

//////////////////////// symbol functions ////////////////////////////////
struct symbol initSymbol(char* id,char* type,char* kind,int isFunc,int par){
    struct symbol s ;
    s.id=id;
    s.type=type;
    s.kind=kind;s.isFunc=isFunc;s.paraNum=par;
   // printf("symbol creaded successfully !! \n");
    return s;
}
int compareSymbols(struct symbol s1,struct symbol s2){
    if(strcmp(s1.id,s2.id)!=0){
        return 0;
    }
    return 1;

}
//////////////////////  symbol table functions ////////////////
void initTable1(struct symbolTable* table){
    table->isMainExist=0;
    table->top=-1;
}

struct symbolTable  initTable(){
    struct symbolTable table;
    table.isMainExist=0;
    table.top=-1;
    return table;
        printf("table creaded successfully !!\n ");//


}

void insertSymbol(struct symbolTable* table,struct symbol s1 ){
    if(lookup(table,s1)==0){
        table->top++;
        table->entries[table->top]=s1;
        //printf("symbol add successfully !!\n");
    }
    else{
        printf("already declared !!\n");
    }


}

int lookup(struct symbolTable* table,struct symbol s1){
    for(int i=0;i<=table->top;i++){
        if(compareSymbols(table->entries[i],s1)==1){
            return 1;
        }
    }
    return 0;
}


int xx(){
    {
    
    int x;
    {
        
        x=7.0;
        return x;

    }
    return x;
    }
    return 0;
}
///////////////////////  data functions ///////////////////
/*
void  initData(struct Data* data){
    struct Data data;
    data->top=-1;
    data->countMain=0;
    return data;
        printf("data creaded successfully !! \n");

}
void addTable(struct Data* data,struct symbolTable table){
    data->top++;
    data->tables[data->top]=table;
            printf("table added successfully !!\n ");


}
*/
////////////////  work with tree //////////////////
void insertVar(struct node* tree,struct symbolTable* table){
    struct symbol s1=initSymbol(tree->node1->node1->token,tree->node2->token,"Var",0,0);
    insertSymbol(table,s1);
}
int isDeclared(char* id,struct  symbolTable* table){
    for (int i = 0; i <= table->top; i++)
        {   if(strcmp(id,table->entries[i].id)==0)
                return 1;

        }  
        return 0;   
}
struct symbol* getSymbol(char* id,struct  symbolTable* table){
    
    for (int i = 0; i <= table->top; i++)
        {   if(strcmp(id,table->entries[i].id)==0){
                return &table->entries[i];
                
        }
        }  
        return NULL;   
}

int typeCheck(char* type,struct  symbol s){
    if(strcmp(type,s.type)==0)
        return 1;

    return 0;
        
}
int isNumber(char* type){
    int len=strlen(type);
    for (int i = 0; i < len; i++){   
        if (!isdigit(type[i])) 
        return 0;
    }
    return 1;

}
int isInt(char* type){
    int len=strlen(type);
    for (int i = 0; i < len; i++){   
        if (type[i]=='.' || isdigit(type[i])==0) 
        return 0;
    }
    return 1;

}

void assignmentCheck(struct node* tree,struct symbolTable* table){
    char* id=tree->node1->node1->token;
    char* type=tree->node1->node2->token;
    struct symbol* s1=getSymbol(id,table);
   
    
      if(!isDeclared(id,table)){
    printf("error:'%s' is not declared!\n",id);
      } 
      if(strcmp(s1->type,"int")==0){
          if(!isInt(type)){
              printf("error:type dismatch!\n");
    
          }
      }
      
}         
//////// func check    ////////
void insertParams(struct node* tree,struct symbol* s1){


}

void insertFunc(struct node* tree,struct symbolTable* table){
struct symbol s1=initSymbol(tree->node1->token,tree->node2->token,"func",1,0);
        if(strcmp(s1.id,"main")==0){
            table->isMainExist++;
        }
    insertSymbol(table,s1);
    //insertParams(tree->node3,s1);

}
int mainCount(struct symbolTable* table){
    int count=0;
    
        count=table->isMainExist;
    
    return count;

}

      
//////// ///////////////// ////////

void scanTree(struct node* tree,struct symbolTable* table ){
    if(strcmp("vardeclare",tree->token)==0){
        
        insertVar(tree,table);
    }
    if(strcmp("assignment",tree->token)==0){
        assignmentCheck(tree,table);

    }
    if(strcmp("func",tree->token)==0){
       insertFunc(tree,table);

    }
    
    if(tree->node1)
        scanTree(tree->node1,table);
    if(tree->node2)
        scanTree(tree->node2,table);
    if(tree->node3)
        scanTree(tree->node3,table);
     if(tree->node4)
        scanTree(tree->node4,table);
    if(tree->node5)
        scanTree(tree->node5,table);
    if(tree->node6)
        scanTree(tree->node6,table);                   
}    
void startCode(struct node* tree,struct symbolTable* table){
   // initStack(&st);
   // initData(&data);
     initTable1(table);
    scanTree(tree,table);
    if(mainCount(table)>1){
    printf("error: function main already exist!\n");

    }
    if(mainCount(table)<1){
    printf("error: function main is not exist!\n");
    }
    
}

    





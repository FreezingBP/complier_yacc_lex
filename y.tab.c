/* A Bison parser, made by GNU Bison 3.7.  */

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

/* All symbols defined below should begin with yy or YY, to avoid
   infringing on user name space.  This should be done even for local
   variables, as they might otherwise be expanded by user macros.
   There are some unavoidable exceptions within include files to
   define necessary library symbols; they are noted "INFRINGES ON
   USER NAME SPACE" below.  */

/* Identify Bison output.  */
#define YYBISON 1

/* Bison version.  */
#define YYBISON_VERSION "3.7"

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
#include"symbol.h"


extern symbolTable table;




#line 84 "y.tab.c"

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

/* Token kinds.  */
#ifndef YYTOKENTYPE
# define YYTOKENTYPE
  enum yytokentype
  {
    YYEMPTY = -2,
    YYEOF = 0,                     /* "end of file"  */
    YYerror = 256,                 /* error  */
    YYUNDEF = 257,                 /* "invalid token"  */
    BCOMMENT = 258,                /* BCOMMENT  */
    ECOMMENT = 259,                /* ECOMMENT  */
    IF = 260,                      /* IF  */
    ELSE = 261,                    /* ELSE  */
    INT = 262,                     /* INT  */
    RETURN = 263,                  /* RETURN  */
    VOID = 264,                    /* VOID  */
    WHILE = 265,                   /* WHILE  */
    PLUS = 266,                    /* PLUS  */
    MINUS = 267,                   /* MINUS  */
    MULTIPLY = 268,                /* MULTIPLY  */
    DIVIDE = 269,                  /* DIVIDE  */
    LESS_THAN = 270,               /* LESS_THAN  */
    LESS_OR_EQUAL = 271,           /* LESS_OR_EQUAL  */
    GREATER_THAN = 272,            /* GREATER_THAN  */
    GREATER_OR_EQUAL = 273,        /* GREATER_OR_EQUAL  */
    EQUALS = 274,                  /* EQUALS  */
    ASSIGNMENT = 275,              /* ASSIGNMENT  */
    NOT_EQUALS = 276,              /* NOT_EQUALS  */
    EOL = 277,                     /* EOL  */
    COMMA = 278,                   /* COMMA  */
    LEFT_PARANTHESIS = 279,        /* LEFT_PARANTHESIS  */
    RIGHT_PARANTHESIS = 280,       /* RIGHT_PARANTHESIS  */
    LEFT_BRACKET = 281,            /* LEFT_BRACKET  */
    RIGHT_BRACKET = 282,           /* RIGHT_BRACKET  */
    LEFT_SQR_BRACKET = 283,        /* LEFT_SQR_BRACKET  */
    RIGHT_SQR_BRACKET = 284,       /* RIGHT_SQR_BRACKET  */
    DECLARE = 285,                 /* DECLARE  */
    VAR = 286,                     /* VAR  */
    BOOL = 287,                    /* BOOL  */
    CHAR = 288,                    /* CHAR  */
    STRING = 289,                  /* STRING  */
    INT_P = 290,                   /* INT_P  */
    CHAR_P = 291,                  /* CHAR_P  */
    REAL_P = 292,                  /* REAL_P  */
    FUNC = 293,                    /* FUNC  */
    PROC = 294,                    /* PROC  */
    NULL_P = 295,                  /* NULL_P  */
    LOGICAL_P = 296,               /* LOGICAL_P  */
    AND = 297,                     /* AND  */
    POWER = 298,                   /* POWER  */
    NOT = 299,                     /* NOT  */
    OR = 300,                      /* OR  */
    LENGTH = 301,                  /* LENGTH  */
    REAL_VALUE = 302,              /* REAL_VALUE  */
    REAL = 303,                    /* REAL  */
    LOGICAL_AND = 304,             /* LOGICAL_AND  */
    ADDRESS = 305,                 /* ADDRESS  */
    NL = 306,                      /* NL  */
    SYMPOL = 307,                  /* SYMPOL  */
    STRINGVALUE = 308,             /* STRINGVALUE  */
    ID = 309,                      /* ID  */
    FUNCID = 310,                  /* FUNCID  */
    INT_VALUE = 311,               /* INT_VALUE  */
    BOOL_VALUE = 312,              /* BOOL_VALUE  */
    NUM = 313                      /* NUM  */
  };
  typedef enum yytokentype yytoken_kind_t;
#endif
/* Token kinds.  */
#define YYEOF 0
#define YYerror 256
#define YYUNDEF 257
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
#line 44 "lexer.y"

 
   char *valueToShow;
   struct node* n;

#line 258 "y.tab.c"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */
/* Symbol kind.  */
enum yysymbol_kind_t
{
  YYSYMBOL_YYEMPTY = -2,
  YYSYMBOL_YYEOF = 0,                      /* "end of file"  */
  YYSYMBOL_YYerror = 1,                    /* error  */
  YYSYMBOL_YYUNDEF = 2,                    /* "invalid token"  */
  YYSYMBOL_BCOMMENT = 3,                   /* BCOMMENT  */
  YYSYMBOL_ECOMMENT = 4,                   /* ECOMMENT  */
  YYSYMBOL_IF = 5,                         /* IF  */
  YYSYMBOL_ELSE = 6,                       /* ELSE  */
  YYSYMBOL_INT = 7,                        /* INT  */
  YYSYMBOL_RETURN = 8,                     /* RETURN  */
  YYSYMBOL_VOID = 9,                       /* VOID  */
  YYSYMBOL_WHILE = 10,                     /* WHILE  */
  YYSYMBOL_PLUS = 11,                      /* PLUS  */
  YYSYMBOL_MINUS = 12,                     /* MINUS  */
  YYSYMBOL_MULTIPLY = 13,                  /* MULTIPLY  */
  YYSYMBOL_DIVIDE = 14,                    /* DIVIDE  */
  YYSYMBOL_LESS_THAN = 15,                 /* LESS_THAN  */
  YYSYMBOL_LESS_OR_EQUAL = 16,             /* LESS_OR_EQUAL  */
  YYSYMBOL_GREATER_THAN = 17,              /* GREATER_THAN  */
  YYSYMBOL_GREATER_OR_EQUAL = 18,          /* GREATER_OR_EQUAL  */
  YYSYMBOL_EQUALS = 19,                    /* EQUALS  */
  YYSYMBOL_ASSIGNMENT = 20,                /* ASSIGNMENT  */
  YYSYMBOL_NOT_EQUALS = 21,                /* NOT_EQUALS  */
  YYSYMBOL_EOL = 22,                       /* EOL  */
  YYSYMBOL_COMMA = 23,                     /* COMMA  */
  YYSYMBOL_LEFT_PARANTHESIS = 24,          /* LEFT_PARANTHESIS  */
  YYSYMBOL_RIGHT_PARANTHESIS = 25,         /* RIGHT_PARANTHESIS  */
  YYSYMBOL_LEFT_BRACKET = 26,              /* LEFT_BRACKET  */
  YYSYMBOL_RIGHT_BRACKET = 27,             /* RIGHT_BRACKET  */
  YYSYMBOL_LEFT_SQR_BRACKET = 28,          /* LEFT_SQR_BRACKET  */
  YYSYMBOL_RIGHT_SQR_BRACKET = 29,         /* RIGHT_SQR_BRACKET  */
  YYSYMBOL_DECLARE = 30,                   /* DECLARE  */
  YYSYMBOL_VAR = 31,                       /* VAR  */
  YYSYMBOL_BOOL = 32,                      /* BOOL  */
  YYSYMBOL_CHAR = 33,                      /* CHAR  */
  YYSYMBOL_STRING = 34,                    /* STRING  */
  YYSYMBOL_INT_P = 35,                     /* INT_P  */
  YYSYMBOL_CHAR_P = 36,                    /* CHAR_P  */
  YYSYMBOL_REAL_P = 37,                    /* REAL_P  */
  YYSYMBOL_FUNC = 38,                      /* FUNC  */
  YYSYMBOL_PROC = 39,                      /* PROC  */
  YYSYMBOL_NULL_P = 40,                    /* NULL_P  */
  YYSYMBOL_LOGICAL_P = 41,                 /* LOGICAL_P  */
  YYSYMBOL_AND = 42,                       /* AND  */
  YYSYMBOL_POWER = 43,                     /* POWER  */
  YYSYMBOL_NOT = 44,                       /* NOT  */
  YYSYMBOL_OR = 45,                        /* OR  */
  YYSYMBOL_LENGTH = 46,                    /* LENGTH  */
  YYSYMBOL_REAL_VALUE = 47,                /* REAL_VALUE  */
  YYSYMBOL_REAL = 48,                      /* REAL  */
  YYSYMBOL_LOGICAL_AND = 49,               /* LOGICAL_AND  */
  YYSYMBOL_50_ = 50,                       /* '('  */
  YYSYMBOL_51_ = 51,                       /* ')'  */
  YYSYMBOL_ADDRESS = 52,                   /* ADDRESS  */
  YYSYMBOL_NL = 53,                        /* NL  */
  YYSYMBOL_SYMPOL = 54,                    /* SYMPOL  */
  YYSYMBOL_STRINGVALUE = 55,               /* STRINGVALUE  */
  YYSYMBOL_ID = 56,                        /* ID  */
  YYSYMBOL_FUNCID = 57,                    /* FUNCID  */
  YYSYMBOL_INT_VALUE = 58,                 /* INT_VALUE  */
  YYSYMBOL_BOOL_VALUE = 59,                /* BOOL_VALUE  */
  YYSYMBOL_NUM = 60,                       /* NUM  */
  YYSYMBOL_61_ = 61,                       /* '='  */
  YYSYMBOL_62_ = 62,                       /* '<'  */
  YYSYMBOL_63_ = 63,                       /* '>'  */
  YYSYMBOL_64_ = 64,                       /* '+'  */
  YYSYMBOL_65_ = 65,                       /* '-'  */
  YYSYMBOL_66_ = 66,                       /* '*'  */
  YYSYMBOL_67_ = 67,                       /* '/'  */
  YYSYMBOL_68_ = 68,                       /* '!'  */
  YYSYMBOL_69_ = 69,                       /* '{'  */
  YYSYMBOL_70_ = 70,                       /* '}'  */
  YYSYMBOL_71_ = 71,                       /* '['  */
  YYSYMBOL_72_ = 72,                       /* ']'  */
  YYSYMBOL_YYACCEPT = 73,                  /* $accept  */
  YYSYMBOL_program = 74,                   /* program  */
  YYSYMBOL_75_declaration_list = 75,       /* declaration-list  */
  YYSYMBOL_declaration = 76,               /* declaration  */
  YYSYMBOL_options = 77,                   /* options  */
  YYSYMBOL_78_var_declaration = 78,        /* var-declaration  */
  YYSYMBOL_funcall = 79,                   /* funcall  */
  YYSYMBOL_parvalue = 80,                  /* parvalue  */
  YYSYMBOL_funcallpar = 81,                /* funcallpar  */
  YYSYMBOL_82_data_type = 82,              /* data-type  */
  YYSYMBOL_83_func_declaration = 83,       /* func-declaration  */
  YYSYMBOL_84_proc_declaration = 84,       /* proc-declaration  */
  YYSYMBOL_85_iter_statment = 85,          /* iter-statment  */
  YYSYMBOL_86_more_vars = 86,              /* more-vars  */
  YYSYMBOL_87_var_assignment = 87,         /* var-assignment  */
  YYSYMBOL_88_more_val = 88,               /* more-val  */
  YYSYMBOL_val = 89,                       /* val  */
  YYSYMBOL_opperators = 90,                /* opperators  */
  YYSYMBOL_expr = 91,                      /* expr  */
  YYSYMBOL_92_simple_expression = 92,      /* simple-expression  */
  YYSYMBOL_relop = 93,                     /* relop  */
  YYSYMBOL_94_additive_expression = 94,    /* additive-expression  */
  YYSYMBOL_addop = 95,                     /* addop  */
  YYSYMBOL_term = 96,                      /* term  */
  YYSYMBOL_mulop = 97,                     /* mulop  */
  YYSYMBOL_factor = 98,                    /* factor  */
  YYSYMBOL_99_logical_op = 99,             /* logical-op  */
  YYSYMBOL_S = 100,                        /* S  */
  YYSYMBOL_ST = 101,                       /* ST  */
  YYSYMBOL_ST1 = 102,                      /* ST1  */
  YYSYMBOL_comment = 103,                  /* comment  */
  YYSYMBOL_parameter_list = 104,           /* parameter_list  */
  YYSYMBOL_105_return_value = 105,         /* return-value  */
  YYSYMBOL_body = 106                      /* body  */
};
typedef enum yysymbol_kind_t yysymbol_kind_t;




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

#if !defined yyoverflow

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
#endif /* !defined yyoverflow */

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

/* YYMAXUTOK -- Last valid token kind.  */
#define YYMAXUTOK   313


/* YYTRANSLATE(TOKEN-NUM) -- Symbol number corresponding to TOKEN-NUM
   as returned by yylex, with out-of-bounds checking.  */
#define YYTRANSLATE(YYX)                                \
  (0 <= (YYX) && (YYX) <= YYMAXUTOK                     \
   ? YY_CAST (yysymbol_kind_t, yytranslate[YYX])        \
   : YYSYMBOL_YYUNDEF)

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
       0,    74,    74,    74,    76,    77,    78,    79,    80,    81,
      82,    83,    84,    85,    86,    87,    88,    89,    90,    91,
      92,    93,    94,    95,    96,    96,    97,    97,    98,    99,
     100,   100,   101,   102,   103,   104,   105,   106,   107,   108,
     109,   110,   111,   112,   113,   114,   115,   116,   117,   117,
     118,   119,   120,   121,   122,   123,   123,   123,   124,   124,
     125,   126,   127,   128,   129,   130,   131,   132,   133,   133,
     134,   134,   135,   135,   136,   136,   137,   138,   139,   140,
     140,   141,   142,   143,   144,   144,   145,   149,   150,   151,
     152,   153,   154,   155,   155
};
#endif

/** Accessing symbol of state STATE.  */
#define YY_ACCESSING_SYMBOL(State) YY_CAST (yysymbol_kind_t, yystos[State])

#if YYDEBUG || 0
/* The user-facing name of the symbol whose (internal) number is
   YYSYMBOL.  No bounds checking.  */
static const char *yysymbol_name (yysymbol_kind_t yysymbol) YY_ATTRIBUTE_UNUSED;

/* YYTNAME[SYMBOL-NUM] -- String name of the symbol SYMBOL-NUM.
   First, the terminals, then, starting at YYNTOKENS, nonterminals.  */
static const char *const yytname[] =
{
  "\"end of file\"", "error", "\"invalid token\"", "BCOMMENT", "ECOMMENT",
  "IF", "ELSE", "INT", "RETURN", "VOID", "WHILE", "PLUS", "MINUS",
  "MULTIPLY", "DIVIDE", "LESS_THAN", "LESS_OR_EQUAL", "GREATER_THAN",
  "GREATER_OR_EQUAL", "EQUALS", "ASSIGNMENT", "NOT_EQUALS", "EOL", "COMMA",
  "LEFT_PARANTHESIS", "RIGHT_PARANTHESIS", "LEFT_BRACKET", "RIGHT_BRACKET",
  "LEFT_SQR_BRACKET", "RIGHT_SQR_BRACKET", "DECLARE", "VAR", "BOOL",
  "CHAR", "STRING", "INT_P", "CHAR_P", "REAL_P", "FUNC", "PROC", "NULL_P",
  "LOGICAL_P", "AND", "POWER", "NOT", "OR", "LENGTH", "REAL_VALUE", "REAL",
  "LOGICAL_AND", "'('", "')'", "ADDRESS", "NL", "SYMPOL", "STRINGVALUE",
  "ID", "FUNCID", "INT_VALUE", "BOOL_VALUE", "NUM", "'='", "'<'", "'>'",
  "'+'", "'-'", "'*'", "'/'", "'!'", "'{'", "'}'", "'['", "']'", "$accept",
  "program", "declaration-list", "declaration", "options",
  "var-declaration", "funcall", "parvalue", "funcallpar", "data-type",
  "func-declaration", "proc-declaration", "iter-statment", "more-vars",
  "var-assignment", "more-val", "val", "opperators", "expr",
  "simple-expression", "relop", "additive-expression", "addop", "term",
  "mulop", "factor", "logical-op", "S", "ST", "ST1", "comment",
  "parameter_list", "return-value", "body", YY_NULLPTR
};

static const char *
yysymbol_name (yysymbol_kind_t yysymbol)
{
  return yytname[yysymbol];
}
#endif

#ifdef YYPRINT
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
#endif

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


enum { YYENOMEM = -2 };

#define yyerrok         (yyerrstatus = 0)
#define yyclearin       (yychar = YYEMPTY)

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

/* Backward compatibility with an undocumented macro.
   Use YYerror or YYUNDEF. */
#define YYERRCODE YYUNDEF


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
# ifndef YY_LOCATION_PRINT
#  define YY_LOCATION_PRINT(File, Loc) ((void) 0)
# endif


# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)                    \
do {                                                                      \
  if (yydebug)                                                            \
    {                                                                     \
      YYFPRINTF (stderr, "%s ", Title);                                   \
      yy_symbol_print (stderr,                                            \
                  Kind, Value); \
      YYFPRINTF (stderr, "\n");                                           \
    }                                                                     \
} while (0)


/*-----------------------------------.
| Print this symbol's value on YYO.  |
`-----------------------------------*/

static void
yy_symbol_value_print (FILE *yyo,
                       yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  FILE *yyoutput = yyo;
  YYUSE (yyoutput);
  if (!yyvaluep)
    return;
# ifdef YYPRINT
  if (yykind < YYNTOKENS)
    YYPRINT (yyo, yytoknum[yykind], *yyvaluep);
# endif
  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/*---------------------------.
| Print this symbol on YYO.  |
`---------------------------*/

static void
yy_symbol_print (FILE *yyo,
                 yysymbol_kind_t yykind, YYSTYPE const * const yyvaluep)
{
  YYFPRINTF (yyo, "%s %s (",
             yykind < YYNTOKENS ? "token" : "nterm", yysymbol_name (yykind));

  yy_symbol_value_print (yyo, yykind, yyvaluep);
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
yy_reduce_print (yy_state_t *yyssp, YYSTYPE *yyvsp,
                 int yyrule)
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
                       YY_ACCESSING_SYMBOL (+yyssp[yyi + 1 - yynrhs]),
                       &yyvsp[(yyi + 1) - (yynrhs)]);
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
# define YYDPRINTF(Args) ((void) 0)
# define YY_SYMBOL_PRINT(Title, Kind, Value, Location)
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






/*-----------------------------------------------.
| Release the memory associated to this symbol.  |
`-----------------------------------------------*/

static void
yydestruct (const char *yymsg,
            yysymbol_kind_t yykind, YYSTYPE *yyvaluep)
{
  YYUSE (yyvaluep);
  if (!yymsg)
    yymsg = "Deleting";
  YY_SYMBOL_PRINT (yymsg, yykind, yyvaluep, yylocationp);

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  YYUSE (yykind);
  YY_IGNORE_MAYBE_UNINITIALIZED_END
}


/* Lookahead token kind.  */
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
    yy_state_fast_t yystate = 0;
    /* Number of tokens to shift before error messages enabled.  */
    int yyerrstatus = 0;

    /* Refer to the stacks through separate pointers, to allow yyoverflow
       to reallocate them elsewhere.  */

    /* Their size.  */
    YYPTRDIFF_T yystacksize = YYINITDEPTH;

    /* The state stack: array, bottom, top.  */
    yy_state_t yyssa[YYINITDEPTH];
    yy_state_t *yyss = yyssa;
    yy_state_t *yyssp = yyss;

    /* The semantic value stack: array, bottom, top.  */
    YYSTYPE yyvsa[YYINITDEPTH];
    YYSTYPE *yyvs = yyvsa;
    YYSTYPE *yyvsp = yyvs;

  int yyn;
  /* The return value of yyparse.  */
  int yyresult;
  /* Lookahead symbol kind.  */
  yysymbol_kind_t yytoken = YYSYMBOL_YYEMPTY;
  /* The variables used to return semantic value and location from the
     action routines.  */
  YYSTYPE yyval;



#define YYPOPSTACK(N)   (yyvsp -= (N), yyssp -= (N))

  /* The number of symbols on the RHS of the reduced rule.
     Keep to zero when no symbol should be popped.  */
  int yylen = 0;

  YYDPRINTF ((stderr, "Starting parse\n"));

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
  YY_STACK_PRINT (yyss, yyssp);

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
#  undef YYSTACK_RELOCATE
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

  /* YYCHAR is either empty, or end-of-input, or a valid lookahead.  */
  if (yychar == YYEMPTY)
    {
      YYDPRINTF ((stderr, "Reading a token\n"));
      yychar = yylex ();
    }

  if (yychar <= YYEOF)
    {
      yychar = YYEOF;
      yytoken = YYSYMBOL_YYEOF;
      YYDPRINTF ((stderr, "Now at end of input.\n"));
    }
  else if (yychar == YYerror)
    {
      /* The scanner already issued an error message, process directly
         to error recovery.  But do not keep the error token as
         lookahead, it is too special and may lead us to an endless
         loop in error recovery. */
      yychar = YYUNDEF;
      yytoken = YYSYMBOL_YYerror;
      goto yyerrlab1;
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
  case 2: /* program: declaration-list  */
#line 74 "lexer.y"
                         {startCode((yyvsp[0].n));}
#line 1479 "y.tab.c"
    break;

  case 4: /* declaration-list: %empty  */
#line 76 "lexer.y"
                           {(yyval.n)=makenode("");}
#line 1485 "y.tab.c"
    break;

  case 5: /* declaration-list: declaration-list options  */
#line 77 "lexer.y"
                          {(yyval.n)=makeTree2("",(yyvsp[-1].n),(yyvsp[0].n));}
#line 1491 "y.tab.c"
    break;

  case 6: /* declaration-list: declaration  */
#line 78 "lexer.y"
            {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1497 "y.tab.c"
    break;

  case 7: /* declaration-list: S  */
#line 79 "lexer.y"
  {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1503 "y.tab.c"
    break;

  case 8: /* declaration-list: iter-statment  */
#line 80 "lexer.y"
              {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1509 "y.tab.c"
    break;

  case 9: /* declaration: var-declaration  */
#line 81 "lexer.y"
                            {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1515 "y.tab.c"
    break;

  case 10: /* declaration: func-declaration  */
#line 82 "lexer.y"
                {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1521 "y.tab.c"
    break;

  case 11: /* declaration: proc-declaration  */
#line 83 "lexer.y"
                 {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1527 "y.tab.c"
    break;

  case 12: /* declaration: funcall  */
#line 84 "lexer.y"
       {(yyval.n)=(yyvsp[0].n);}
#line 1533 "y.tab.c"
    break;

  case 13: /* declaration: comment  */
#line 85 "lexer.y"
        {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1539 "y.tab.c"
    break;

  case 14: /* declaration: '{' declaration-list '}'  */
#line 86 "lexer.y"
                        {(yyval.n)=makeTree2("BLOCK",(yyvsp[-1].n),makenode("ENDOFBLOCK"));}
#line 1545 "y.tab.c"
    break;

  case 15: /* options: declaration  */
#line 87 "lexer.y"
                     {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1551 "y.tab.c"
    break;

  case 16: /* options: S  */
#line 88 "lexer.y"
  {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1557 "y.tab.c"
    break;

  case 17: /* options: comment  */
#line 89 "lexer.y"
         {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1563 "y.tab.c"
    break;

  case 18: /* options: iter-statment  */
#line 90 "lexer.y"
              {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1569 "y.tab.c"
    break;

  case 19: /* var-declaration: var-assignment  */
#line 91 "lexer.y"
                               {(yyval.n)=makeTree1("var assignment",(yyvsp[0].n));}
#line 1575 "y.tab.c"
    break;

  case 20: /* var-declaration: VAR ID more-vars DECLARE data-type EOL  */
#line 92 "lexer.y"
                                         {node* t1=makeTree2("id's",makenode((yyvsp[-4].valueToShow)),(yyvsp[-3].n));node* type1 =makeTree1("type",(yyvsp[-1].n));(yyval.n)=makeTree2("vardeclare",t1,type1);}
#line 1581 "y.tab.c"
    break;

  case 22: /* funcall: ID '(' ')' EOL  */
#line 94 "lexer.y"
                       {(yyval.n)=makeTree1("funcCall",makenode((yyvsp[-3].valueToShow)));}
#line 1587 "y.tab.c"
    break;

  case 23: /* funcall: ID ASSIGNMENT ID '(' ')' EOL  */
#line 95 "lexer.y"
                            {(yyval.n)=makeTree2("FUNCCALL",makenode((yyvsp[-5].valueToShow)),makenode((yyvsp[-3].valueToShow)));}
#line 1593 "y.tab.c"
    break;

  case 24: /* funcall: ID '(' funcallpar ')' EOL  */
#line 96 "lexer.y"
                          {(yyval.n)=makeTree2("FUNCCALL",makenode((yyvsp[-4].valueToShow)),(yyvsp[-2].n));}
#line 1599 "y.tab.c"
    break;

  case 25: /* funcall: ID ASSIGNMENT ID '(' funcallpar ')' EOL  */
#line 96 "lexer.y"
                                                                                                              {(yyval.n)=makeTree3("funcCall",makenode((yyvsp[-6].valueToShow)),makenode((yyvsp[-4].valueToShow)),(yyvsp[-2].n));}
#line 1605 "y.tab.c"
    break;

  case 26: /* parvalue: ID  */
#line 97 "lexer.y"
             {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1611 "y.tab.c"
    break;

  case 27: /* parvalue: NUM  */
#line 97 "lexer.y"
                                    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1617 "y.tab.c"
    break;

  case 28: /* funcallpar: parvalue COMMA funcallpar  */
#line 98 "lexer.y"
                                       {(yyval.n)=makeTree2("parameter list",(yyvsp[-2].n),(yyvsp[0].n));}
#line 1623 "y.tab.c"
    break;

  case 29: /* funcallpar: parvalue  */
#line 99 "lexer.y"
          {(yyval.n)=(yyvsp[0].n);}
#line 1629 "y.tab.c"
    break;

  case 30: /* data-type: INT  */
#line 100 "lexer.y"
              {(yyval.n)=makenode("int");}
#line 1635 "y.tab.c"
    break;

  case 31: /* data-type: REAL  */
#line 100 "lexer.y"
                                          {(yyval.n)=makenode("real");}
#line 1641 "y.tab.c"
    break;

  case 32: /* data-type: CHAR  */
#line 101 "lexer.y"
     {(yyval.n)=makenode("char");}
#line 1647 "y.tab.c"
    break;

  case 33: /* data-type: BOOL  */
#line 102 "lexer.y"
    {(yyval.n)=makenode("bool");}
#line 1653 "y.tab.c"
    break;

  case 34: /* data-type: INT_P  */
#line 103 "lexer.y"
     {(yyval.n)=makenode("int pointer");}
#line 1659 "y.tab.c"
    break;

  case 35: /* data-type: REAL_P  */
#line 104 "lexer.y"
       {(yyval.n)=makenode("real pointer");}
#line 1665 "y.tab.c"
    break;

  case 36: /* data-type: CHAR_P  */
#line 105 "lexer.y"
      {(yyval.n)=makenode("char pointer");}
#line 1671 "y.tab.c"
    break;

  case 37: /* func-declaration: FUNC ID '(' parameter_list ')' RETURN data-type '{' body RETURN return-value '}' declaration-list  */
#line 106 "lexer.y"
                                                                                                                    { (yyval.n)=makeTree5("func",makenode((yyvsp[-11].valueToShow)),(yyvsp[-9].n),(yyvsp[-6].n),makeTree2("BODY",(yyvsp[-4].n),(yyvsp[-2].n)),(yyvsp[0].n));}
#line 1677 "y.tab.c"
    break;

  case 38: /* func-declaration: FUNC ID '(' parameter_list ')' RETURN data-type '{' RETURN return-value '}' declaration-list  */
#line 107 "lexer.y"
                                                                                              { (yyval.n)=makeTree5("func",makenode((yyvsp[-10].valueToShow)),(yyvsp[-8].n),(yyvsp[-5].n),(yyvsp[-2].n),(yyvsp[0].n));}
#line 1683 "y.tab.c"
    break;

  case 39: /* proc-declaration: PROC ID '(' parameter_list ')' '{' body '}' declaration-list  */
#line 108 "lexer.y"
                                                                                { (yyval.n)=makeTree4("PROC",makenode((yyvsp[-7].valueToShow)),(yyvsp[-5].n),(yyvsp[-2].n),(yyvsp[0].n));}
#line 1689 "y.tab.c"
    break;

  case 40: /* iter-statment: WHILE '(' expr ')' '{' body '}'  */
#line 109 "lexer.y"
                                                {(yyval.n)=makeTree2("while",(yyvsp[-4].n),(yyvsp[-1].n));}
#line 1695 "y.tab.c"
    break;

  case 42: /* more-vars: more-vars COMMA ID  */
#line 111 "lexer.y"
                              {(yyval.n)=makeTree1((yyvsp[-2].n),(yyvsp[0].valueToShow));}
#line 1701 "y.tab.c"
    break;

  case 43: /* more-vars: COMMA ID  */
#line 112 "lexer.y"
         {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1707 "y.tab.c"
    break;

  case 44: /* more-vars: %empty  */
#line 113 "lexer.y"
       {(yyval.n)=makenode("");}
#line 1713 "y.tab.c"
    break;

  case 45: /* var-assignment: ID ASSIGNMENT val EOL  */
#line 114 "lexer.y"
                                       {(yyval.n)=makeTree2("=",makenode((yyvsp[-3].valueToShow)),(yyvsp[-1].n));}
#line 1719 "y.tab.c"
    break;

  case 46: /* var-assignment: ID ASSIGNMENT more-val EOL  */
#line 115 "lexer.y"
                           {(yyval.n)=makeTree2("=",makenode((yyvsp[-3].valueToShow)),(yyvsp[-1].n));}
#line 1725 "y.tab.c"
    break;

  case 47: /* more-val: val opperators val  */
#line 116 "lexer.y"
                            {node* opar=(yyvsp[-1].n); (yyval.n)=makeTree1("",makeTree2(opar->token,(yyvsp[-2].n),(yyvsp[0].n)));}
#line 1731 "y.tab.c"
    break;

  case 48: /* more-val: val opperators more-val  */
#line 117 "lexer.y"
                          {node* opar1=(yyvsp[-1].n); ;(yyval.n)=makeTree2(opar1->token,(yyvsp[-2].n),(yyvsp[0].n));}
#line 1737 "y.tab.c"
    break;

  case 50: /* val: ID  */
#line 118 "lexer.y"
       {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1743 "y.tab.c"
    break;

  case 51: /* val: NUM  */
#line 119 "lexer.y"
    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1749 "y.tab.c"
    break;

  case 52: /* val: ADDRESS ID  */
#line 120 "lexer.y"
           {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1755 "y.tab.c"
    break;

  case 54: /* val: STRINGVALUE  */
#line 122 "lexer.y"
            {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1761 "y.tab.c"
    break;

  case 55: /* opperators: mulop  */
#line 123 "lexer.y"
                 {(yyval.n)=(yyvsp[0].n);}
#line 1767 "y.tab.c"
    break;

  case 56: /* opperators: addop  */
#line 123 "lexer.y"
                                 {(yyval.n)=(yyvsp[0].n);}
#line 1773 "y.tab.c"
    break;

  case 57: /* opperators: relop  */
#line 123 "lexer.y"
                                                {(yyval.n)=(yyvsp[0].n);}
#line 1779 "y.tab.c"
    break;

  case 59: /* expr: simple-expression  */
#line 124 "lexer.y"
                                                             {(yyval.n)=(yyvsp[0].n);}
#line 1785 "y.tab.c"
    break;

  case 60: /* simple-expression: additive-expression relop additive-expression  */
#line 125 "lexer.y"
                                                                {node* t=(yyvsp[-1].n);t->node1=(yyvsp[-2].n);t->node2=(yyvsp[0].n);(yyval.n)=t;}
#line 1791 "y.tab.c"
    break;

  case 62: /* relop: LESS_THAN  */
#line 127 "lexer.y"
                {(yyval.n)=makenode("<");}
#line 1797 "y.tab.c"
    break;

  case 63: /* relop: LESS_OR_EQUAL  */
#line 128 "lexer.y"
             {(yyval.n)=makenode("<=");}
#line 1803 "y.tab.c"
    break;

  case 64: /* relop: GREATER_THAN  */
#line 129 "lexer.y"
             {(yyval.n)=makenode(">");}
#line 1809 "y.tab.c"
    break;

  case 65: /* relop: GREATER_OR_EQUAL  */
#line 130 "lexer.y"
                 {(yyval.n)=makenode("=>");}
#line 1815 "y.tab.c"
    break;

  case 66: /* relop: EQUALS  */
#line 131 "lexer.y"
       {(yyval.n)=makenode("==");}
#line 1821 "y.tab.c"
    break;

  case 67: /* relop: NOT_EQUALS  */
#line 132 "lexer.y"
          {(yyval.n)=makenode("!=");}
#line 1827 "y.tab.c"
    break;

  case 69: /* additive-expression: term  */
#line 133 "lexer.y"
                                                          {(yyval.n)=(yyvsp[0].n);}
#line 1833 "y.tab.c"
    break;

  case 70: /* addop: PLUS  */
#line 134 "lexer.y"
           {(yyval.n)=makenode("+");}
#line 1839 "y.tab.c"
    break;

  case 71: /* addop: MINUS  */
#line 134 "lexer.y"
                                      {(yyval.n)=makenode("-");}
#line 1845 "y.tab.c"
    break;

  case 73: /* term: factor  */
#line 135 "lexer.y"
                                {(yyval.n)=makeTree1("",(yyvsp[0].n));}
#line 1851 "y.tab.c"
    break;

  case 74: /* mulop: MULTIPLY  */
#line 136 "lexer.y"
               {(yyval.n)=makenode("*");}
#line 1857 "y.tab.c"
    break;

  case 75: /* mulop: DIVIDE  */
#line 136 "lexer.y"
                                           {(yyval.n)=makenode("/");}
#line 1863 "y.tab.c"
    break;

  case 77: /* factor: ID  */
#line 138 "lexer.y"
    {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1869 "y.tab.c"
    break;

  case 78: /* factor: NUM  */
#line 139 "lexer.y"
      {(yyval.n)=makenode((yyvsp[0].valueToShow));}
#line 1875 "y.tab.c"
    break;

  case 81: /* S: ST  */
#line 141 "lexer.y"
     { (yyval.n)=(yyvsp[0].n);}
#line 1881 "y.tab.c"
    break;

  case 82: /* ST: IF '(' expr ')' '{' ST1 '}' ELSE '{' ST1 '}'  */
#line 142 "lexer.y"
                                                {(yyval.n)=makeTree3("if else",(yyvsp[-8].n),(yyvsp[-5].n),(yyvsp[-1].n));}
#line 1887 "y.tab.c"
    break;

  case 83: /* ST: IF '(' expr ')' '{' ST1 '}'  */
#line 143 "lexer.y"
                          {(yyval.n)=makeTree2("if else",(yyvsp[-4].n),makeTree1("",(yyvsp[-1].n)));}
#line 1893 "y.tab.c"
    break;

  case 84: /* ST1: body  */
#line 144 "lexer.y"
         {(yyval.n)=(yyvsp[0].n);}
#line 1899 "y.tab.c"
    break;

  case 85: /* ST1: ST  */
#line 144 "lexer.y"
                    {(yyval.n)=(yyvsp[0].n);}
#line 1905 "y.tab.c"
    break;

  case 86: /* comment: BCOMMENT ID ECOMMENT  */
#line 145 "lexer.y"
                              {(yyval.n)=makeTree3("comment",makenode("{"),makenode("}"),makenode((yyvsp[-1].valueToShow)));}
#line 1911 "y.tab.c"
    break;

  case 87: /* parameter_list: ID more-vars DECLARE data-type EOL parameter_list  */
#line 149 "lexer.y"
                                                                   {(yyval.n)=makeTree4("args",(yyvsp[-2].n),makenode((yyvsp[-5].valueToShow)),(yyvsp[-4].n),(yyvsp[0].n));}
#line 1917 "y.tab.c"
    break;

  case 88: /* parameter_list: ID more-vars DECLARE data-type  */
#line 150 "lexer.y"
                              {(yyval.n)=makeTree3("args",(yyvsp[0].n),makenode((yyvsp[-3].valueToShow)),(yyvsp[-2].n));}
#line 1923 "y.tab.c"
    break;

  case 89: /* parameter_list: %empty  */
#line 151 "lexer.y"
           {(yyval.n)=makenode("NONE");}
#line 1929 "y.tab.c"
    break;

  case 90: /* return-value: BOOL_VALUE EOL  */
#line 152 "lexer.y"
                            {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 1935 "y.tab.c"
    break;

  case 91: /* return-value: NUM EOL  */
#line 153 "lexer.y"
        {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 1941 "y.tab.c"
    break;

  case 92: /* return-value: ID EOL  */
#line 154 "lexer.y"
       {(yyval.n)=makeTree1("return",makenode((yyvsp[-1].valueToShow)));}
#line 1947 "y.tab.c"
    break;

  case 93: /* body: %empty  */
#line 155 "lexer.y"
              {(yyval.n)=makenode("empty");}
#line 1953 "y.tab.c"
    break;

  case 94: /* body: declaration-list  */
#line 155 "lexer.y"
                                                        {(yyval.n)=(yyvsp[0].n);}
#line 1959 "y.tab.c"
    break;


#line 1963 "y.tab.c"

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
  YY_SYMBOL_PRINT ("-> $$ =", YY_CAST (yysymbol_kind_t, yyr1[yyn]), &yyval, &yyloc);

  YYPOPSTACK (yylen);
  yylen = 0;

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
  yytoken = yychar == YYEMPTY ? YYSYMBOL_YYEMPTY : YYTRANSLATE (yychar);
  /* If not already recovering from an error, report this error.  */
  if (!yyerrstatus)
    {
      ++yynerrs;
      yyerror (YY_("syntax error"));
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

  /* Pop stack until we find a state that shifts the error token.  */
  for (;;)
    {
      yyn = yypact[yystate];
      if (!yypact_value_is_default (yyn))
        {
          yyn += YYSYMBOL_YYerror;
          if (0 <= yyn && yyn <= YYLAST && yycheck[yyn] == YYSYMBOL_YYerror)
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
                  YY_ACCESSING_SYMBOL (yystate), yyvsp);
      YYPOPSTACK (1);
      yystate = *yyssp;
      YY_STACK_PRINT (yyss, yyssp);
    }

  YY_IGNORE_MAYBE_UNINITIALIZED_BEGIN
  *++yyvsp = yylval;
  YY_IGNORE_MAYBE_UNINITIALIZED_END


  /* Shift the error token.  */
  YY_SYMBOL_PRINT ("Shifting", YY_ACCESSING_SYMBOL (yyn), yyvsp, yylsp);

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


#if !defined yyoverflow
/*-------------------------------------------------.
| yyexhaustedlab -- memory exhaustion comes here.  |
`-------------------------------------------------*/
yyexhaustedlab:
  yyerror (YY_("memory exhausted"));
  yyresult = 2;
  goto yyreturn;
#endif


/*-------------------------------------------------------.
| yyreturn -- parsing is finished, clean up and return.  |
`-------------------------------------------------------*/
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
                  YY_ACCESSING_SYMBOL (+*yyssp), yyvsp);
      YYPOPSTACK (1);
    }
#ifndef yyoverflow
  if (yyss != yyssa)
    YYSTACK_FREE (yyss);
#endif

  return yyresult;
}

#line 157 "lexer.y"

int main(){
  return yyparse();
}



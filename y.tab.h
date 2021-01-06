/* A Bison parser, made by GNU Bison 3.7.  */

/* Bison interface for Yacc-like parsers in C

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

/* DO NOT RELY ON FEATURES THAT ARE NOT DOCUMENTED in the manual,
   especially those whose name start with YY_ or yy_.  They are
   private implementation details that can be changed or removed.  */

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
#line 40 "lexer.y"

 
   char *valueToShow;
   struct node* n;

#line 188 "y.tab.h"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif


extern YYSTYPE yylval;

int yyparse (void);

#endif /* !YY_YY_Y_TAB_H_INCLUDED  */

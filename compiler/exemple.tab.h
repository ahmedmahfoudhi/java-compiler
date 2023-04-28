/* A Bison parser, made by GNU Bison 3.5.1.  */

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

/* Undocumented macros, especially those whose name start with YY_,
   are private implementation details.  Do not rely on them.  */

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
    IDENTIFIER = 258,
    TYPE_INT = 259,
    TYPE_BOOLEAN = 260,
    TYPE_STRING = 261,
    BOOLEAN_LITERAL = 262,
    INTEGER_LITERAL = 263,
    STRING_LITERAL = 264,
    KEYWORD_CLASS = 265,
    KEYWORD_PUBLIC = 266,
    KEYWORD_STATIC = 267,
    KEYWORD_VOID = 268,
    KEYWORD_MAIN = 269,
    KEYWORD_EXTENDS = 270,
    KEYWORD_RETURN = 271,
    KEYWORD_IF = 272,
    KEYWORD_ELSE = 273,
    KEYWORD_WHILE = 274,
    KEYWORD_PRINT = 275,
    KEYWORD_NEW = 276,
    KEYWORD_THIS = 277,
    PARENTHESIS_OPEN = 278,
    PARENTHESIS_CLOSE = 279,
    BRACKET_OPEN = 280,
    BRACKET_CLOSE = 281,
    CURLY_BRACKET_OPEN = 282,
    CURLY_BRACKET_CLOSE = 283,
    OP_AFFECT = 284,
    OP_ADD = 285,
    OP_SUBSTRACT = 286,
    OP_MULTIPLY = 287,
    OP_NOT = 288,
    LOG_AND = 289,
    LOG_OR = 290,
    LOG_LESS = 291,
    LOG_EQLESS = 292,
    LOG_MORE = 293,
    LOG_EQMORE = 294,
    LOG_EQ = 295,
    LOG_DIF = 296,
    SEMI_COLON = 297,
    DOT = 298,
    COMMA = 299
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

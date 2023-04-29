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

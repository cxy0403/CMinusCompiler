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

#ifndef YY_YY_PARSER_HPP_INCLUDED
# define YY_YY_PARSER_HPP_INCLUDED
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
    BREAK = 258,
    CONTINUE = 259,
    CHAR = 260,
    DOUBLE = 261,
    FLOAT = 262,
    INT = 263,
    BOOL = 264,
    CHAR_LIT = 265,
    INT_LIT = 266,
    FLOAT_LIT = 267,
    STRING_LIT = 268,
    BOOL_LIT = 269,
    ELSE = 270,
    IF = 271,
    RETURN = 272,
    WHILE = 273,
    IDENTIFIER = 274,
    RIGHT_SHIFT = 275,
    LEFT_SHIFT = 276,
    LESS_THAN = 277,
    LESS_THAN_OR_EQUAL_TO = 278,
    GREATER_THAN = 279,
    GREATER_THAN_OR_EQUAL_TO = 280,
    EQUAL_TO = 281,
    NOT_EQUAL_TO = 282,
    INCREMENT = 283,
    DECREMENT = 284,
    LOGICAL_AND = 285,
    LOGICAL_OR = 286,
    NOT = 287,
    ASSIGNMENT = 288,
    SEMICOLON = 289,
    COMMA = 290,
    COLON = 291,
    PLUS = 292,
    MINUS = 293,
    MULTIPLY = 294,
    DIVIDE = 295,
    QUESTION_MARK = 296,
    LEFT_PAREN = 297,
    RIGHT_PAREN = 298,
    LEFT_BRACKET = 299,
    RIGHT_BRACKET = 300,
    LEFT_BRACE = 301,
    RIGHT_BRACE = 302,
    CR = 303,
    LF = 304,
    LOWER_THAN_ELSE = 305,
    LOW_PRIORITY = 306
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"
 
    struct Node* node;
    

#line 114 "parser.hpp"

};
typedef union YYSTYPE YYSTYPE;
# define YYSTYPE_IS_TRIVIAL 1
# define YYSTYPE_IS_DECLARED 1
#endif

/* Location type.  */
#if ! defined YYLTYPE && ! defined YYLTYPE_IS_DECLARED
typedef struct YYLTYPE YYLTYPE;
struct YYLTYPE
{
  int first_line;
  int first_column;
  int last_line;
  int last_column;
};
# define YYLTYPE_IS_DECLARED 1
# define YYLTYPE_IS_TRIVIAL 1
#endif


extern YYSTYPE yylval;
extern YYLTYPE yylloc;
int yyparse (void);

#endif /* !YY_YY_PARSER_HPP_INCLUDED  */

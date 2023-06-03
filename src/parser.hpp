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
    AUTO = 258,
    BREAK = 259,
    CASE = 260,
    CHAR = 261,
    DOUBLE = 262,
    FLOAT = 263,
    INT = 264,
    BOOL = 265,
    CHAR_LIT = 266,
    INT_LIT = 267,
    FLOAT_LIT = 268,
    STRING_LIT = 269,
    CONST = 270,
    CONTINUE = 271,
    DEFAULT = 272,
    DO = 273,
    ELSE = 274,
    ENUM = 275,
    EXTERN = 276,
    FOR = 277,
    GOTO = 278,
    IF = 279,
    LONG = 280,
    SHORT = 281,
    REGISTER = 282,
    RETURN = 283,
    SIGNED = 284,
    UNSIGNED = 285,
    SIZEOF = 286,
    STATIC = 287,
    STRUCT = 288,
    SWITCH = 289,
    TYPEDEF = 290,
    UNION = 291,
    VOID = 292,
    VOLATILE = 293,
    WHILE = 294,
    IDENTIFIER = 295,
    RIGHT_SHIFT = 296,
    LEFT_SHIFT = 297,
    LESS_THAN = 298,
    LESS_THAN_OR_EQUAL_TO = 299,
    GREATER_THAN = 300,
    GREATER_THAN_OR_EQUAL_TO = 301,
    EQUAL_TO = 302,
    NOT_EQUAL_TO = 303,
    INCREMENT = 304,
    DECREMENT = 305,
    LOGICAL_AND = 306,
    LOGICAL_OR = 307,
    NOT = 308,
    ASSIGNMENT = 309,
    SEMICOLON = 310,
    COMMA = 311,
    COLON = 312,
    PLUS = 313,
    MINUS = 314,
    MULTIPLY = 315,
    DIVIDE = 316,
    QUESTION_MARK = 317,
    LEFT_PAREN = 318,
    RIGHT_PAREN = 319,
    LEFT_BRACKET = 320,
    RIGHT_BRACKET = 321,
    LEFT_BRACE = 322,
    RIGHT_BRACE = 323,
    CR = 324,
    LF = 325,
    LOWER_THAN_ELSE = 326
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 14 "parser.y"
 
    struct Node* node;
    

#line 134 "parser.hpp"

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

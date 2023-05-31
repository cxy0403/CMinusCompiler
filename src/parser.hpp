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
    CONST = 266,
    CONTINUE = 267,
    DEFAULT = 268,
    DO = 269,
    ELSE = 270,
    ENUM = 271,
    EXTERN = 272,
    FOR = 273,
    GOTO = 274,
    IF = 275,
    LONG = 276,
    SHORT = 277,
    REGISTER = 278,
    RETURN = 279,
    SIGNED = 280,
    UNSIGNED = 281,
    SIZEOF = 282,
    STATIC = 283,
    STRUCT = 284,
    SWITCH = 285,
    TYPEDEF = 286,
    UNION = 287,
    VOID = 288,
    VOLATILE = 289,
    WHILE = 290,
    IDENTIFIER = 291,
    RIGHT_SHIFT = 292,
    LEFT_SHIFT = 293,
    LESS_THAN = 294,
    LESS_THAN_OR_EQUAL_TO = 295,
    GREATER_THAN = 296,
    GREATER_THAN_OR_EQUAL_TO = 297,
    EQUAL_TO = 298,
    NOT_EQUAL_TO = 299,
    INCREMENT = 300,
    DECREMENT = 301,
    LOGICAL_AND = 302,
    LOGICAL_OR = 303,
    NOT = 304,
    ASSIGNMENT = 305,
    SEMICOLON = 306,
    COMMA = 307,
    COLON = 308,
    PLUS = 309,
    MINUS = 310,
    MULTIPLY = 311,
    DIVIDE = 312,
    QUESTION_MARK = 313,
    LEFT_PAREN = 314,
    RIGHT_PAREN = 315,
    LEFT_BRACKET = 316,
    RIGHT_BRACKET = 317,
    LEFT_BRACE = 318,
    RIGHT_BRACE = 319,
    CR = 320,
    LF = 321,
    LOWER_THAN_ELSE = 322
  };
#endif

/* Value type.  */
#if ! defined YYSTYPE && ! defined YYSTYPE_IS_DECLARED
union YYSTYPE
{
#line 13 "parser.y"
 
    struct Node* node;
    

#line 130 "parser.hpp"

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

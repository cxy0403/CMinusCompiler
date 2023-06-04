%option yylineno
%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>
    #include "parser.hpp"
    #include "IRGenerator.h"
    #include "jsonGenerator.h"
    #include "node.h"
    int yycolumn=1;
    #define YY_USER_ACTION \
        yylloc.first_line=yylineno;\
        yylloc.last_line=yylineno;\
        yylloc.first_column=yycolumn;\
        yylloc.last_column=yylloc.first_column+yyleng-1;\
        yycolumn+=yyleng;
    extern int mistakeRecord[4096];
    extern int mistake;
%}

%%
"break"                 {yylval.node = new Node(yytext, "BREAK", 0); return BREAK; }
"char"                  {yylval.node = new Node(yytext, "CHAR", 0); return CHAR; }
"continue"              {yylval.node = new Node(yytext, "CONTINUE", 0); return CONTINUE; }
"else"                  {yylval.node = new Node(yytext, "ELSE", 0); return ELSE; }
"float"                 {yylval.node = new Node(yytext, "FLOAT", 0); return FLOAT; }
"if"                    {yylval.node = new Node(yytext, "IF", 0); return IF; }
"bool"                  {yylval.node = new Node(yytext, "BOOL", 0); return BOOL; }
"int"                   {yylval.node = new Node(yytext, "INT", 0); return INT; }
"return"                {yylval.node = new Node(yytext, "RETURN", 0); return RETURN; }
"while"                 {yylval.node = new Node(yytext, "WHILE", 0); return WHILE; }

0|[1-9][0-9]*           {yylval.node = new Node(yytext, "INT_LIT", 0); return INT_LIT; } // yylval.int_val = atoi(yytext); 
[0-9]+\.[0-9]+          {yylval.node = new Node(yytext, "FLOAT_LIT", 0); return FLOAT_LIT; } //yylval.float_val = atof(yytext); 
0x[0-9a-fA-F]+          {yylval.node = new Node(yytext, "INT_LIT", 0);  return INT_LIT; } //yylval.int_val = strtol(yytext, NULL, 16);

[a-zA-Z_][a-zA-Z0-9_]*  {yylval.node = new Node(yytext, "IDENTIFIER", 0);  return IDENTIFIER; } //yylval.str_val = strdup(yytext);

\"([^\\\n]|(\\.))*?\"   {yylval.node = new Node(yytext, "STRING_LIT", 0); return STRING_LIT; }//yylval.str_val = strdup(yytext);
\'\\.\'                 {yylval.node = new Node(yytext, "CHAR_LIT", 0); return CHAR_LIT; }  // yylval.char_val = yytext[1];  //L?'.'|u?'.'|U?'.'|'\\x[0-9a-fA-F]+'|'\\[0-7]{1,3}'
\'[^\\']\'              {yylval.node = new Node(yytext, "CHAR_LIT", 0); return CHAR_LIT; } // yylval.char_val = yytext[1]; 

\/\/.*$                /* ignore single-line comments */
\/\*([^*]|\*[^\/])*\*\/ /* ignore multi-line comments */

">>"                    {yylval.node = new Node(yytext, "RIGHT_SHIFT", 0); return RIGHT_SHIFT; }
"<<"                    {yylval.node = new Node(yytext, "LEFT_SHIFT", 0); return LEFT_SHIFT; }
">"                     {yylval.node = new Node(yytext, "GREATER_THAN", 0); return GREATER_THAN; }
"<"                     {yylval.node = new Node(yytext, "LESS_THAN", 0); return LESS_THAN; }
">="                    {yylval.node = new Node(yytext, "GREATER_THAN_OR_EQUAL_TO", 0); return GREATER_THAN_OR_EQUAL_TO; }
"<="                    {yylval.node = new Node(yytext, "LESS_THAN_OR_EQUAL_TO", 0); return LESS_THAN_OR_EQUAL_TO; }
"=="                    {yylval.node = new Node(yytext, "EQUAL_TO", 0); return EQUAL_TO; }
"!="                    {yylval.node = new Node(yytext, "NOT_EQUAL_TO", 0); return NOT_EQUAL_TO; }
"\+\+"                  {yylval.node = new Node(yytext, "INCREMENT", 0); return INCREMENT; }
"--"                    {yylval.node = new Node(yytext, "DECREMENT", 0); return DECREMENT; }

"&&"                    {yylval.node = new Node(yytext, "LOGICAL_AND", 0); return LOGICAL_AND; }
"\|\|"                  {yylval.node = new Node(yytext, "LOGICAL_OR", 0); return LOGICAL_OR; }
"!"                     {yylval.node = new Node(yytext, "NOT", 0); return NOT; }

"="                     {yylval.node = new Node(yytext, "ASSIGNMENT", 0); return ASSIGNMENT; }
";"                     {yylval.node = new Node(yytext, "SEMICOLON", 0); return SEMICOLON; }
","                     {yylval.node = new Node(yytext, "COMMA", 0); return COMMA; }
":"                     {yylval.node = new Node(yytext, "COLON", 0); return COLON; }

"\+"                    {yylval.node = new Node(yytext, "PLUS", 0); return PLUS; }
"\-"                    {yylval.node = new Node(yytext, "MINUS", 0); return MINUS; }
"\*"                    {yylval.node = new Node(yytext, "MULTIPLY", 0); return MULTIPLY; }
"\/"                    {yylval.node = new Node(yytext, "DIVIDE", 0); return DIVIDE; }
"\?"                    {yylval.node = new Node(yytext, "QUESTION_MARK", 0); return QUESTION_MARK; }

"\("                    {yylval.node = new Node(yytext, "LEFT_PAREN", 0); return LEFT_PAREN; }
"\)"                    {yylval.node = new Node(yytext, "RIGHT_PAREN", 0); return RIGHT_PAREN; }
"\["                    {yylval.node = new Node(yytext, "LEFT_BRACKET", 0); return LEFT_BRACKET; }
"\]"                    {yylval.node = new Node(yytext, "RIGHT_BRACKET", 0); return RIGHT_BRACKET; }
"\{"                    {yylval.node = new Node(yytext, "LEFT_BRACE", 0); return LEFT_BRACE; }
"\}"                    {yylval.node = new Node(yytext, "RIGHT_BRACE", 0); return RIGHT_BRACE; }

"\r"                    {;}//CR
"\n"                    {yycolumn=1; }
[\t ]+                  /* ignore whitespace or tab*/
.                       { mistake++;fprintf(stderr, "Invalid character: %s\n", yytext); }
%%
int yywrap(void)
{
	return 1;
}



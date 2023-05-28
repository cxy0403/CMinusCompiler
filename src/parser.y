%{
    #include <stdio.h>
    #include <node.h>
    int yylex(void);
    extern Node* ROOT;
    int mistakeRecord[4096]={0};
    int mistake = 0;
    void yyerror(char const* s){
        fprintf(stderr, "%s\n", s);
    }
%}

%union{ 
    Node* node;
    }

%token <node> AUTO
%token <node> BREAK
%token <node> CASE
%token <node> CHAR DOUBLE FLOAT INT BOOL
%token <node> CONST
%token <node> CONTINUE
%token <node> DEFAULT
%token <node> DO
%token <node> ELSE
%token <node> ENUM
%token <node> EXTERN
%token <node> FOR
%token <node> GOTO
%token <node> IF
%token <node> LONG SHORT
%token <node> REGISTER
%token <node> RETURN
%token <node> SIGNED UNSIGNED
%token <node> SIZEOF
%token <node> STATIC
%token <node> STRUCT
%token <node> SWITCH
%token <node> TYPEDEF
%token <node> UNION
%token <node> VOID
%token <node> VOLATILE
%token <node> WHILE
%token <node> IDENTIFIER

%token <node> RIGHT_SHIFT LEFT_SHIFT
%token <node> LESS_THAN LESS_THAN_OR_EQUAL_TO GREATER_THAN GREATER_THAN_OR_EQUAL_TO EQUAL_TO NOT_EQUAL_TO
%token <node> INCREMENT DECREMENT
%token <node> LOGICAL_AND LOGICAL_OR
%token <node> NOT
%token <node> ASSIGNMENT
%token <node> SEMICOLON
%token <node> COMMA
%token <node> COLON
%token <node> PLUS MINUS MULTIPLY DIVIDE
%token <node> QUESTION_MARK

%token <node> LEFT_PAREN RIGHT_PAREN LEFT_BRACKET RIGHT_BRACKET LEFT_BRACE RIGHT_BRACE
%token <node> CR
%token <node> LF

%nonassoc LOWER_THAN_ELSE
%nonassoc ELSE

%left SEMICOLON
%right COMMA
%right ASSIGNMENT
%left LOGICAL_OR
%left LOGICAL_AND
%left LESS_THAN LESS_THAN_OR_EQUAL_TO GREATER_THAN GREATER_THAN_OR_EQUAL_TO EQUAL_TO NOT_EQUAL_TO
%left PLUS MINUS
%left MULTIPLY DIVIDE
%right NOT
%left LEFT_PAREN RIGHT_PAREN LEFT_BRACKET RIGHT_BRACKET LEFT_BRACE RIGHT_BRACE

%type <node> Program ExtDef ExtDefList Specifier ExtDecList FunDec CompSt VarDec ParameterList ParameterDec DefList StList Stm
%type <node> Def DecList Args Exp
%%
Program:
    ExtDefList {
        $$ = new Node("", "Program", 1, $1);
        ROOT = $$;
    }
    ;
/* 外部定义列表 */
ExtDefList:
    ExtDef ExtDefList {
        $$ = new Node("", "ExtDefList", 2, $1, $2);
    }
    | {
        $$ = nullptr;
    }
    ;
ExtDef:
    Specifier ExtDecList SEMICOLON{
        $$ = new Node("", "ExtDef", 3, $1, $2, $3);
    }
    | Specifier FunDec CompSt{
        $$ = new Node("", "ExtDef", 3, $1, $2, $3);
    }
    ;

Specifier:
    INT {
        $$ = new Node("", "Specifier", 1, $1);
    }
    | DOUBLE {
        $$ = new Node("", "Specifier", 1, $1);
    }
    | FLOAT {
        $$ = new Node("", "Specifier", 1, $1);
    }
    | CHAR {
        $$ = new Node("", "Specifier", 1, $1);
    }
    ;

/*外部变量声明列表*/
ExtDecList:
    VarDec {
        $$ = new Node("", "ExtDecList", 1, $1);
    }
    | VarDec COMMA ExtDecList {
        $$ = new Node("", "ExtDecList", 3, $1, $2, $3);
    }
    ;
/*函数声明*/
FunDec:
    IDENTIFIER LEFT_PAREN ParameterList RIGHT_PAREN {
        $$ = new Node("", "FunDec", 4, $1, $2, $3, $4);
    }
    | IDENTIFIER LEFT_PAREN RIGHT_PAREN{
        $$ = new Node("", "FunDec", 3, $1, $2, $3);
    }
    | IDENTIFIER LEFT_PAREN error RIGHT_PAREN{
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @3.first_line);
        }
    }
    | IDENTIFIER error RIGHT_PAREN{
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    ;
/*复杂语句*/
CompSt:
    LEFT_BRACE DefList StList RIGHT_BRACE{
        $$ = new Node("", "CompSt", 4, $1, $2, $3, $4);
    }
    | LEFT_BRACE DefList StList {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @3.first_line);
        }
    }
    | error RIGHT_BRACE {
        if(mistakeRecord[@1.first_line-1] == 0){
            mistakeRecord[@1.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @1.first_line);
        }
    }
    ;
/*变量声明*/
VarDec:
    IDENTIFIER {
        $$ = new Node("", "VarDec", 1, $1);
    }
    | IDENTIFIER LEFT_BRACKET INT RIGHT_BRACKET {
        $$ = new Node("", "VarDec", 4, $1, $2, $3, $4);
    }
    | IDENTIFIER LEFT_BRACKET RIGHT_BRACKET {
        $$ = new Node("", "VarDec", 3, $1, $2, $3);
    }
    | IDENTIFIER LEFT_BRACKET error RIGHT_BRACKET {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @3.first_line);
        }
    }
    ;
ParameterList:
    ParameterDec COMMA ParameterList {
        $$ = new Node("", "ParameterList", 3, $1, $2, $3);
    }
    | ParameterDec {
        $$ = new Node("", "ParameterList", 1, $1);
    }
    ;
ParameterDec:
    Specifier VarDec {
        $$ = new Node("", "ParameterDec", 2, $1, $2);
    }
    ;

DefList:
    {
        $$ = nullptr;
    }
    | Def DefList {
        $$ = new Node("", "DefList", 2, $1, $2);
    }
    ;

StList:
    {
        $$ = nullptr;
    }
    | Stm StList {
        $$ = new Node("", "StList", 2, $1, $2);
    }
    ;

Def:
    Specifier DecList SEMICOLON{
        $$ = new Node("", "Def", 3, $1, $2, $3);
    }
    | Specifier error SEMICOLON{
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    | error DecList SEMICOLON{
        if(mistakeRecord[@1.first_line-1] == 0){
            mistakeRecord[@1.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @1.first_line);
        }
    }
    | Specifier DecList {
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    ;

DecList:
    VarDec {
        $$ = new Node("", "DecList", 1, $1);
    }
    | VarDec COMMA DecList {
        $$ = new Node("", "DecList", 3, $1, $2, $3);
    }
    ;

Stm:
    Exp SEMICOLON{
        $$ = new Node("", "Stm", 2, $1, $2);
    }
    | CompSt {
        $$ = new Node("", "Stm", 1, $1);
    }
    | RETURN SEMICOLON{
        $$ = new Node("", "Stm", 1, $1);
    }
    | RETURN Exp SEMICOLON{
        $$ = new Node("", "Stm", 3, $1, $2, $3);
    }
    | RETURN Exp {
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    | BREAK SEMICOLON{
        $$ = new Node("", "Stm", 2, $1, $2);
    }
    | CONTINUE SEMICOLON{
        $$ = new Node("", "Stm", 2, $1, $2);
    }
    | IF LEFT_PAREN Exp RIGHT_PAREN Stm %prec LOWER_THAN_ELSE {
        $$ = new Node("", "Stm", 5, $1, $2, $3, $4, $5);
    }
    | IF LEFT_PAREN Exp RIGHT_PAREN Stm ELSE Stm {
        $$ = new Node("", "Stm", 7, $1, $2, $3, $4, $5, $6, $7);
    }
    | IF error ELSE Stm{
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    | WHILE LEFT_PAREN Exp RIGHT_PAREN Stm{
        $$ = new Node("", "Stm", 5, $1, $2, $3, $4, $5);
    }
    | WHILE error RIGHT_PAREN{
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    | WHILE error RIGHT_BRACKET {
        if(mistakeRecord[@2.first_line-1] == 0){
            mistakeRecord[@2.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @2.first_line);
        }
    }
    | error SEMICOLON {
        if(mistakeRecord[@1.first_line-1] == 0){
            mistakeRecord[@1.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @1.first_line);
        }
    }
    | Exp {
        if(mistakeRecord[@1.first_line-1] == 0){
            mistakeRecord[@1.first_line-1] = 1;
            mistake ++;
            printf("Error at Line %d : Syntax Error.\n", @1.first_line);
        }
    }
    ;

    Exp:  
	Exp ASSIGNMENT Exp {
		$$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($3->getValueType());
	}
    | Exp LOGICAL_AND Exp {
		$$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
	}
    | Exp LOGICAL_OR Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp GREATER_THAN Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp GREATER_THAN_OR_EQUAL_TO Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp LESS_THAN Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp LESS_THAN_OR_EQUAL_TO Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp EQUAL_TO Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp NOT_EQUAL_TO Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp PLUS Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp MINUS Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp MULTIPLY Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp DIVIDE Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp RIGHT_SHIFT Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | Exp LEFT_SHIFT Exp {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    | LEFT_PAREN Exp RIGHT_PAREN {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($2->getValueType());
    }
    | MINUS Exp {
        $$ = new Node("", "Exp", 2, $1, $2);
        $$->setValueType($2->getValueType());
    }
    | NOT Exp {
        $$ = new Node("", "Exp", 2, $1, $2);
        $$->setValueType(BOOL);
    }
    | IDENTIFIER LEFT_PAREN Args RIGHT_PAREN {
        $$ = new Node("", "Exp", 4, $1, $2, $3, $4);
        $$->setValueType($1->getValueType());
    }
    | IDENTIFIER LEFT_PAREN RIGHT_PAREN {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType());
    }
    // 
    | IDENTIFIER LEFT_BRACKET Exp RIGHT_BRACKET {
        $$ = new Node("", "Exp", 4, $1, $2, $3, $4);
        $$->setValueType($1->getValueType() - ARRAY);
    }
    | IDENTIFIER LEFT_BRACKET RIGHT_BRACKET {
        $$ = new Node("", "Exp", 3, $1, $2, $3);
        $$->setValueType($1->getValueType() + ARRAY);
    }
    | IDENTIFIER {
        $$ = new Node("", "Exp", 1, $1);
        $$->setValueType($1->getValueType());
    }
    | INT {
        $$ = new Node("", "Exp", 1, $1);
        $$->setValueType(TYPE_INT);
    }
    | FLOAT {
        $$ = new Node("", "Exp", 1, $1);
        $$->setValueType(TYPE_FLOAT);
    }
    | BOOL {
        $$ = new Node("", "Exp", 1, $1);
        $$->setValueType(BOOL);
    }
    // '$ch'
    | CHAR {
        $$ = new Node("", "Exp", 1, $1);
        $$->setValueType(TYPE_CHAR);
    }
    | Exp ASSIGNMENT error SEMICOLON {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LOGICAL_AND error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LOGICAL_OR error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp GREATER_THAN error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp GREATER_THAN_OR_EQUAL_TO error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LESS_THAN_OR_EQUAL_TO error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LESS_THAN error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp EQUAL_TO error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp NOT_EQUAL_TO error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp PLUS error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp MINUS error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp MULTIPLY error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp DIVIDE error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp RIGHT_SHIFT error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LEFT_SHIFT error SEMICOLON  {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | IDENTIFIER LEFT_PAREN error SEMICOLON {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: Syntax Error.\n", @3.first_line);
        }
    }
    | Exp LEFT_BRACKET error LEFT_BRACKET {
        if(mistakeRecord[@3.first_line-1] == 0){
            mistakeRecord[@3.first_line-1] = 1;
            mistake++;
            printf("Error Occur at Line %d: wrong expression between \"[\" and \"]\".\n", @3.first_line);
        }
    }
    | Exp QUESTION_MARK Exp COLON Exp {
        $$ = new Node("", "Exp", 5, $1, $2, $3, $4, $5);
    }
    | Exp INCREMENT {
        $$ = new Node("", "Exp", 2, $1, $2);
    }
    | Exp DECREMENT {
        $$ = new Node("", "Exp", 2, $1, $2);
    }
    ;

    Args:
    Exp COMMA Args {
        $$ = new Node("", "Args", 3, $1, $2, $3);
    }
    | Exp {
        $$ = new Node("", "Args", 1, $1);
    }
    ;
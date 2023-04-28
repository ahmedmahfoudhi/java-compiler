%{
    #include <stdio.h>
    #include <stdlib.h>
    #include <string.h>


    int yyerror(char const *msg);	

	int yylex(void);
	extern int yylineno;
%}

%token IDENTIFIER
%token TYPE_INT
%token TYPE_BOOLEAN
%token TYPE_STRING

%token BOOLEAN_LITERAL
%token INTEGER_LITERAL
%token STRING_LITERAL

%token KEYWORD_CLASS
%token KEYWORD_PUBLIC
%token KEYWORD_STATIC
%token KEYWORD_VOID
%token KEYWORD_MAIN
%token KEYWORD_EXTENDS
%token KEYWORD_RETURN
%token KEYWORD_IF
%token KEYWORD_ELSE
%token KEYWORD_WHILE
%token KEYWORD_PRINT
%token KEYWORD_NEW
%token KEYWORD_THIS

%token PARENTHESIS_OPEN
%token PARENTHESIS_CLOSE
%token BRACKET_OPEN
%token BRACKET_CLOSE
%token CURLY_BRACKET_OPEN
%token CURLY_BRACKET_CLOSE

%token OP_AFFECT
%token OP_ADD
%token OP_SUBSTRACT
%token OP_MULTIPLY
%token OP_NOT

%token LOG_AND
%token LOG_OR
%token LOG_LESS
%token LOG_EQLESS
%token LOG_MORE
%token LOG_EQMORE
%token LOG_EQ
%token LOG_DIF

%token SEMI_COLON
%token DOT
%token COMMA

%error-verbose
%start Program


%%

Program		           : MainClass NestedClassDeclaration
                       ;
MainClass              : MainClassDeclaration MainClassBody
                       ;
NestedClassDeclaration	   : ClassDeclaration NestedClassDeclaration
                       |
                       ;
MainClassDeclaration               : SimpleClassHeader CURLY_BRACKET_OPEN KEYWORD_PUBLIC KEYWORD_STATIC KEYWORD_VOID KEYWORD_MAIN PARENTHESIS_OPEN TYPE_STRING BRACKET_OPEN BRACKET_CLOSE IDENTIFIER PARENTHESIS_CLOSE
                       ;
MainClassBody               :  CURLY_BRACKET_OPEN MultipleStatements  CURLY_BRACKET_CLOSE MultipleMethodsDeclaration CURLY_BRACKET_CLOSE 
                       ;
ClassDeclaration       : SimpleClassHeader KEYWORD_EXTENDS IDENTIFIER CURLY_BRACKET_OPEN MultipleVariablesDeclaration MultipleMethodsDeclaration CURLY_BRACKET_CLOSE 
                       | SimpleClassHeader CURLY_BRACKET_OPEN MultipleVariablesDeclaration MultipleMethodsDeclaration CURLY_BRACKET_CLOSE 
                       ;
SimpleClassHeader              : KEYWORD_CLASS IDENTIFIER
                         | KEYWORD_PUBLIC KEYWORD_CLASS IDENTIFIER
                       ;
MultipleVariablesDeclaration        : SimpleVariableDeclaration MultipleVariablesDeclaration
                       |
                       ;
SimpleVariableDeclaration         : Variable SEMI_COLON
                       ;
InlineVariables              : Variable  COMMA InlineVariables
                       | Variable 
                       |
                       ;
Variable               : Type IDENTIFIER
                       ;
MultipleMethodsDeclaration     : MethodDeclaration MultipleMethodsDeclaration
                       |
                       ;
MethodDeclaration      : KEYWORD_PUBLIC Variable PARENTHESIS_OPEN InlineVariables PARENTHESIS_CLOSE  CURLY_BRACKET_OPEN MultipleStatements  KEYWORD_RETURN Expression SEMI_COLON CURLY_BRACKET_CLOSE
                       ;

Type                   : TYPE_INT BRACKET_OPEN BRACKET_CLOSE 
                       | TYPE_BOOLEAN 
                       | TYPE_INT 
                       | TYPE_STRING
                       ;
MultipleStatements             : Statement MultipleStatements
                       | Statement
                       |
                       ;
Literal                : STRING_LITERAL
                       | BOOLEAN_LITERAL
                       | INTEGER_LITERAL
                       | IDENTIFIER
                       ;
Statement              : CURLY_BRACKET_OPEN MultipleStatements CURLY_BRACKET_CLOSE
                       | SimpleVariableDeclaration
                       | Variable OP_AFFECT Expression SEMI_COLON
                       | IDENTIFIER OP_AFFECT Literal SEMI_COLON
                       | IDENTIFIER OP_AFFECT Statement
                       | Literal Operator Expression SEMI_COLON
                       | KEYWORD_IF PARENTHESIS_OPEN Expression PARENTHESIS_CLOSE 
                            CURLY_BRACKET_OPEN MultipleStatements CURLY_BRACKET_CLOSE
                            KEYWORD_ELSE CURLY_BRACKET_OPEN MultipleStatements CURLY_BRACKET_CLOSE 
                       | KEYWORD_IF PARENTHESIS_OPEN Expression PARENTHESIS_CLOSE 
                            MultipleStatements
                            KEYWORD_ELSE
                            MultipleStatements 
                       | KEYWORD_WHILE  PARENTHESIS_OPEN Expression PARENTHESIS_CLOSE 
                            CURLY_BRACKET_OPEN MultipleStatements CURLY_BRACKET_CLOSE
                       | KEYWORD_PRINT PARENTHESIS_OPEN Expression PARENTHESIS_CLOSE SEMI_COLON
                       ;
Expression             : INTEGER_LITERAL CompositeExpression
                       | IDENTIFIER CompositeExpression
                       | BOOLEAN_LITERAL CompositeExpression
                       | STRING_LITERAL CompositeExpression
                       | KEYWORD_THIS CompositeExpression
                       | KEYWORD_NEW TYPE_INT BRACKET_OPEN Expression BRACKET_CLOSE CompositeExpression
                       | KEYWORD_NEW IDENTIFIER PARENTHESIS_OPEN PARENTHESIS_CLOSE CompositeExpression
                       | KEYWORD_NEW IDENTIFIER PARENTHESIS_OPEN MultipleExpressions PARENTHESIS_CLOSE CompositeExpression
                       | OP_NOT Expression CompositeExpression
                       | PARENTHESIS_OPEN Expression PARENTHESIS_CLOSE CompositeExpression
                       ;
CompositeExpression         : Operator Expression CompositeExpression
                       | Logic Expression  CompositeExpression
                       | BRACKET_OPEN Expression BRACKET_CLOSE CompositeExpression
                       | MethodCall PARENTHESIS_OPEN MultipleExpressions PARENTHESIS_CLOSE CompositeExpression
                       | MethodCall PARENTHESIS_OPEN PARENTHESIS_CLOSE  CompositeExpression
                       |
                       ;
MethodCall             : DOT IDENTIFIER 
                       ;
MultipleExpressions            : Expression COMMA MultipleExpressions
                       | Expression 
                       ;
Operator               : OP_ADD
                       | OP_MULTIPLY 
                       | OP_SUBSTRACT
                       ;
Logic                  : LOG_AND
                       | LOG_LESS 
                       | LOG_OR
                       | LOG_EQLESS 
                       | LOG_MORE 
                       | LOG_EQMORE 
                       | LOG_EQ 
                       | LOG_DIF 
                       ;

%%


extern FILE *yyin;
int yyerror(char const *msg) {
	fprintf(stderr, "%s %d\n", msg,yylineno);
	return 0;
}
int main(int argc, char **argv)
{
    yyin = fopen(argv[1], "r");
    yyparse();
    return 1;
}


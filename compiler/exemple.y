%{
	

#include <stdio.h>	
 			
int yyerror(char const *msg);	
int yylex(void);
extern int line;

%}


%token CLASS 
%token PUBLIC
%token STATIC
%token VOID
%token MAIN
%token PSVM
%token EXTENDS
%token RETURN
%token PRINT
%token NEW
%token BOOLEAN
%token INT
%token STRING
%token IF
%token ELSE
%token WHILE
%token LENGTH
%token THIS
%token POINT
%token POINT_VIRGULE
%token VIRGULE
										
%token AFFECTATION

%token OPERATOR  

%token ID 
%token NUMBER 
%token BOOL


%token PARENTHESE_OUVRANTE
%token PARENTHESE_FERMANTE
%token BRACE_OUVRANTE
%token BRACE_FERMANTE
%token BRACKET_FERMANTE
%token BRACKET_OUVRANTE

%token NOT 


%start program

%%
                                                           
program			:  MainClass ClassDeclarationS ;

    



ClassDeclarationS       :ClassDeclaration ClassDeclarationS                      
                        |epsilon;


ClassDeclaration	:CLASS ID EXTENDSID BRACE_OUVRANTE VarDeclarationS MethodDeclarationS BRACE_FERMANTE
                        |error ID EXTENDSID BRACE_OUVRANTE VarDeclarationS MethodDeclarationS BRACE_FERMANTE          {yyerror ("erreur mot cle class errone "); }
                        |CLASS error  EXTENDSID BRACE_OUVRANTE VarDeclarationS MethodDeclarationS BRACE_FERMANTE          {yyerror ("erreur identifier errone "); }
                        |CLASS ID  EXTENDSID error VarDeclarationS MethodDeclarationS BRACE_FERMANTE              {yyerror ("erreur acolade ouvarnte  manquant "); }
                        |CLASS ID  EXTENDSID BRACE_OUVRANTE VarDeclarationS MethodDeclarationS error          {yyerror (" erreur acolade fermante  manquant "); };
  
EXTENDSID		:EXTENDS ID
                        |epsilon
                        |error ID  {yyerror (" mot cle EXTENDS manquant ou bien errone "); }
                        |CLASS error  {yyerror ("erreur identifier errone "); }; 


VarDeclarationS		:VarDeclaration VarDeclarationS	
                        |epsilon;

MethodDeclarationS	:MethodDeclaration MethodDeclarationS	
                        |epsilon;

STATEMENTS		:STATEMENT STATEMENTS 
                        |epsilon;

VarDeclaration		:Type ID  POINT_VIRGULE;
                        |Type error POINT_VIRGULE {yyerror ("erreur identifier errone "); } 
                        |Type ID  error  {yyerror ("POINT_VIRGULE  manquant "); }; 

ONEARGG                    :ONEARG ONEARGG
                        |epsilon;

ONEARG                     :VIRGULE Type ID
                        |error Type ID                  {yyerror ("VIRGULE manquant "); }     
                        |VIRGULE Type error                  {yyerror ("identifier errone "); }     ;

ARGS                  :Type ID ONEARGG
                        |epsilon;

MethodDeclaration	:PUBLIC Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE   
                        |error Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE    {yyerror ("mot clee class manquant ou errone "); }
                        |PUBLIC Type error PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE      {yyerror ("erreur identifier errone "); } 
                        |PUBLIC Type ID error ARGS PARENTHESE_FERMANTE BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE      {yyerror ("erreur parenthese ouvarnte  manquante "); } 
                        |PUBLIC Type ID PARENTHESE_OUVRANTE ARGS error BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE     {yyerror ("erreur parenthese fermante  manquante "); }
                        |PUBLIC Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE  error VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE BRACE_FERMANTE     {yyerror ("acolade ouvrant  manquant "); }
                        |PUBLIC Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE  BRACE_OUVRANTE VarDeclarationS STATEMENTS error EXPRESSION POINT_VIRGULE BRACE_FERMANTE     {yyerror ("mot clee return manquant ou errone "); }
                        |PUBLIC Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE  BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION error BRACE_FERMANTE     {yyerror ("POINT_VIRGULE manquant  "); }
                        |PUBLIC Type ID PARENTHESE_OUVRANTE ARGS PARENTHESE_FERMANTE  BRACE_OUVRANTE VarDeclarationS STATEMENTS RETURN EXPRESSION POINT_VIRGULE error     {yyerror ("acolade fermant  manquante "); };
                        



Type			:INT BRACKET_OUVRANTE BRACKET_FERMANTE	
			|INT error BRACKET_FERMANTE                 {yyerror ("erreur bracket ouvrante manquante "); } 
			|INT BRACKET_OUVRANTE error                 {yyerror ("erreur bracket fermante manquante "); } 
			|BOOLEAN		
			|INT
			|ID

               
MainClass		: CLASS ID BRACE_OUVRANTE PSVM ARG BRACE_OUVRANTE STATEMENT BRACE_FERMANTE BRACE_FERMANTE
                        |error ID BRACE_OUVRANTE PSVM ARG BRACE_OUVRANTE STATEMENT BRACE_FERMANTE BRACE_FERMANTE          {yyerror ("mot cle CLASS errone ou bien manquant on ligne "); }
			|CLASS error BRACE_OUVRANTE PSVM ARG BRACE_OUVRANTE STATEMENT BRACE_FERMANTE BRACE_FERMANTE       {yyerror ("erreur identifier errone "); } 
			|CLASS ID error PSVM ARG BRACE_OUVRANTE STATEMENT BRACE_FERMANTE BRACE_FERMANTE         {yyerror ("acolade ouvrante manquante "); } 
                        |CLASS ID BRACE_OUVRANTE PSVM ARG error STATEMENT BRACE_FERMANTE BRACE_FERMANTE          {yyerror ("acolade ouvrante manquante "); }
                        |CLASS ID BRACE_OUVRANTE PSVM ARG BRACE_OUVRANTE STATEMENT error BRACE_FERMANTE          {yyerror ("acolade fermante  manquante dans la ligne:"); }
                        |CLASS ID BRACE_OUVRANTE PSVM ARG BRACE_OUVRANTE STATEMENT BRACE_FERMANTE error          {yyerror ("acolade fermante  manquante "); };


ARG			: PARENTHESE_OUVRANTE STRING BRACKET_OUVRANTE BRACKET_FERMANTE ID PARENTHESE_FERMANTE
                        |error STRING BRACKET_OUVRANTE BRACKET_FERMANTE ID PARENTHESE_FERMANTE          {yyerror ("parenthese ouvrante manquante "); }
                        |PARENTHESE_OUVRANTE error BRACKET_OUVRANTE BRACKET_FERMANTE ID PARENTHESE_FERMANTE          {yyerror ("erreur mot cle String errone  "); }
                        |PARENTHESE_OUVRANTE STRING error BRACKET_FERMANTE ID PARENTHESE_FERMANTE          {yyerror ("bracket ouvrante manquante "); }
                        |PARENTHESE_OUVRANTE STRING BRACKET_OUVRANTE error ID PARENTHESE_FERMANTE          {yyerror ("bracket fermante manquante "); }
                        |PARENTHESE_OUVRANTE STRING BRACKET_OUVRANTE BRACKET_FERMANTE error PARENTHESE_FERMANTE          {yyerror ("erreur identifier errone "); }
                        |PARENTHESE_OUVRANTE STRING BRACKET_OUVRANTE BRACKET_FERMANTE ID error          {yyerror ("parenthese  fermant manquant "); };




STATEMENT		:STATEMENTS              
                        |IF PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  BRACE_OUVRANTE STATEMENT BRACE_FERMANTE  ELSE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE
                        |IF PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  BRACE_OUVRANTE STATEMENT BRACE_FERMANTE  ELSE  STATEMENT 
                        |IF PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE   STATEMENT ELSE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE
                        |IF PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  STATEMENT  ELSE  STATEMENT
                        |error PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE ELSE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE            {yyerror ("mot cle IF errone ou bien manquant on ligne "); }
                        |IF error EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE ELSE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                       {yyerror ("parenthese  ouvrante manquant "); }
                        |IF PARENTHESE_OUVRANTE EXPRESSION error BRACE_OUVRANTE STATEMENT BRACE_FERMANTE  ELSE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                       {yyerror ("parenthese  fermante manquant "); }
                        |IF PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE error BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                {yyerror ("mot cle ELSE errone ou bien manquant on ligne "); }

                        |WHILE PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE 
                        |WHILE PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  STATEMENT 
                        |error PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                          {yyerror ("mot cle WHILE errone ou bien manquant on ligne "); }
                        |WHILE error EXPRESSION PARENTHESE_FERMANTE BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                                  {yyerror ("parenthese  ouvrante manquant "); }
                        |WHILE PARENTHESE_OUVRANTE EXPRESSION error BRACE_OUVRANTE STATEMENT BRACE_FERMANTE                                  {yyerror ("parenthese  fermante manquant "); }

                        |PRINT PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  POINT_VIRGULE
                        |error PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  POINT_VIRGULE             {yyerror ("system.out.println errone ou bien manquant on ligne "); }
                        |PRINT error EXPRESSION PARENTHESE_FERMANTE  POINT_VIRGULE                    {yyerror ("parenthese  ouvrante manquant "); }
                        |PRINT PARENTHESE_OUVRANTE EXPRESSION error  POINT_VIRGULE                    {yyerror ("parenthese  fermante manquant "); }
                        |PRINT PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE  error                     {yyerror ("POINT_VIRGULE  manquant "); }

                        |ID AFFECTATION EXPRESSION POINT_VIRGULE
                        |error AFFECTATION EXPRESSION POINT_VIRGULE                                     {yyerror ("erreur identifier errone "); };
                        |ID error EXPRESSION POINT_VIRGULE                                              {yyerror ("AFFECTATION errone "); };
                        |ID AFFECTATION EXPRESSION error                                                {yyerror ("POINT_VIRGULE  manquant "); }

                        |ID BRACKET_OUVRANTE EXPRESSION BRACKET_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE
                        |error BRACKET_OUVRANTE EXPRESSION BRACKET_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE         {yyerror ("erreur identifier errone "); }
                        |ID error EXPRESSION BRACKET_FERMANTE AFFECTATION EXPRESSION POINT_VIRGULE                   {yyerror ("erreur bracket ouvrante manquante "); }
                        |ID BRACKET_OUVRANTE EXPRESSION error AFFECTATION EXPRESSION POINT_VIRGULE                    {yyerror ("erreur bracket fermante manquante "); }
                        |ID BRACKET_OUVRANTE EXPRESSION BRACKET_FERMANTE error EXPRESSION POINT_VIRGULE                  {yyerror ("AFFECTATION errone "); }
                        |ID BRACKET_OUVRANTE EXPRESSION BRACKET_FERMANTE AFFECTATION EXPRESSION error                     {yyerror ("POINT_VIRGULE  manquant "); };


EXPRESSION		:EXPRESSION OPERATOR EXPRESSION
                        |EXPRESSION error EXPRESSION                                                              {yyerror ("operateur manquant "); }

                        |EXPRESSION BRACKET_OUVRANTE EXPRESSION BRACKET_FERMANTE
                        |EXPRESSION error EXPRESSION BRACKET_FERMANTE                                               {yyerror ("erreur bracket ouvrante manquante "); }
                        |EXPRESSION BRACKET_OUVRANTE EXPRESSION error                                               {yyerror ("erreur bracket fermante manquante "); }

                        |EXPRESSION POINT LENGTH 
                        |EXPRESSION error LENGTH                                                                {yyerror ("POINT manquant "); }
                        |EXPRESSION POINT error                                                                 {yyerror ("mot cle LENGTH manquant "); }

                        |EXPRESSION POINT ID PARENTHESE_OUVRANTE EXPAFTEREXP PARENTHESE_FERMANTE
                        |EXPRESSION error ID PARENTHESE_OUVRANTE EXPAFTEREXP PARENTHESE_FERMANTE                             {yyerror ("POINT manquant "); }
                        |EXPRESSION POINT error PARENTHESE_OUVRANTE EXPAFTEREXP PARENTHESE_FERMANTE                          {yyerror ("erreur identifier errone "); }
                        |EXPRESSION POINT ID error EXPAFTEREXP PARENTHESE_FERMANTE                                    {yyerror ("erreur parenthese ouvarnte  manquante "); }
                        |EXPRESSION POINT ID PARENTHESE_OUVRANTE EXPAFTEREXP error                                    {yyerror ("erreur parenthese fermante  manquante "); }


                        |NUMBER
                        |BOOL
                        |ID
                        |THIS
                        |error                                                                                  {yyerror ("erreur "); }
                        
                        |NEW INT BRACE_OUVRANTE EXPRESSION BRACE_FERMANTE
                        |error INT BRACE_OUVRANTE EXPRESSION BRACE_FERMANTE                                         {yyerror ("mot cle NEW manquant ou bien errone "); }
                        |NEW error BRACE_OUVRANTE EXPRESSION BRACE_FERMANTE                                         {yyerror ("mot cle int manquant ou bien errone "); }
                        |NEW INT error EXPRESSION BRACE_FERMANTE                                                  {yyerror ("erreur acolade ouvarnte  manquante "); }
                        |NEW INT BRACE_OUVRANTE EXPRESSION error                                                  {yyerror ("erreur acolade fermante  manquante "); }

                        |NEW ID PARENTHESE_OUVRANTE PARENTHESE_FERMANTE
                        |error ID PARENTHESE_OUVRANTE PARENTHESE_FERMANTE                                                     {yyerror ("mot cle NEW manquant ou bien errone "); }
                        |NEW error PARENTHESE_OUVRANTE PARENTHESE_FERMANTE                                                    {yyerror ("erreur identifier errone "); }
                        |NEW ID error PARENTHESE_FERMANTE                                                              {yyerror ("erreur parenthese ouvarnte  manquante "); } 
                        |NEW ID PARENTHESE_OUVRANTE error                                                              {yyerror ("erreur parenthese fermante  manquante "); } 

                        |NOT EXPRESSION
                        |error EXPRESSION                                                                       {yyerror ("erreur "); } 

                        |PARENTHESE_OUVRANTE EXPRESSION PARENTHESE_FERMANTE
                        |error EXPRESSION PARENTHESE_FERMANTE                                                          {yyerror ("erreur parenthese ouvarnte  manquante "); }  
                        |PARENTHESE_OUVRANTE EXPRESSION error                                                          {yyerror ("erreur parenthese fermante  manquante "); } ;


EXPAFTEREXP		:EXPRESSION EXPRESSIONS
			|epsilon;

EXPRESSIONS		:VIRGULE EXPRESSION EXPRESSIONS
                        |error EXPRESSION EXPRESSIONS                                                                      {yyerror ("erreur VIRGULE manquante "); }
			|epsilon;


epsilon			:




%% 

int yyerror(char const *msg) {
	fprintf(stderr, "%s a la ligne %d\n", msg,line);
	return 0;	
}

extern FILE *yyin;

int main()
{
 yyparse();
 
}
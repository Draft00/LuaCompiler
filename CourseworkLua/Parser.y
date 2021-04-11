%{
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

FILE *yyin;
int yyerror();
extern int yylex();

extern char* yytext;
extern int brackets;
extern int yylineno;
extern void DEBUGPRINT(char* format, ...);

#define YYERROR_VERBOSE 1


%}

%locations

%token INT HEX FLOAT HEX_FLOAT
%token TWOQ ONEQ ONEQSTRING TWOQSTRING LONGSTRING NESTED_STR
%token NAME

/* Arguments */
%token DOTS

/* Keyworded values */
%token NIL FALSE TRUE

/* Operators */
%token BINOP UNOP MINUS

/* Looping */
%token DO WHILE FOR UNTIL REPEAT END

/* If/else statements */
%token IF THEN ELSEIF ELSE

/* Values */
%token LOCAL

/* Functions */
%token FUNCTION BREAK RETURN


/* SECTION OF WHAT WE SHOULD TEST */
//1 Can we use FLOOR_DIV (//) like / / (with a space)?



/* section the priority of operations. from top to bottom in ascending order */

/*%right	'='
%left	ADD SUB
%left	'(' ')'
%left	MULT FLOAT_DIV FLOOR_DIV
%right	EXP
%left	UMINUS
*/

%start main

%%
/*================ 2. The Grammar Section ================================*/

main: chunk				{ DEBUGPRINT("\nMAIN: chunk"); }
;

chunk: chunk chunk 		{ DEBUGPRINT("\nCHUNK: chunk chunk"); }
	 | var '=' exp 		{ DEBUGPRINT("\nCHUNK: var = exp"); }
	 | RETURN exp 		{ DEBUGPRINT("\nCHUNK: RETURN exp"); }
	 | exp 				{ DEBUGPRINT("\nCHUNK: exp"); }
	 | function 		{ DEBUGPRINT("\nCHUNK: function"); }
	 | function_call	{ DEBUGPRINT("\nCHUNK: function_call"); }
;

function_call: NAME '(' exp ')' 	{ DEBUGPRINT("\nFUNCTION_CALL: NAME '(' exp ')'"); }
;

function: FUNCTION NAME '(' args ')' chunk END 	{ DEBUGPRINT("\nFUNCTION: FUNCTION NAME ( args ) chunk END "); }
		| FUNCTION NAME '(' args ')' END 		{ DEBUGPRINT("\nFUNCTION: FUNCTION NAME ( args ) EMPTY_BODY END "); } // Function with empty body
;

args: exp			{ DEBUGPRINT("\nARGS: exp"); }
	| args ',' exp	{ DEBUGPRINT("\nARGS: arg , exp"); }
;

exp:  NIL 			{ DEBUGPRINT("\nEXP: NIL"); }
	| FALSE 		{ DEBUGPRINT("\nEXP: FALSE"); }
	| TRUE			{ DEBUGPRINT("\nEXP: TRUE"); }
	| DOTS			{ DEBUGPRINT("\nEXP: DOTS"); }
	/*| functiondef 
	| prefixexp 
	| tableconstructor */
	| '(' exp ')'	{ DEBUGPRINT("\nEXP: ( exp )"); }
	| exp BINOP exp { DEBUGPRINT("\nEXP: exp BINOP exp"); }
	| exp MINUS exp { DEBUGPRINT("\nEXP: exp MINUS exp"); }
	| UNOP exp 		{ DEBUGPRINT("\nEXP: UNOP exp"); }
	| MINUS exp 	{ DEBUGPRINT("\nEXP: MINUS exp"); }
	| numeral		{ DEBUGPRINT("\nEXP: numeral"); }
	| literalString { DEBUGPRINT("\nEXP: literalString"); }
	| var 			{ DEBUGPRINT("\nEXP: var"); } // Fuck!
;

var:  NAME 				{ DEBUGPRINT("\nVAR: NAME"); }
	| NAME '.' NAME 	{ DEBUGPRINT("\nVAR: NAME . NAME"); }
	| NAME '[' exp ']' 	{ DEBUGPRINT("\nVAR: NAME [ NAME ]"); }
;

literalString:	ONEQSTRING 		{ DEBUGPRINT("\nVAR: ONEQSTRING"); }
				| TWOQSTRING	{ DEBUGPRINT("\nVAR: TWOQSTRING"); }
				| LONGSTRING 	{ DEBUGPRINT("\nVAR: LONGSTRING"); }/* TODO */
				//| LongString
;

numeral:  INT
		| HEX
		| FLOAT
		| HEX_FLOAT
;

/*
This is not work
In Lex: 
"["						{ BEGIN(NESTEDSTR1); }
<NESTEDSTR1>"]"			{ BEGIN(INITIAL); DEBUGPRINT("\nLex STR1: %s", yytext); return NESTED_STR;}
<NESTEDSTR1>.			{DEBUGPRINT("\nLex STR2: %s", yytext); }
<NESTEDSTR1>\n			{DEBUGPRINT("\nLex STR3: %s", yytext); }

LongString: '[' NestedStr ']'
;

NestedStr: NESTED_STR |
			'=' NestedStr '='
;
*/
%%

int parser_main(int argc, char *argv[])
{
	FILE *fp = NULL;
	if (argc == 2)
	{
		fp = fopen(argv[1], "rb");
		if (fp == NULL)
		{
			perror("Failed to open file.");
			return -1;
		}
		else
		{
			yyin = fp;
		}
	}
	yyparse();

	if(fp != NULL)
	{
		fclose(fp);
	}
	return 0;

}

int yyerror(const char *p)
{ 
	printf("%s in line %d. %d:%d - %d:%d\n", p, yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column);
	return 0;
}
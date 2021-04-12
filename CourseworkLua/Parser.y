%{
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
#include <stdarg.h> //va_list

FILE *yyin;
int yyerror();
extern int yylex();

extern char* yytext;
extern int brackets;
extern int yylineno;
extern void DEBUGPRINT(char* format, ...);

#define YYERROR_VERBOSE 1
#define DEBUG_BISON

void DEBUGPRINT_BISON(char* format, ...)
{
	#ifdef DEBUG_BISON
		va_list args;
		va_start(args, format);
		vprintf(format, args);
		va_end(args);
	#endif
}


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

main: chunk				{ DEBUGPRINT_BISON("\nMAIN: chunk"); }
;

statement: IF chunk END
		 | IF chunk THEN chunk END
;

chunk: chunk chunk 		{ DEBUGPRINT_BISON("\nCHUNK: chunk chunk"); }
	 | var '=' exp 		{ DEBUGPRINT_BISON("\nCHUNK: var = exp"); }
	 | RETURN exp 		{ DEBUGPRINT_BISON("\nCHUNK: RETURN exp"); }
	 | exp 				{ DEBUGPRINT_BISON("\nCHUNK: exp"); }
	 | function 		{ DEBUGPRINT_BISON("\nCHUNK: function"); }
	 | function_call	{ DEBUGPRINT_BISON("\nCHUNK: function_call"); }
;

function_call: NAME all_args 					{ DEBUGPRINT_BISON("\nFUNCTION_CALL: NAME ( exp )"); }
;

function: FUNCTION NAME simple_args chunk END 	{ DEBUGPRINT_BISON("\nFUNCTION: FUNCTION NAME ( args ) chunk END "); }
		| FUNCTION NAME simple_args END 		{ DEBUGPRINT_BISON("\nFUNCTION: FUNCTION NAME ( args ) EMPTY_BODY END "); } // Function with empty body
;

simple_args: '(' simple_args_part ')'
		   | '(' NAME ')'
;

simple_args_part: simple_args_part ',' NAME 	{ DEBUGPRINT_BISON("\nSIMPLE_ARGS_PART: simple_args_part , NAME"); }
				| NAME ',' NAME 				{ DEBUGPRINT_BISON("\nSIMPLE_ARGS_PART: NAME , NAME "); }
;

all_args: '(' all_args_part ')' 				{ DEBUGPRINT_BISON("\nALL_ARGS: ( all_args_part )"); }
		| '(' exp ')' 							{ DEBUGPRINT_BISON("\nALL_ARGS: ( exp )"); }
;

all_args_part: simple_args_part ',' exp			{ DEBUGPRINT_BISON("\nALL_ARGS_PART: simple_args_part , exp"); }
			 | exp ',' exp	 					{ DEBUGPRINT_BISON("\nALL_ARGS_PART: exp , exp"); }
;

exp:  NIL 			{ DEBUGPRINT_BISON("\nEXP: NIL"); }
	| FALSE 		{ DEBUGPRINT_BISON("\nEXP: FALSE"); }
	| TRUE			{ DEBUGPRINT_BISON("\nEXP: TRUE"); }
	| DOTS			{ DEBUGPRINT_BISON("\nEXP: DOTS"); }
	/*| functiondef 
	| prefixexp 
	| tableconstructor */
	| '(' exp ')'	{ DEBUGPRINT_BISON("\nEXP: ( exp )"); }
	| exp BINOP exp { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
	| exp MINUS exp { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }
	| UNOP exp 		{ DEBUGPRINT_BISON("\nEXP: UNOP exp"); }
	| MINUS exp 	{ DEBUGPRINT_BISON("\nEXP: MINUS exp"); }
	| numeral		{ DEBUGPRINT_BISON("\nEXP: numeral"); }
	| literalString { DEBUGPRINT_BISON("\nEXP: literalString"); }
	| var 			{ DEBUGPRINT_BISON("\nEXP: var"); } // Fuck!
;

var:  NAME 				{ DEBUGPRINT_BISON("\nVAR: NAME"); }
	| NAME '.' NAME 	{ DEBUGPRINT_BISON("\nVAR: NAME . NAME"); }
	| NAME '[' exp ']' 	{ DEBUGPRINT_BISON("\nVAR: NAME [ NAME ]"); }
;

literalString:	ONEQSTRING 		{ DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
				| TWOQSTRING	{ DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); }
				| LONGSTRING 	{ DEBUGPRINT_BISON("\nVAR: LONGSTRING"); }/* TODO */
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
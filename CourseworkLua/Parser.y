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
%token BINOP UNOP MINUS ASSIGN

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

main: field_list			{ DEBUGPRINT_BISON("\nMAIN: field_list"); }
	| name_list 			{ DEBUGPRINT_BISON("\nMAIN: name_list"); }
;

name_list: name_list ',' NAME 			{ DEBUGPRINT_BISON("\nBODY_CONSTRUCTOR: name_list ',' NAME"); }
		 | NAME ',' NAME 				{ DEBUGPRINT_BISON("\nBODY_CONSTRUCTOR: NAME ',' NAME"); }
		 | NAME 						{ DEBUGPRINT_BISON("\nBODY_CONSTRUCTOR: NAME"); }

body_constructor: '{' field_list '}'	{ DEBUGPRINT_BISON("\nBODY_CONSTRUCTOR: '{' field_list '}'"); }
				| '{' '}' 				{ DEBUGPRINT_BISON("\nBODY_CONSTRUCTOR: '{' '}'"); }
;


field_list: field_list field_sep  		{ DEBUGPRINT_BISON("\nFIELD_LIST: field_list field_sep"); }
		  /* Recursion element collector */
		  | field_list field_sep field 	{ DEBUGPRINT_BISON("\nFIELD_LIST: field_list field_sep field"); }

		  /* This line is the start point element list collector */
		  | field field_sep field 		{ DEBUGPRINT_BISON("\nFIELD_LIST: field field_sep field"); }

		  /* Single element collector */
		  | field  						{ DEBUGPRINT_BISON("\nFIELD_LIST: field"); }

		  /* Resolve [field ,] .field->field_list then field_list->field can't resolve =() */
		  | field field_sep 			{ DEBUGPRINT_BISON("\nFIELD_LIST: field field_sep"); }
;


field: '[' exp ']' '=' exp 	{ DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); }
	 | NAME '=' exp 		{ DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); }
	 | exp 					{ DEBUGPRINT_BISON("\nFIELD: exp"); }
;


field_sep: ','
		 | ';'
;


exp:  NIL 			{ DEBUGPRINT_BISON("\nEXP: NIL"); }
	| FALSE 		{ DEBUGPRINT_BISON("\nEXP: FALSE"); }
	| TRUE			{ DEBUGPRINT_BISON("\nEXP: TRUE"); }
	| DOTS			{ DEBUGPRINT_BISON("\nEXP: DOTS"); }

	//| '(' exp ')'	{ DEBUGPRINT_BISON("\nEXP: ( exp )"); }
	| exp BINOP exp { DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
	| exp MINUS exp { DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }
	| UNOP exp 		{ DEBUGPRINT_BISON("\nEXP: UNOP exp"); }
	| MINUS exp 	{ DEBUGPRINT_BISON("\nEXP: MINUS exp"); }

	| numeral		{ DEBUGPRINT_BISON("\nEXP: numeral"); }
	| literalString { DEBUGPRINT_BISON("\nEXP: literalString"); }
;


literalString:	ONEQSTRING 		{ DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
				| TWOQSTRING	{ DEBUGPRINT_BISON("\nVAR: TWOQSTRING"); }
				| LONGSTRING 	{ DEBUGPRINT_BISON("\nVAR: LONGSTRING"); }/* TODO */
				//| LongString
;


numeral:  INT 					{ DEBUGPRINT_BISON("\nNUMERAL: INT"); }
		| HEX 					{ DEBUGPRINT_BISON("\nNUMERAL: HEX"); }
		| FLOAT 				{ DEBUGPRINT_BISON("\nNUMERAL: FLOAT"); }
		| HEX_FLOAT 			{ DEBUGPRINT_BISON("\nNUMERAL: HEX_FLOAT"); }
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
	printf("\n%s in line %d. %d:%d - %d:%d\n", p, yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column);
	return 0;
}
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

/* Looping */
%token DO WHILE FOR UNTIL REPEAT END GOTO IN

/* Functions */
%token FUNCTION BREAK RETURN LABEL_DEF

/* If/else statements */
%token IF THEN ELSEIF ELSE

/* Values */
%token LOCAL

/* Operators */
%left BINOP UNOP MINUS

%left UMINUS


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

main: block				{ DEBUGPRINT_BISON("\nMAIN: block"); }
;

/* ===> Block */
block: stat_list 		{ DEBUGPRINT_BISON("\nBLOCK: stat_list"); }
	 | stat_list ret 	{ DEBUGPRINT_BISON("\nBLOCK: stat_list ret"); }
;

stat_list: stat_list opt_stat 	{ DEBUGPRINT_BISON("\nSTAT_LIST: stat_list opt_stat"); }
		 | opt_stat   			{ DEBUGPRINT_BISON("\nSTAT_LIST: opt_stat"); }
;

opt_stat: stat 			{ DEBUGPRINT_BISON("\nOPT_STAT: stat"); }
		| /* empty */	{ DEBUGPRINT_BISON("\nOPT_STAT: empty"); }
/* <=== Block */


stat: ';' 									{ DEBUGPRINT_BISON("\nSTAT: ';'"); }	
	| var_list '=' exp_list 				{ DEBUGPRINT_BISON("\nSTAT: var_list '=' exp_list"); }	
	| function_call 						{ DEBUGPRINT_BISON("\nSTAT: function_call"); }	

	| label 								{ DEBUGPRINT_BISON("\nSTAT: label"); }	
	| BREAK 								{ DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }	
	| GOTO NAME 							{ DEBUGPRINT_BISON("\nSTAT: GOTO NAME"); }	

	| while_do 								{ DEBUGPRINT_BISON("\nSTAT: while_do"); }	

	| statement 							{ DEBUGPRINT_BISON("\nSTAT: statement"); }	
	| for_cycle 							{ DEBUGPRINT_BISON("\nSTAT: for_cycle"); }	

	| FUNCTION function_name function_body 	{ DEBUGPRINT_BISON("\nSTAT: FUNCTION function_name function_body"); }	

	| locals 								{ DEBUGPRINT_BISON("\nSTAT: locals"); }	
;

/* ===> While_do */
while_do: DO block END
		| WHILE exp DO block END
		| REPEAT block UNTIL exp
/* <=== While */


/* ===> Locals */
locals: LOCAL FUNCTION NAME function_body
	  /* Optional '=' exp_list token */
	  | LOCAL attr_list
	  | LOCAL attr_list '=' exp_list
/* <=== Locals */


/* ===> For_cycle */
for_cycle: FOR NAME '=' exp_list DO block END
		 | FOR exp_list IN exp_list DO block END
;
/* <=== For_cycle */


/* ===> Statement */
statement: if_start END 					{ DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block END"); }	
		 /* Optional else_if token */
		 | if_start else_if END 			{ DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if END"); }
		 | if_start ELSE block END 			{ DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block ELSE block END"); }
		 | if_start else_if ELSE block END 	{ DEBUGPRINT_BISON("\nSTATEMENT: IF exp THEN block else_if ELSE block END"); }
;

if_start: IF exp THEN block					{ DEBUGPRINT_BISON("\nEIF_START: IF exp THEN"); }	
;

else_if: else_if ELSEIF exp THEN block 		{ DEBUGPRINT_BISON("\nELSE_IF: else_if ELSEIF exp THEN block"); }	
	   | ELSEIF exp THEN block 				{ DEBUGPRINT_BISON("\nELSE_IF: ELSEIF exp THEN block"); }	
;
/* <=== Statement */



/* ===> Attr_list */
attr_list: attr_list ',' NAME attr 	{ DEBUGPRINT_BISON("\nATTR_LIST: attr_list ',' NAME attr"); }	
		 | NAME attr 				{ DEBUGPRINT_BISON("\nATTR_LIST: NAME attr"); }	
;
/* ===> Attr_list */


/* ===> Attr */
attr: '<' NAME '>' 			 	{ DEBUGPRINT_BISON("\nATTR: '<' NAME '>'"); }	
	| /* empty */ 				{ DEBUGPRINT_BISON("\nATTR: empty"); }
;
/* ===> Attr */


/* ===> Ret */
/* All possible combinations: RETURN optional(exp_list) optional(';') */
ret: RETURN 					{ DEBUGPRINT_BISON("\nRET: RETURN"); }
   | RETURN ';' 				{ DEBUGPRINT_BISON("\nRET: RETURN ;'"); }
   | RETURN exp_list 			{ DEBUGPRINT_BISON("\nRET: RETURN exp_list"); }
   | RETURN exp_list ';'  		{ DEBUGPRINT_BISON("\nRET: RETURN exp_list ';'"); }
 ;
/* <=== Ret */


/* ===> Label */
label: LABEL_DEF NAME LABEL_DEF { DEBUGPRINT_BISON("\nLABEL: LABEL_DEF NAME LABEL_DEF"); }
;
/* <=== Label */


/* ===> Function_name */
/* Optional ':' NAME context */
function_name: function_name_part 			{ DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part"); }
			 | function_name_part ':' NAME 	{ DEBUGPRINT_BISON("\nFUNCTION_NAME: function_name_part ':' NAME"); }
;

/* Recursion */
function_name_part: function_name_part '.' NAME 	{ DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: function_name_part '.' NAME"); }
				  | NAME 							{ DEBUGPRINT_BISON("\nFUNCTION_NAME_PART: NAME"); }
;
/* <=== Function_name */


/* ===> Var_list block */
var_list: var_list ',' var 					{ DEBUGPRINT_BISON("\nVAR_LIST: var_list ',' var"); }
		| var 								{ DEBUGPRINT_BISON("\nVAR_LIST: var"); }
;
/* <=== Var_list block */


/* ===> Var block */
var: NAME 									{ DEBUGPRINT_BISON("\nVAR: NAME"); }
   | prefix_exp '[' exp ']' 				{ DEBUGPRINT_BISON("\nVAR: prefix_exp '[' exp ']'"); }
   | prefix_exp '.' NAME 					{ DEBUGPRINT_BISON("\nVAR: prefix_exp '.' NAME"); }
;
/* <=== Var block */


/* ===> Prefix_exp block */
prefix_exp: var 							{ DEBUGPRINT_BISON("\nPREFIX_EXP: var"); }
		  | function_call 					{ DEBUGPRINT_BISON("\nPREFIX_EXP: function_call"); }
		  | '(' exp ')' 					{ DEBUGPRINT_BISON("\nPREFIX_EXP: '(' exp ')'"); }
;
/* <=== Prefix_exp block */


/* ===> Function */
function_def: FUNCTION function_body 		{ DEBUGPRINT_BISON("\nFUNCTION_BODY: FUNCTION function_body"); }
;

function_body: '(' ')' block END 			{ DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' ')' block END"); }
			 | '(' par_list ')' block END 	{ DEBUGPRINT_BISON("\nFUNCTION_BODY: '(' par_list ')' block END"); }
;
/* <=== Function */


/* ===> Function_call block */
function_call: prefix_exp args 				{ DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp args"); }
			 | prefix_exp ':' NAME args 	{ DEBUGPRINT_BISON("\nFUNCTION_CALL: prefix_exp ':' Name args"); }
;
/* <=== Function_call block */


/* ===> Args block */
args: '(' ')' 				{ DEBUGPRINT_BISON("\nARGS: '(' ')'"); }
	| '(' exp_list ')' 		{ DEBUGPRINT_BISON("\nARGS: '(' exp_list ')'"); }
	| table_body 			{ DEBUGPRINT_BISON("\nARGS: '(' name_list ')'"); }
	| literalString 		{ DEBUGPRINT_BISON("\nARGS: literalString"); }
;
/* <=== Args block */


/* ===> Par_list block */
par_list: name_list  			{ DEBUGPRINT_BISON("\nPAR_LIST: name_list"); }
		| name_list ',' DOTS 	{ DEBUGPRINT_BISON("\nPAR_LIST: name_list ',' DOTS"); }
		| DOTS 					{ DEBUGPRINT_BISON("\nPAR_LIST: DOTS"); }
;
/* ===> Par_list block */


/* ===> Exp_list block */
exp_list: exp_list ',' exp 		{ DEBUGPRINT_BISON("\nEXP_LIST: exp_list ',' exp"); }
		| exp 					{ DEBUGPRINT_BISON("\nEXP_LIST: exp"); }
;
/* <=== Exp_list block */



/* ===> Name_list block */
name_list: name_list ',' NAME 	{ DEBUGPRINT_BISON("\nNAME_LIST: name_list ',' NAME"); }
		 | NAME 				{ DEBUGPRINT_BISON("\nNAME_LIST: NAME"); }
;
/* <=== Name_list block */


/* ===> Table_body block */
table_body: '{' '}' 			{ DEBUGPRINT_BISON("\nTABLE_BODY: '{' '}' "); }
		  | '{' field_list '}' 	{ DEBUGPRINT_BISON("\nTABLE_BODY: '{' field_list '}'"); }
;
/* <=== Table_body block */


/* ===> Field_list block */
/* Context with optional field_sep */
field_list: field_list_part field_sep  		{ DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part field_sep"); }
		  | field_list_part 		 		{ DEBUGPRINT_BISON("\nFIELD_LIST: field_list_part"); }
;

/* Recursion */
field_list_part: field_list_part field_sep field	{ DEBUGPRINT_BISON("\nFIELD_LIST_PART: field_list_part field_sep"); }
			   | field 								{ DEBUGPRINT_BISON("\nFIELD_LIST_PART: field"); }
;
/* <=== Field_list block */


field: '[' exp ']' '=' exp 	{ DEBUGPRINT_BISON("\nFIELD: '[' exp ']' '=' exp"); }
	 | NAME '=' exp 		{ DEBUGPRINT_BISON("\nFIELD: NAME '=' exp"); }
	 | exp 					{ DEBUGPRINT_BISON("\nFIELD: exp"); }
;


field_sep: ',' 				{ DEBUGPRINT_BISON("\nFIELD_SEP: ','"); }
		 | ';' 				{ DEBUGPRINT_BISON("\nFIELD_SEP: ';'"); }
;


exp: NIL 			{ DEBUGPRINT_BISON("\nEXP: NIL"); }
   | FALSE 			{ DEBUGPRINT_BISON("\nEXP: FALSE"); }
   | TRUE			{ DEBUGPRINT_BISON("\nEXP: TRUE"); }
   | DOTS			{ DEBUGPRINT_BISON("\nEXP: DOTS"); }

   | '(' exp ')' 	{ DEBUGPRINT_BISON("\nEXP: '(' exp ')' "); }
   | exp BINOP exp 	{ DEBUGPRINT_BISON("\nEXP: exp BINOP exp"); }
   | exp MINUS exp 	{ DEBUGPRINT_BISON("\nEXP: exp MINUS exp"); }

   /* Because '<' NAME '>' is attribute */
   | exp '<' exp %prec MINUS	{ DEBUGPRINT_BISON("\nEXP: exp '<' exp"); }
   | exp '>' exp %prec MINUS 	{ DEBUGPRINT_BISON("\nEXP: exp '>' exp"); }

   /* Unary and binary */
   | MINUS exp 		{ DEBUGPRINT_BISON("\nEXP: MINUS exp"); }   
   | UNOP exp 		{ DEBUGPRINT_BISON("\nEXP: UNOP exp"); }   
   | numeral		{ DEBUGPRINT_BISON("\nEXP: numeral"); }
   | literalString 	{ DEBUGPRINT_BISON("\nEXP: literalString"); }
   | table_body 	{ DEBUGPRINT_BISON("\nEXP: table_body"); }
   
   | function_def 	{ DEBUGPRINT_BISON("\nEXP: function_def"); }
   | function_call 	{ DEBUGPRINT_BISON("\nEXP: function_call"); }

   | var 			{ DEBUGPRINT_BISON("\nEXP: function_call"); }
;


literalString: ONEQSTRING 	{ DEBUGPRINT_BISON("\nVAR: ONEQSTRING"); }
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
%{

#include "Parser.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>
#include <stdarg.h> //va_list

#define fileno _fileno
#define noyywrap
#define DEBUG

#define YY_USER_ACTION \
yylloc.first_line = yylloc.last_line; \
yylloc.first_column = yylloc.last_column; \
for(int i = 0; yytext[i] != '\0'; i++) { \
if(yytext[i] == '\n') { \
yylloc.last_line++; \
yylloc.last_column = 0; \
} \
else { \
yylloc.last_column++; \
} \
}

void DEBUGPRINT(char* format, ...) // должен быть хотя бы один аргумент
	{
#ifdef DEBUG 
		va_list args;
		va_start(args, format);
		vprintf(format, args);
		va_end(args);
#endif
	}

%}

%option noyywrap yylineno

%%
[ \t\n\r\f\v\a]			/* Ignore */
("not"|"#"|"~")			{ DEBUGPRINT("\nLex: operation UNOP: %s", yytext); return UNOP; }
("+"|"*"|"/"|"//"|"^"|"%"|"&"|"~"|"|"|">>"|"<<"|".."|"<"|"<="|">"|">="|"=="|"~="|"and"|"or") { DEBUGPRINT("\nLex: operation BINOP: %s", yytext); return BINOP; }
"-"						{ DEBUGPRINT("\nLex: operation SUB: %s", yytext); return SUB; }
"nil"					{ DEBUGPRINT("\nLex: operation NIL: %s", yytext); return NIL; }
"false"					{ DEBUGPRINT("\nLex: operation FALSE: %s", yytext); return FALSE; }
"true"					{ DEBUGPRINT("\nLex: operation TRUE: %s", yytext); return TRUE; }

[0-9]+					{ DEBUGPRINT("\nLex: operation INT: %s", yytext); return INT; }
(0)[xX][0-9a-fA-F]+		{ DEBUGPRINT("\nLex: operation HEX: %s", yytext); return HEX; }

[0-9]+(.)([0-9])*([eE][+-]?[0-9]+)?						{ DEBUGPRINT("\nLex: operation FLOAT_1: %s", yytext); return FLOAT; }
(.)[1-9]+([eE][+-]?[0-9]+)?								{ DEBUGPRINT("\nLex: operation FLOAT_2: %s", yytext); return FLOAT; }
[0-9]+([eE][+-]?[0-9]+)									{ DEBUGPRINT("\nLex: operation FLOAT_3: %s", yytext); return FLOAT; }

(0)[xX]([0-9a-fA-F]+)(.)([0-9a-fA-F]*)([pP][+-]?[0-9]+)?	{ DEBUGPRINT("\nLex: operation HEX_FLOAT_1: %s", yytext); return HEX_FLOAT; }
(0)[xX](.)([0-9a-fA-F]+)([pP][+-]?[0-9]+)?					{ DEBUGPRINT("\nLex: operation HEX_FLOAT_2: %s", yytext); return HEX_FLOAT; }
(0)[xX]([0-9a-fA-F]+)([pP][+-]?[0-9]+)						{ DEBUGPRINT("\nLex: operation HEX_FLOAT_3: %s", yytext); return HEX_FLOAT; }
.						{
							printf("At line: %d. ", yylineno);
							printf("Error code: 21. Unknown symbol\n");
							exit(-1);
						}

%%
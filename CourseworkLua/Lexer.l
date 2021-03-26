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
.						{
							printf("At line: %d. ", yylineno);
							printf("Error code: 21. Unknown symbol\n");
							exit(-1);
						}

%%
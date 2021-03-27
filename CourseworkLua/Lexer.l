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


/* TEST IT SECTION */

//UtfEscape
//LONGSTR_LVL


/*TODO LIST!!!*/

//To do LONGSTR
//LONGSTR_LVL add the laziness of the | ' [' .*? ']'


%}

%option noyywrap yylineno

Digit					[0-9]
HexDigit				[0-9a-fA-F]
Exponent				[eE][+-]?[0-9]+
HexExponent				[pP][+-]?[0-9]+
DecimalEscape			(\\{Digit})|(\\{Digit}{Digit})
HexEscape				(\\)(x){HexDigit}{HexDigit}
UtfEscape				(\\)(u\{){HexDigit}+(\}) 
EscapeSequence			(\\[abfnrtvz\"\'\\])|(\\(\r)?\n)|{DecimalEscape}|{HexEscape}|{UtfEscape}
LONGSTR_LVL1			(=){LONGSTR_LVL1}(=)

%%
[ \t\n\r\f\v\a]			/* Ignore */
[a-zA-Z_][a-zA-Z_0-9]*	{ DEBUGPRINT("\nLex: NAME: %s", yytext); return NAME; }
("not"|"#"|"~")			{ DEBUGPRINT("\nLex: operation UNOP: %s", yytext); return UNOP; }
("+"|"*"|"/"|"//"|"^"|"%"|"&"|"~"|"|"|">>"|"<<"|".."|"<"|"<="|">"|">="|"=="|"~="|"and"|"or") { DEBUGPRINT("\nLex: operation BINOP: %s", yytext); return BINOP; }
"="						{ DEBUGPRINT("\nLex: operation equall: %s", yytext); return yytext[0]; }
"-"						{ DEBUGPRINT("\nLex: operation SUB: %s", yytext); return SUB; }
"nil"					{ DEBUGPRINT("\nLex: operation NIL: %s", yytext); return NIL; }
"false"					{ DEBUGPRINT("\nLex: operation FALSE: %s", yytext); return FALSE; }
"true"					{ DEBUGPRINT("\nLex: operation TRUE: %s", yytext); return TRUE; }
{Digit}+				{ DEBUGPRINT("\nLex: Numeral INT: %s", yytext); return INT; }
(0)[xX]{HexDigit}+		{ DEBUGPRINT("\nLex: Numeral HEX: %s", yytext); return HEX; }

{Digit}+(.){Digit}*{Exponent}?						{ DEBUGPRINT("\nLex: Numeral FLOAT_1: %s", yytext); return FLOAT; }
(.){Digit}+{Exponent}?								{ DEBUGPRINT("\nLex: Numeral FLOAT_2: %s", yytext); return FLOAT; }
{Digit}+{Exponent}									{ DEBUGPRINT("\nLex: Numeral FLOAT_3: %s", yytext); return FLOAT; }

(0)[xX]{HexDigit}+(.){HexDigit}*{HexExponent}?		{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_1: %s", yytext); return HEX_FLOAT; }
(0)[xX](.){HexDigit}+(HexExponent)?					{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_2: %s", yytext); return HEX_FLOAT; }
(0)[xX]{HexDigit}+{HexExponent}						{ DEBUGPRINT("\nLex: Numeral HEX_FLOAT_3: %s", yytext); return HEX_FLOAT; }

(\")([^\\\"]|{EscapeSequence})*(\")					{ DEBUGPRINT("\nLex: TWOQSTRING: %s", yytext); return TWOQSTRING; }
(\')([^\\\']|{EscapeSequence})*(\')					{ DEBUGPRINT("\nLex: ONEQSTRING: %s", yytext); return ONEQSTRING; }
"--"(.*|EOF)										{ /* one line comment */}

(...)					{ DEBUGPRINT("\nLex: VARARG: %s", yytext); return VARARG; }
.						{
							printf("At line: %d. ", yylineno);
							printf("Error code: 21. Unknown symbol\n");
							exit(-1);
						}

%%
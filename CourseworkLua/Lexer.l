%{

#include "Parser.tab.h"
#include <stdlib.h>
#include <stdio.h>
#include <string.h>

#define fileno _fileno
#define noyywrap

int brackets = 0;

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
%}

%option noyywrap yylineno
%x C_COMMENT

%%
[ \t\n\r\f\v\a]			/* Ignore */
"/*"					{ BEGIN(C_COMMENT); }
<C_COMMENT>"*/"			{ BEGIN(INITIAL); }
<C_COMMENT>.			{ }
<C_COMMENT>\n			{ }
";"						return ENDL;
[a-z]					{
							yylval.num = yytext[0];
							return LETTER;
						}
[A-Z]([^ = -+^*;]+)	{
							printf("At line: %d. ", yylineno);
							printf("Error code: 22. Incorrect polynom name\n");
							exit(-1);
						}
(-)(-)+					{
							printf("At line: %d. ", yylineno);
							printf("Error code: 23. Do not use '-' like this\n");
							exit(-1);
						}
(\+)(\+)+					{
							printf("At line: %d. ", yylineno);
							printf("Error code: 23. Do not use '+' like this\n");
							exit(-1);
						}
[A-Z]					{
							yylval.num = yytext[0];
							return VAR;
						}
[0-9]					{
							yylval.num = atoi(yytext);
							return DIGIT;
						}

[\*+-^=#]				return yytext[0];
"(" 					{
							brackets++;
							return yytext[0];
						}
")" 					{
							brackets--;
							return yytext[0];
						}
.						{
							printf("At line: %d. ", yylineno);
							printf("Error code: 21. Unknown symbol\n");
							exit(-1);
						}

%%
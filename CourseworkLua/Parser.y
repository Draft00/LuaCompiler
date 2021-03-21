%{
#define _CRT_SECURE_NO_WARNINGS
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>
FILE *yyin;
int yyerror();
extern int yylex();

extern int brackets;
extern int yylineno;

#define DEBUG
#define YYERROR_VERBOSE 1
#define SIZE 10

struct polynomial
	{
		int coefs[SIZE];
	};
int var_polynomial[26][SIZE+1] = {0};

enum CodeError {
    DIFFVAR = 1,
    NEG_DEGREE,
    TOOMUCHDEGREE,
    MISSINGBR,
    ZERODEGREEZERO,
	INCORRECTDEGREE,
	NOTDEFINEDPOLY
    //некорректное имя полинома в лексе
    //неизвестный символ
};

void parse_code_error(int code)
{
	//printf("Location: first line: %d, first column: %d, last line: %d,  last column: %d\n", yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column);
	printf("At line: %d. ", yylineno);
	switch(code)
	{
	    case DIFFVAR:
        {
        	printf("Error code: %d. Different variables\n", code);
        	break;
        }
	    case NEG_DEGREE:
	    {
        	printf("Error code: %d. Negative degree\n", code);
        	break;
        }
	    case TOOMUCHDEGREE:
	    {
	    	printf("Error code: %d. Too much degree\n", code);
	    	break;
	    }
	    case MISSINGBR:
	    {
	    	if (brackets < 0)
	    		printf("Error code: %d. Lost (\n", code);
			else printf("Error code: %d. Lost )\n", code);
			break;
	    }
	    case ZERODEGREEZERO:
	    {
	    	printf("Error code: %d. 0^0 is uncertainty\n", code);
	    	break;
	    }
		case INCORRECTDEGREE:
		{
			printf("Error code: %d. x_convol^x_convol is incorrect\n", code);
			break;
		}
		case NOTDEFINEDPOLY:
		{
			printf("Error code: %d. x_convol^(NOT DEFINУD POLYNOM) is incorrect\n", code);
			break;
		}
	}
	exit(1);

}

int check_x_convol_degree(int* source)
{
	for (int i = 1; i < SIZE; i++)
		if (source[i] != 0)
			parse_code_error(INCORRECTDEGREE);
	if (source[0] != 0)
		return 1;
	return 1;
}

void init_polynomial(int *dest, int *coefs, int name)
	{
		if (dest == NULL) return;
		if (dest[SIZE] != '\0' && name != dest[SIZE]) { //возможно, уже лишнее. проверить.
			parse_code_error(DIFFVAR);
		}

		memset(dest, 0, sizeof(int)*SIZE);
		if (coefs != NULL) memcpy(dest, coefs, sizeof(int)*SIZE);
		if (dest[SIZE] == '\0') dest[SIZE] = name; 
	}

void copy_polynomial(int *dest, int *src)
{
	if (dest == NULL || src == NULL) return;
	if (dest[SIZE] != '\0' && src[SIZE] != dest[SIZE]) {
			parse_code_error(DIFFVAR);
		}
	memcpy(dest, src, sizeof(int)*SIZE);
	if (dest[SIZE] == '\0') dest[SIZE] = src[SIZE];
}

void check_x(int *dest, int* src)
{
	if (dest[SIZE] != '\0' && src[SIZE] != '\0')
	{
		if (src[SIZE] != dest[SIZE]) parse_code_error(DIFFVAR);
	}
}

int set_name(int* poly1, int* poly2)
{
	if (poly1[SIZE] != '\0')
		return poly1[SIZE];
	else if (poly2[SIZE] != '\0')
		return poly2[SIZE];
	else return '\0';
}
void check_degree(int degree)
{
	if (degree < 0)
	{
		parse_code_error(NEG_DEGREE);
	}
	if (degree > SIZE)
	{
		parse_code_error(TOOMUCHDEGREE);
	}
}

// Устанавливает коэффицент coef для степени i полинома dest.
void set_coef(int *dest, int i, int coef)
{
	if (dest == NULL) return;
	if (i >= SIZE) {printf("set_coef(): i >= SIZE\n"); return; }
	dest[i] = coef;
}

void print_in_file(int* coefs)
{
	FILE* fout = fopen("answer.txt", "a");
	int *pcoefs = coefs;

		fprintf(fout, "[ANS %d]: ", yylineno);
		char buf[SIZE*5];
		char *p = buf;
		memset(buf, 0, sizeof(buf));

		for (int i = SIZE - 1; i >= 0; i--)
		{
			int coef = coefs[i];
			if (coef == 0) continue;

			if (i == 0)
			{
				if (coef > 0)
				{ sprintf(p, "+"); p += 1; }

				sprintf(p, "%d", coef);
				p = buf + strlen(buf);
				continue;
			}

			if (coef > 0)
			{ sprintf(p, "+"); p += 1; }
			else
			{ sprintf(p, "-"); p += 1; }

			if (abs(coef) != 1)
			{
				sprintf(p, "%d", abs(coef));
				p = buf + strlen(buf);
			}

			if (i > 1) {
				sprintf(p, "(x");
			}

			else sprintf(p, "x");
			p = buf + strlen(buf);

			if (i > 1)
			{
				sprintf(p, "^%d)", i);
				p = buf + strlen(buf);
			}
		}

		if (p == buf) fprintf(fout, "0\n");
		else fprintf(fout, "%s\n", *buf == '+' ? buf + 1 : buf);
		fclose(fout);
}

void print(int *coefs)
	{
		int *pcoefs = coefs;

		printf("[ANS %d]: ", yylineno);
		char buf[SIZE*5];
		char *p = buf;
		memset(buf, 0, sizeof(buf));

		for (int i = SIZE - 1; i >= 0; i--)
		{
			int coef = coefs[i];
			if (coef == 0) continue;

			if (i == 0)
			{
				if (coef > 0)
				{ sprintf(p, "+"); p += 1; }

				sprintf(p, "%d", coef);
				p = buf + strlen(buf);
				continue;
			}

			if (coef > 0)
			{ sprintf(p, "+"); p += 1; }
			else
			{ sprintf(p, "-"); p += 1; }

			if (abs(coef) != 1)
			{
				sprintf(p, "%d", abs(coef));
				p = buf + strlen(buf);
			}
			//printf ("%d CODE\n", coefs[SIZE]);
			char name = coefs[SIZE];
			if (i > 1) {
				sprintf(p, "(%c", name);
			}

			else sprintf(p, "%c", name);
			p = buf + strlen(buf);

			if (i > 1)
			{
				sprintf(p, "^%d)", i);
				p = buf + strlen(buf);
			}
		}

		if (p == buf) printf("0\n");
		else printf("%s\n", *buf == '+' ? buf + 1 : buf);
	}

void debug(char* str, int *dest)
	{
		#ifdef DEBUG
		int *coefs = dest;
		printf("%s:\t", str);
		for (int i = 0; i < SIZE; i++)
			printf("%d\t", coefs[i]);
		printf("\n");
		#endif
	}

%}

%locations 

%union {
    int num;
    char ch; 
    int coefs[1000]; 			//уже не видит SIZE
    //struct polynomial* poly; 	//только указатель, иначе забыла какая уже ошибка
    							// от указателя на структуру пришлось отказаться, т.к. 
    							//возникают большие сложности с malloc при использовании рекурсии. можно каждый раз смотреть в функции копирования и инициализации, если указатель NULL, то malloc.
}


%token DIGIT LETTER ENDL VAR COMMENT

/* section the priority of operations. from top to bottom in ascending order */

%right	'='
%left	'+' '-'
%left	'(' ')'
%left	'*' '/' //деление отсутствует, но так на всякий
%right	'^'
%left	UMINUS

%type	<coefs> 	main
%type	<coefs>		x_convol	//калькулятор полиномов с x
%type	<coefs>		var_convol 	//обработка полиномов, которым присвоены значения
%type	<coefs>		abb_mult 	//сокращенный вид. 2х, 2(ч+1)
%type 	<num>		number		//правило составления числа
%type	<num>		DIGIT
%type	<num>		LETTER
%type	<num>		ENDL
%type	<coefs> 	line
%type	<num>		VAR
%type	<num>		COMMENT


%start main


%%
/*================ 2. The Grammar Section ================================*/

main: 	line 
		| main line
;

line: 	x_convol ENDL {
			debug("main", $1);
			print($1);
		}
		| var_convol ENDL
		//| COMMENT{printf("comment\n");}
;
var_convol:
		VAR '=' x_convol
			{
				var_polynomial[$1 - 'A'][SIZE] = '\0';
				init_polynomial(var_polynomial[$1 - 'A'], $3, $3[SIZE]);
				copy_polynomial($$, $3);
				debug("VAR = convol", var_polynomial[$1 - 'A']);
			}
		| '#' VAR
			{
				printf("%c", $2);
				print(var_polynomial[$2 - 'A']);
			}
;

x_convol: LETTER
			{
				init_polynomial($$, NULL, $1);
				$$[1] = 1;
				debug("x_convol: LETTER", $$);
			}
		| number
			{
				init_polynomial($$, NULL, '\0');
				$$[0] = $1;
				debug("x_convol: number", $$);
			}
		/*| number '^' x_convol
			{
				init_polynomial($$, NULL, '\0');
				check_degree($3[0]);
				if ($3[0] == 0 && $1 == 0) parse_code_error(ZERODEGREEZERO);
				if ($3[0] == 0)
					$$[0] = 1;
				else
				{
					$$[0] = $1;
					for (int j = 1; j < $3[0]; j++)
						$$[0] *= $1;
				}
				debug("x_convol: number^x_convol", $$);
			}
		*/
		| VAR
			{
				copy_polynomial($$, var_polynomial[$1 - 'A']);
				debug("x_convol: VAR", $$);
			}
		/*| LETTER '^' x_convol
			{
				if (check_x_convol_degree($3))
				{
					check_degree($3[0]);
					init_polynomial($$, NULL, $1);
					if ($3[0] == 0) $$[0] = 1;
					else {
						int num = $3[0];
						$$[num] = 1;
					}
					debug("LETTER^x_convol", $$);
				}
			}
			*/
		| '(' x_convol ')'
			{
				copy_polynomial($$, $2);
				debug("(x_convol)", $$);
			}
		| '-' x_convol %prec UMINUS
			{
				copy_polynomial($$, $2);
				for (int i = 0; i < SIZE; i++)
					$$[i] *= -1;

				debug("-x", $$);
			}
		|	x_convol '+' x_convol
			{
				check_x($1, $3);
				$$[SIZE] = set_name($1, $3);
				for (int i = 0; i < SIZE; i++)
				 	$$[i] = $1[i] + $3[i];
				debug("x+x", $$);
			}
		|	x_convol '-' x_convol
			{
				check_x($1, $3);
				$$[SIZE] = set_name($1, $3);
				for (int i = 0; i < SIZE; i++)
					$$[i] = $1[i] - $3[i];

				debug("x_c-x_c", $$);
			}
		|	x_convol '*' x_convol
			{
				check_x($1, $3);
			    int name = set_name($1, $3);
				init_polynomial($$, NULL, name);
				for (int i = 0; i < SIZE; i++) {
					for (int j = 0; j < SIZE; j++)
					{
						int coef = $1[i] * $3[j];
						if (i + j < SIZE)
							$$[i + j] += coef;
						else if (coef != 0) {
							parse_code_error(TOOMUCHDEGREE);
						}
					}
				}

				debug("x_convol*x_convol", $$);
			}
				/*| '(' x_convol ')' '^' x_convol
					{
						if (check_x_convol_degree($5))
						{
							check_degree($5[0]);
							if ($5[0] == 0)
							{
								int name = set_name($2, $5);
								init_polynomial($$, NULL, name);
								$$[0] = 1;
							}
							else
							{
								copy_polynomial($$, $2);
								int buf[SIZE];

								for (int k = 1; k < $5[0]; k++)
								{
									memset(buf, 0, sizeof(buf));
									for (int i = SIZE - 1; i >= 0; i--)
									{
										if ($$[i] == 0) continue;
										for (int j = SIZE - 1; j >= 0; j--)
										{
											if ($2[j] == 0) continue;
											int coef = $$[i] * $2[j];
											if (i + j < SIZE)
												buf[i + j] += coef;
											else if (coef != 0)
											{
												parse_code_error(TOOMUCHDEGREE);
											}
										}
									}
									memcpy($$, buf, SIZE * sizeof(int));
								}
							}
							debug("(x_convol)^x_convol", $$);
						}
					}
					*/
			| x_convol '^' x_convol
			{
				if (check_x_convol_degree($3))
				{
					check_degree($3[0]);
					if ($3[0] == 0)
					{
						if ($1[0] == 0) parse_code_error(ZERODEGREEZERO);
						int name = set_name($1, $3);
						init_polynomial($$, NULL, name);
						$$[0] = 1;
					}
					else
					{
						copy_polynomial($$, $1);
						int buf[SIZE];

						for (int k = 1; k < $3[0]; k++)
						{
							memset(buf, 0, sizeof(buf));
							for (int i = SIZE - 1; i >= 0; i--)
							{
								if ($$[i] == 0) continue;
								for (int j = SIZE - 1; j >= 0; j--)
								{
									if ($1[j] == 0) continue;
									int coef = $$[i] * $1[j];
									if (i + j < SIZE)
										buf[i + j] += coef;
									else if (coef != 0)
									{
										parse_code_error(TOOMUCHDEGREE);
									}
								}
							}
							memcpy($$, buf, SIZE * sizeof(int));
						}
					}
					debug("x_convol ^x_convol", $$);
				}
			}
		| abb_mult
			{
				copy_polynomial($$, $1);
			}
;

//идея создать отедльное рекурсивное правила по типу ( x_convol ) | правило ( x_convol ) даже выглядит как плохая и оказывается таковой, потому что 5 sh\sh конфликтов 
abb_mult: 
		number LETTER
			{
				init_polynomial($$, NULL, $2);
				$$[1] = $1;
				debug("abb: number x", $$);
			}
		| number LETTER '^' x_convol
			{
				if (check_x_convol_degree($4)) 
				{
					check_degree($4[0]);
					init_polynomial($$, NULL, $2);
					if ($4 == 0) $$[0] = $1;
					else {
						int num = $4[0];
						$$[num] = $1;
					}
					debug("abb: number x^(num_c)", $$);
				}
			}
		/*| LETTER '(' x_convol ')'
		{
			if ($3[SIZE] != '\0' && $1 != $3[SIZE]) parse_code_error(DIFFVAR);

			init_polynomial($$, NULL, $1);
			for (int j = 0; j < SIZE; j++)
			{
				int coef = $3[j];
				if (j + 1 < SIZE)
					$$[1+j] += coef;
				else if (coef != 0) {
					parse_code_error(TOOMUCHDEGREE);
				}
			}
			debug("abs: LETTER(x_convol)", $$);
		}
			//
		| abb_mult LETTER 
		{
			if ($1[SIZE] != '\0' && $2 != $1[SIZE]) parse_code_error(DIFFVAR);
			init_polynomial($$, NULL, $2);
			for (int j = 0; j < SIZE; j++)
			{
				int coef = $1[j];
				if (j + 1 < SIZE)
					$$[1+j] += coef;
				else if (coef != 0) {
					parse_code_error(TOOMUCHDEGREE);
				}
			}
			debug("abs: (x)x", $$);
		}
		*/
		/*
		| number '(' x_convol ')'
			{
				copy_polynomial($$, $3);
				for (int i = 0; i < SIZE; i++)
					$$[i] *= $1;
				debug("abb: number (x)", $$);
			}
		*/
		/*| '(' x_convol ')' number //add
			{
				copy_polynomial($$, $2);
				for (int i = 0; i < SIZE; i++)
					$$[i] *= $4;
				debug("abb: (X)num", $$);
			}
		| '(' x_convol ')' '(' x_convol ')'
			{
				check_x($2, $5);
				int name = set_name($2, $5);
				init_polynomial($$, NULL, name);
				for (int i = SIZE-1; i >= 0; i--)
				{
					if ($2[i] == 0) continue;
					for (int j = SIZE-1; j >= 0; j--)
					{
						if ($5[j] == 0) continue;

						int coef = $2[i] * $5[j];
						if (i + j < SIZE)
							$$[i+j] += coef;
						else if (coef != 0) {
							parse_code_error(TOOMUCHDEGREE);
						}
					}
				}
				debug("abb:(x)(x)", $$);
			}
			*/
	    /*
		| abb_mult number //+3 shift/red conflict
			{
				copy_polynomial($$, $1);
				for (int i = 0; i < SIZE; i++)
					$$[i] *= $2;
				debug("abb num ", $$);
			}
		*/
		//| abb_mult '(' x_convol ')' ^ x_convol
		/*| x_convol x_convol %prec '*'//+ 4 sh/red конфликт
		{
			check_x($1, $2);
			int name = set_name($1, $2);
			init_polynomial($$, NULL, name);
			for (int i = SIZE - 1; i >= 0; i--)
			{
				if ($1[i] == 0) continue;
				for (int j = SIZE - 1; j >= 0; j--)
				{
					if ($2[j] == 0) continue;

					int coef = $1[i] * $2[j];
					if (i + j < SIZE)
						$$[i + j] += coef;
					else if (coef != 0) {
						parse_code_error(TOOMUCHDEGREE);
					}
				}
			}
			debug("abb(x)", $$);
		}
		*/
;

number: DIGIT
			{
				$$ = $1;
			}
		|	number DIGIT
			{
				$$ = $1 * 10 + $2;
			}
;
%%

int parser_main(int argc, char *argv[])
{
	FILE *fp = NULL;
	if (argc == 2)
	{
		fopen_s(&fp, argv[1], "rb");
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
	if (brackets != 0) {
		parse_code_error(MISSINGBR);
	}
	printf("%s in line %d. Location: first line: %d, first column: %d, last line: %d,  last column: %d\n", p, yylineno, yylloc.first_line, yylloc.first_column, yylloc.last_line, yylloc.last_column);
	return 0;
}
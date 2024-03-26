#ifndef PRINT
#define PRINT

#include <stdlib.h>
#include <stdarg.h>
#include <stdio.h>

/**
 * struct print - Struct print
 *
 * @op: The operator
 * @f: The function print
 */
typedef struct print
{
	char *type;
	void (*f)(va_list ap);
} print_type;


int _putchar(char c);
void print_all(const char * const format, ...);
int func_char(va_list list);
int func_string(va_list list);
int func_percent(va_list list);



#endif

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
int _printf(const char *format, ...);

#endif

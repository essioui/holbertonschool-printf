#ifndef PRINTF_H
#define PRINTF_H

#include <stdarg.h>
#include <stdio.h>
#include <stdlib.h>
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

int _printf(const char *format, ...);
int _putchar(char c);

#endif
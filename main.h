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
void print_number(int n);
void print_unsigned(unsigned int n);
void print_hex_low(unsigned int n);
void print_hex_upper(unsigned int n);
void print_oct(unsigned int n);
int _strlen(const char *str);
void print_char(char c);
void print_str(const char *str);
int _printf(const char *format, ...);

void handle_char(va_list args, int *i);
void handle_string(va_list args, int *i);
void handle_decimal(va_list args);
void handle_unsigned(va_list args);
void handle_hex_low(va_list args);
void handle_hex_upper(va_list args);
void handle_oct(va_list args);
void handle_percent(int *i);
void handle_default(const char *format, int *i);




#endif
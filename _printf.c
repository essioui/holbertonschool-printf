#include "main.h"

/**
 * _printf - Produces output according to a format.
 * @format: A character string containing directives.
 * Return: The number of characters printed (excluding the null byte).
 */
int _printf(const char *format, ...)
{
va_list args;
int i = 0;
int a;
unsigned int n, b;
char *str;
char c;

va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
switch (*format)
{
case 'c':
c = va_arg(args, int);
_putchar(c);
i++;
break;
case 's':
str = va_arg(args, char *);
if (str == NULL)
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
i += 6;
}
else
while (*str)
{
_putchar(*str);
str++;
i++;
}
break;

case 'd':
a = va_arg(args, int);
print_number(a);
break;

case 'i':
a = va_arg(args, int);
print_number(a);
break;

case 'u':
n = va_arg(args, unsigned int);
print_unsigned(n);
break;

case 'x':
n = va_arg(args, unsigned int);
print_hex_low(n);
break;

case 'X':
n = va_arg(args, unsigned int);
print_hex_upper(n);
break;

case 'o':
b = va_arg(args, int);
print_oct(b);
break;




case '%':
_putchar('%');
i++;
break;
default:
_putchar('%');
_putchar(*format);
i += 2;
break;
}
}
else
{
_putchar(*format);
i++;
}

format++;
}

va_end(args);
return (0);
}

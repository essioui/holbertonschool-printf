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
while (*str)
{
_putchar(*str);
str++;
i++;
}
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

return i;
}

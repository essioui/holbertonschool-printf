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
va_start(args, format);
while (*format)
{
if (*format == '%')
{
format++;
if (*format == '\0')
{
return (i - 1);
break;
}
switch (*format)
{
case 'c':
print_char(va_arg(args, int));
i++;
break;
case 's':
print_str(va_arg(args, char *));
i++;
break;
case 'd':
print_number(va_arg(args, int));
break;
case 'i':
print_number(va_arg(args, int));
break;
case 'u':
print_unsigned(va_arg(args, unsigned int));
break;
case 'x':
print_hex_low(va_arg(args, unsigned int));
break;
case 'X':
print_hex_upper(va_arg(args, unsigned int));
break;
case 'o':
print_oct(va_arg(args, int));
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
return (i);
}

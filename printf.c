/**
 * try write other printf with other syntax
*/
#include "main.h"

int _printf(const char *format, ...)
{
int counter;

while (*format)
{
    if (*format == '%')
    {
    format++;
    if (*format == '%')
    {
        _putchar('%');
        counter++;
    }
    else if (*format == 'c')
    {
        /* code */
    }
    else if (*format == 's')
    {
        /* code */
    }
    else if ((*format == 'd') || (*format == 'i'))
    {
        /* code */
    }
    else
    _putchar(*format);
    }
    _putchar(*format);
    format++;
}
return (0);
}

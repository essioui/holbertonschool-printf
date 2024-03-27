#include "main.h"
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
int _printf(const char *format, ...)
{
    va_list args;
    va_start(args, format);
    while (*format != '\0')
    {
        switch (*format)
        {
            case '%':
                format++;

                 switch (*format)
                {
                    case 'c':
                    _putchar(va_arg(args, int) + '0');
                    break;
                    case 's':
                    {
                        char *str = va_arg(args, char*);
                        while (*str)
                        {
                            _putchar(*str);
                            str++;
                        }  
                    }
                    break;
                    case '%':
                    _putchar(args);
                    break;
            
                default:
                _putchar(*format);
                break;
                }
            break;
         default:
         _putchar(*format);
            break;
        }
        format++;
    }
    va_end(args);
}

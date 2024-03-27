/*
#include <stdarg.h>
#include <stdio.h>

int _printf(const char *format, ...) {
    va_list args;
    int len = 0;
    va_start(args, format);

    

    while (*format) {
        switch (*format) {
            case '%':
                format++;
                switch (*format) {
                    case 'c':
                        putchar(va_arg(args, int));
                        len++;
                        break;
                    case 's':
                        {
                            char *str = va_arg(args, char *);
                            while (*str) {
                                putchar(*str++);
                                len++;
                            }
                        }
                        break;
                    case '%':
                        putchar('%');
                        len++;
                        break;
                    default:
                        putchar('%');
                        putchar(*format);
                        len += 2;
                        break;
                }
                break;
            default:
                putchar(*format);
                len++;
                break;
        }
        format++;
    }

    va_end(args);
    return len;
}
*/
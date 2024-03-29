#include "main.h"

int _printf(const char *format, ...) {
    va_list args;
    int i = 0;
    va_start(args, format);
    while (*format) {
        if (*format == '%') {
            format++;
            if (*format == '\0') {
                return (i - 1);
                break;
            }
            switch (*format) {
                case 'c':
                    handle_char(args, &i);
                    break;
                case 's':
                    handle_string(args, &i);
                    break;
                case 'd':
                case 'i':
                    handle_decimal(args);
                    break;
                case 'u':
                    handle_unsigned(args);
                    break;
                case 'x':
                    handle_hex_low(args);
                    break;
                case 'X':
                    handle_hex_upper(args);
                    break;
                case 'o':
                    handle_oct(args);
                    break;
                case '%':
                    handle_percent(&i);
                    break;
                default:
                    handle_default(format, &i);
                    break;
            }
        } else {
            _putchar(*format);
            i++;
        }
        format++;
    }
    va_end(args);
    return (i);
}

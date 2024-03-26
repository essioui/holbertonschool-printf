#include "main.h"
#include <stdarg.h>

/**
 * print_all - Prints anything
 * @format: Types of arguments passed to function
 */
void print_all(const char * const format, ...)
{
    print_type types[] = {
        {"c", func_char},
        {"s", func_string},
        {"f", func_percent},
        {NULL, NULL}
    };
    va_list list;


    int count = 0;
    va_start(list, format);
    //code: count = ; 
    va_end(list);
    return(count);
}

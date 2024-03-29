#include "main.h"
/**
 * 
*/
void handle_default(const char *format, int *i) 
{
_putchar('%');
_putchar(*format);
(*i) += 2;
}
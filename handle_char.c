#include "main.h"
void handle_char(va_list args, int *i)
{
char c = va_arg(args, int);
_putchar(c);
(*i)++;
}
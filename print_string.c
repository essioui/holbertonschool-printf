#include "main.h"
/**
 * 
*/
void print_str(const char *str)
{
if (str == NULL)
{
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
}
else
while (*str)
{
_putchar(*str);
str++;
}
}

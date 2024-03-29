#include "main.h"
void handle_string(va_list args, int *i) {
char *str = va_arg(args, char *);
if (str == NULL) {
_putchar('(');
_putchar('n');
_putchar('u');
_putchar('l');
_putchar('l');
_putchar(')');
(*i) += 6;
} 
else 
{
while (*str) {
_putchar(*str++);
(*i)++;
}
}
}
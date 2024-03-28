#include "main.h"
/**
* print_number - print numbers
* @n: integer
*/
void print_number(int n)
{
int i = 10;
unsigned int p;
p = n;
if (n < 0)
{
p = -n;
_putchar('-');
}
while (p / i > 9)
{
i *= 10;
}
if (p > 9)
while (i >= 10)
{
_putchar(p / i + '0');
p = p % i;
i /= 10;
}
_putchar(p % 10 + '0');
}

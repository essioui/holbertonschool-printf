#include "main.h"
/**
* print_number - print numbers
* @n: integer
*/
void print_unsigned(unsigned int n)
{
int i = 10;

while (n / i > 9)
{
i *= 10;
}
if (n > 9)
while (i >= 10)
{
_putchar(n / i + '0');
n = n % i;
i /= 10;
}
_putchar(n % 10 + '0');
}

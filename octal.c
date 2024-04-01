#include "main.h"
/**
 * 
*/
void print_oct(unsigned int n)
{
    if (n >= 8)
    {
        print_oct(n / 8);
    }
    _putchar('0' + (n % 8));
}

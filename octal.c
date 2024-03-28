#include "main.h"
/**
 * 
*/
void print_oct(unsigned int n)
{
    int i = 0, tmp = 0, j;
    int arr[100];

    if (n == 0)
    _putchar('0');
    while (n != 0)
    {
        tmp = n % 8;
        if (tmp < 8)
        arr[i] = 48 + tmp;
        n = n / 16;
        i++;  
    }

    for (j = i - 1; j >= 0; j--)
    _putchar(arr[j]);
    
}
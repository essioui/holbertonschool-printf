#include "main.h"
/**
 * print_hex_low - function print number of type hexadecimal lowercase
 * @n: integer
*/
void print_hex_low(unsigned int n)
{
    int i = 0, tmp = 0, j;
    int arr[128];

    if (n == 0)
    _putchar('0');
    while (n != 0)
    {
        tmp = n % 16;
        if (tmp < 10)
        arr[i] = 48 + tmp;
        else
        arr[i] = 87 +tmp;
        n /= 16;
        i++;  
    }

    for (j = i - 1; j >= 0; j--)
    _putchar(arr[j]);
    
}


/**
 * print_hex_upper - function print number of type hexadecimal uppercase
 * @n: integer
*/
void print_hex_upper(unsigned int n)
{
    int i = 0, tmp = 0, j;
    int arr[128];

    if (n == 0)
    _putchar('0');
    while (n != 0)
    {
        tmp = n % 16;
        if (tmp < 10)
        arr[i] = 48 + tmp;
        else
        arr[i] = 55 +tmp;
        n /= 16;
        i++;  
    }

    for (j = i - 1; j >= 0; j--)
    _putchar(arr[j]);
    
}
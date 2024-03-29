#include "main.h"
/**
 * 
*/
void handle_unsigned(va_list args) 
{
unsigned int n = va_arg(args, unsigned int);
print_unsigned(n);
}
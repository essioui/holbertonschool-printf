#include "main.h"
/**
 * 
*/
void handle_hex_upper(va_list args) 
{
unsigned int n = va_arg(args, unsigned int);
print_hex_upper(n);
}
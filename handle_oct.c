#include "main.h"
/**
 * 
*/
void handle_oct(va_list args) 
{
unsigned int b = va_arg(args, int);
print_oct(b);
}
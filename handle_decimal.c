#include "main.h"
/**
 * 
*/
void handle_decimal(va_list args) 
{
int a = va_arg(args, int);
print_number(a);
}
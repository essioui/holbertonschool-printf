#include "main.h"

#include "main.h"

/**
 * print_char - Prints a char
 * @args: Argument pointer
 */
int func_char(va_list args)
{
	char c;

	c = (va_arg(args, int));
	_putchar(c);
	return (1);
}




/**
 * print_string - Prints a string
 * @args: Argument pointer
 */
void func_string(va_list args)
{
	int i;
	char *ptr;

	ptr = (va_arg(args, char *));
	if (ptr == 0)
		ptr = "(null)";
	for (i = 0; ptr[i] != 0; i++)
		_putchar(ptr[i]);
}

/**
 * print_percent - Prints an percent
 * @args: Argument pointer
 */
void func_percent(va_list args)
{
    putchar('%');
}

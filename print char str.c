#include "main.h"

#include "main.h"

/**
 * print_char - Prints a char
 * @ap: Argument pointer
 */
int func_char(va_list list)
{
	char c;

	c = (va_arg(list, int));
	_putchar(c);
	return (1);
}




/**
 * print_string - Prints a string
 * @ap: Argument pointer
 */
int func_string(va_list list)
{
	int i;
	char *ptr;

	ptr = (va_arg(list, char *));
	if (ptr == 0)
		ptr = "(null)";
	for (i = 0; ptr[i] != 0; i++)
		_putchar(ptr[i]);
	return (i);
}

/**
 * print_percent - Prints an percent
 * @ap: Argument pointer
 */
int func_percent(va_list list)
{
    putchar('%');
	return (1);
}

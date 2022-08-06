#include "main.h"
#include <stdarg.h>

/**
* _printstring - accepts a pointer to @str then prints
* @str: The address of string to be printed
* return: 1 on success -1 on failure
*
*/

int _printstring(va_list args)
{
	int n_displayed = 0;
	int k = 0;
	char *str = va_arg(args, char *);
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		n_displayed++;
		k++;
	}

	return (n_displayed);
}

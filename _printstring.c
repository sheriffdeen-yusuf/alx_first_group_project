#include "main.h"
#include <stdarg.h>

/**
* _printstring - accepts a pointer to @str then prints
* @args: The arguments
* Return: n characted displayed
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

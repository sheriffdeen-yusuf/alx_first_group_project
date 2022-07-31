#include "main.h"

/**
* _printstring - accepts a pointer to @str then prints
* @str: The address of string to be printed
* return: 1 on success -1 on failure
*
*/

int _printstring(char *str)
{
	int k = 0;
	while (str[k] != '\0')
	{
		_putchar(str[k]);
		k++;
	}

	return (0);
}

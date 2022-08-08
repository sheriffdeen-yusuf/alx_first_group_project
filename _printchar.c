#include "main.h"
#include <stdarg.h>

/**
* _printchar - accept a argument @c and prints
* @args: the paramter to be printed
*
* Return: prints char to stdout
*/

int _printchar(va_list args)
{
	char c = va_arg(args, int);

	return (_putchar(c));
}

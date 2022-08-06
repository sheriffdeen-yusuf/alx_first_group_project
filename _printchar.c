#include "main.h"
#include <stdarg.h>

/**
* _printchar - accept a argument @c and prints
* @c: the paramter to be printed
*
* Return: 1 on succes -1 otherwise
*/

int _printchar(va_list args)
{
	char c = va_arg(args, int);
	return (_putchar(c));
}

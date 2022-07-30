#include <stdarg.h>

/**
* printf - accepts arguments and display the number of 
* arguments passed as parameters.
*
* return: number of args
*/

int printf(const char * const format, ...)
{
	va_list = args;
	int i, n_number = 0;

	va_start(args, format);

	while (format[i] != '\0')
	{
		if (_putchar(format[i] != -1)
			n_number++;
		i++;
	}

	va_end(args);

	return (n_number);
}

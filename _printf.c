#include "main.h"
#include <stdarg.h>
#include <stddef.h>
/**
* _printf - prints variable number of arguments
* @format: the first paramter start
* @... : variable number of arguments after @format
* Return: number of args
*/

int _printf(const char * const format, ...)
{
	va_list args;
	int i = 0, num = 0, n_displayed = 0;
	char *str = NULL;

	va_start(args, format);
	int (*func)(va_list);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				n_displayed += func(args);
				i++;
			}
		}
		i++;
	}
	va_end(args);
	return (n_displayed);
}

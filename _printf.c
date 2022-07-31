#include "main.h"
#include <stdarg.h>
#include <stddef.h>

/**
* printf - accepts arguments and display the number of 
* arguments passed as parameters.
*
* return: number of args
*/

int _printf(const char * const format, ...)
{
	
	va_list args;
	int i = 0, k = 0;
	int n_displayed = 0;
	char *str = NULL;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_putchar(format[i]);
			n_displayed++;
		}
		else
		{
			/* format[i] = % */
			if (format[i + 1] == 'c')
			{
				_putchar(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				k = 0;
				while (str[k] != '\0')
				{
					_putchar(str[k]);
					n_displayed++;
					k++;
				}
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_putchar('%');
				n_displayed++;
			}
		}
		i++;
	}

	va_end(args);

	return (n_displayed);
}

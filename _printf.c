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
	int i = 0, num = 0;
	int n_displayed = 0;
	char *str = NULL;
	va_start(args, format);

	while (format[i] != '\0')
	{
		if (format[i] != '%')
		{
			_printchar(format[i]);
			n_displayed++;
		}
		else
		{
			/* format[i] = % */
			if (format[i + 1] == 'c')
			{
				_printchar(va_arg(args, int));
				n_displayed++;
				i++;
			}
			else if (format[i + 1] == 's')
			{
				i++;
				str = va_arg(args, char *);
				_printstring(str);
				/* n_displayed++; */
			}
			else if (format[i + 1] == '%')
			{
				i++;
				_printchar('%');
				n_displayed++;
			}
			else if (format[i + 1] == 'd')
			{
				i++;
				num = va_arg(args, int);
				_printint(num);
				n_displayed++;
			}
		}
		i++;
	}

	va_end(args);

	return (n_displayed);
}

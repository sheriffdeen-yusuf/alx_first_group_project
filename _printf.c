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
			/** This Three lines of code is an improvement of 
			* the lengthy if else statement that checks a type of
			* format specifier then calls the appopriate print helper
			* for the format. 
			* Now, _select_func is a function pointer to all helper 
			* function of ssme prototype parameter 'args'. 
			* it accepts a char, and checks if is a define specifier 
			* then returns pointer to its print helper function.
			**/

			func = _select_func(format[i + 1]);
			if (func != NULL)
			{
				n_displayed += func(args);
				i++;
				
			}
		
				/** remember, n_displayed is not define in
				* _printstring(args), hence in correct displayed
				* count ->  n_displayed++; 
				*/
			
		}
		i++;
	}

	va_end(args);

	return (n_displayed);
}

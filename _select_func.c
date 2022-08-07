#include "main.h"
#include <stddef.h>

/**
* _select_func - accepts a type of va_list and points
* to a pointer func
* @c: param its accepts
* va_list: variable args list
* Return: a pointer to function
*/

int (*_select_func(char c))(va_list)
{
	if (c == 'c')
		return (_printchar);
	if (c == 's')
		return (_printstring);
	if (c == 'd')
		return (_printint);

	return (NULL);
}

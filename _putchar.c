#include <unistd.h>

/**
* _putchar - prints to stdout
* @c: sccepts c
* Return: 1 if success 0 otherwise
*/
int _putchar(char c)
{
	return (write(1, &c, 1));
}

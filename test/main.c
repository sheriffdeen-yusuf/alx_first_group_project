#include <stdio.h>
#include "../main.h"

int main()
{
	int n = 0;
	n = _printf("name is: %s, grade is: %c %%\n", "musa", 'A');
	printf("n: %d\n", n);

	n = printf("name is: %s, grade is: %c %%\n", "musa", 'A');
	printf("n: %d\n", n);
	return (0);
}

#include <stdio.h>
#include "../main.h"

int main()
{
	int n = 0;
	n = _printf("name is: %s, grade is %c \n", "lekenzd", 'D');
	printf("n: %d\n", n);

	
	n = _printf("name is: %s, grade is %c \n", "lekenzd", 'D');
	printf("n: %d\n", n);
	return (0);
}

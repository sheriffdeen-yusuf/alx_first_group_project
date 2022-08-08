#include <stdio.h>
#include "../main.h"

int main()
{
	int n = 0;
	n = _printf("name is: %s, grade is %c, %s %% \n", "lekenzd", 'D', "40");
	printf("n: %d\n", n);

	
	n = printf("name is: %s, grade is %c, %d %% \n", "lekenzd", 'D', 40);
	printf("n: %d\n", n);
	return (0);
}

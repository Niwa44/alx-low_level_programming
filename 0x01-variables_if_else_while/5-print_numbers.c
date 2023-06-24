#include <stdio.h>

int main() 
{
	int number;
	for (number = 0; number < 10; number++)
	{
		putchar(number + '0');
	}
	putchar('\n');
	return 0;
}

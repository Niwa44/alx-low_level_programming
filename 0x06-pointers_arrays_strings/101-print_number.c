#include "main.h"
/**
 * function that prints an integer.
 *
 * Prototype: void print_number(int n);
 * You can only use _putchar function to print
 * You are not allowed to use long
 * You are not allowed to use arrays or pointers
 * You are not allowed to hard-code special values
 * retuning nothing
 */
int base10(int n)
{
	int base = 10;
	while (n > 0)
	{
		base *= 10;
		n--;
	}
	return (base);
}


void print_number(int n)
{
	int power;
	power = base10(8);
	if (n < 0)
	{
		_putchar('-');
		n *= -1;
	}
	if (n == 0)
		_putchar('0');
	else
	{
		while (n / power == 0)
			power /= 10;
		while (power >= 1)
		{
			_putchar((n / power) + '0');
			n %= power;
			power /= 10;
		}
	}
}

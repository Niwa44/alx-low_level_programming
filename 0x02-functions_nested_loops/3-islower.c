#include "main.h"

/*
 * _islower - check main.h
 * @c: An input character
 * Description: fuction uses _putchar fuction to print
 * alphabet in lowercase 10 times
 * Return: 1 if is lowercase or 0 if its uppercase
 */
int _islower(int c)
{
	if (c > 96 && c < 123)
		return (1);
	else
		return (0);

}

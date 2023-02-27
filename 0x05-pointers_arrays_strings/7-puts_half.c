#include"main.h"
/**
 * Write a function that prints half of a string, followed by a new line.
 *
 * Prototype: void puts_half(char *str);
 * The function should print the second half of the string
 * If the number of characters is odd, the function should print the last n characters of the string, where n = (length_of_the_string - 1) / 2
 */
void puts_half(char *str)
{
	int len = 0, i, n;
	while (str[len] != '\0')
		len++;
	if (len % 2 == 0)
		n = len / 2;
	else
		n = (len + 1) / 2;
	for (i = n; i < len; i++)
		_putchar(str[i]);
	_putchar('\n');
}


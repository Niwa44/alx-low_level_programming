#include"main.h"
/**
 * Write a function that prints a string, followed by a new line, to stdout
 * @str: an input string
 * Return nothing
 */
void _puts(char *str)
{
	int i = 0;

	while(str[i] != '\0')
	{
		_putchar(str[i]);
		i++;
	}
	_putchar('\n');
}

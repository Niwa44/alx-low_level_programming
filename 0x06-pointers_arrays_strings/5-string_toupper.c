#include "main.h"
/**
 * Write a function that changes all lowercase letters of a string to uppercase.
 *
 * Prototype: char *string_toupper(char *);
 * returning nothing
 */
char *string_toupper(char *s)
{
	char *start = s;
	while (*s)
	{
		if (*s >= 'a' && *s <= 'z')
			*s -= 32;
		s++;
	}
	return (start);
}


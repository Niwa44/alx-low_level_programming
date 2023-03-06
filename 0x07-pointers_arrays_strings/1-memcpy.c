#include "main.h"
/**
 * Write a function that copies memory area.
 *
 * Prototype: char *_memcpy(char *dest, char *src, unsigned int n);
 * The _memcpy() function copies n bytes from memory area src to memory area dest
 * Returns a pointer to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	char *start = dest;
	while (n--)
	{
		*dest = *src;
		src++;
		dest++;
	}
	return (start);
}

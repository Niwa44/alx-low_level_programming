#include"main.h"

/**
 * Write a function that checks for alphabetic character
 * @c is a letter, lowercase or uppercase
 */
int _isalpha(int c)
{
	/*int c;*/

	if((c > 96 && c < 123) || (c > 64 && c < 91 ))
		return (1);
	else 
		return (0);
}

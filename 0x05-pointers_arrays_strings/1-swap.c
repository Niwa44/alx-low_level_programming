#include"main.h"
/**
 * Write a function that swaps the values of two integers.
 * @a: an input interger pointer
 * @b: an input interger pointer
 * Returning nothing
 */
void swap_int(int *a, int *b)
{
	int aux;

	aux = *a;
	*a = *b;
	*b = aux;
}

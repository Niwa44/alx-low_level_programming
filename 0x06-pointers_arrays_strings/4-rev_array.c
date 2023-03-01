#include "main.h"
/**
 * Write a function that reverses the content of an array of integers.
 *
 * Prototype: void reverse_array(int *a, int n);
 * Where n is the number of elements of the array
 * Return noyhing
 */
void reverse_array(int *a, int n)
{
	int i = 0;
	int aux;
	while (i < n--)
	{
		aux = a[i];
		a[i++] = a[n];
		a[n] = aux;
	}
}

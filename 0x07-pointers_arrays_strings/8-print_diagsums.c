#include "main.h"
#include <stdio.h>

/**
 * Write a function that prints the sum of the two diagonals of a square matrix of integers.
 *
 * Prototype: void print_diagsums(int *a, int size);
 * Format: see example
 * You are allowed to use the standard library
 * Note that in the following example we are casting an int[][] into an int*. This is not something you should do. The goal here is to make sure you understand how an array of array is stored in memory.
 */
void print_diagsums(int *a, int size)
{
	int i = 0, max = size * size, sum1 = 0, sum2 = 0;
	for (; i < max; i += size + 1)
		sum1 += a[i];
	for (i = size - 1; i < max - 1; i += size - 1)
		sum2 += a[i];
	printf("%d, %d\n", sum1, sum2);
}


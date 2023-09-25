#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of two diagonals of a square matrix
 * @a: 2D array
 * @size: the size of the array
 * Return: Always 0
 */
void print_diagsums(int *a, int size)
{
	int sum1 = 0, sum2 = 0, c;

	for (c = 0; c < size; c++)
	{
		sum1 = sum1 + a[c * size + c];
	}

	for (c = size - 1; c >= 0; c--)
	{
		sum2 += a[c * size + (size - c - 1)];
	}

	printf("%d, %d\n", sum1, sum2);
}

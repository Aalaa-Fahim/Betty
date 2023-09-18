#include "main.h"

/**
 * print_array - a function that prints elements of an array
 * @array: array name
 * @n: the number of elements of the array to be printed
 * Return: a and n inputs
 */
void print_array(int *array, int n)
{
	int i;

	for (i = 0; i < (n - 1); i++)
	{
		printf("%d, ", array[i]);
	}
		if (i == (n - 1))
		{
			printf("%d", array[n - 1]);
		}
			printf("\n");
}

#include "main.h"

/**
 * flip_bits - returns the number of bits to flip
 * @n: the first number
 * @m: the second number
 *
 * Return: number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int i, c = 0;
	unsigned long int inclusive, exclusive = n ^ m;

	for (i = 63; i >= 0; i--)
	{
		inclusive = exclusive >> i;
		if (inclusive & 1)
			c++;
	}

	return (c);
}

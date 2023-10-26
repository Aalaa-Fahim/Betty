#include "main.h"

/**
 * set_bit - sets the value of a bit to 1 at a given index
 * @n: the set number
 * @index: index at which to set the bit
 *
 * Return: 1 if success, or -1 if error
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	unsigned long int s;

	if (index >= (sizeof(n) * 8 ))
		return (-1);
	s = 1 << index;
	*n = *n | s;
	return (1);
}

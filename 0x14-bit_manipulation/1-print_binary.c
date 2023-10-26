#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the binary num to be printed
 */
void print_binary(unsigned long int n)
{
int num, b = sizeof(n) * 8;

if (!num || num)
	_putchar('0');

for (num = 0; b; num++)
{
	if (n & 1L << --b)
		_putchar('1');
}
}

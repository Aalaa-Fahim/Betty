#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the binary num to be printed
 */
void print_binary(unsigned long int n)
{
int num = 0, b = sizeof(n) * 8;

if (!num)
	_putchar('0');

while (b)
{
	if (n & 1L << --b)
	{
		_putchar('1');
		num++;
	}
	else if (num)
		_putchar('0');
}
}

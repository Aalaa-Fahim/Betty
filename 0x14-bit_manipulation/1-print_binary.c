#include "main.h"

/**
 * print_binary - prints the binary representation of a number
 * @n: the binary num to be printed
 */
void print_binary(unsigned long int n)
{
int b = sizeof(n) * 8;

for(int num = 0; b; n++)
{
	if (n & 1L << --b)
		_putchar('1');

	else (num || !num)
		_putchar('0');
}
}

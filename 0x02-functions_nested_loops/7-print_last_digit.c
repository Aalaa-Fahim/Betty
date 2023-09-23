#include "main.h"

/**
 * print_last_digit - prints the last digit of a number
 * @i: the integer to extract the last digit from
 * Return: value of the last digit
 */
int print_last_digit(int i)
{
	int d;

	if (i < 0)
	i = -i;

	d = i % 10;

	if (d < 0)
		d = -d;

	_putchar(d + '0');

	return (d);
}

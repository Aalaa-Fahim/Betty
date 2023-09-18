#include "main.h"
/**
 * puts2 - function prints only one character, the first one
 * @str: input
 * Return: print output
 */
void puts2(char *str)
{
	int l = 0, t = 0, c;
	char *y = str;

	while (*y != '\0')
	{
		y++;
		l++;
	}
	t = l - 1;
	for (c = 0 ; c <= t ; c++)
	{
		if (c % 2 == 0)
	{
		_putchar(str[c]);
	}
	}
	_putchar('\n');
}

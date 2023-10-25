#include "main.h"

/**
 *_puts_recursion - prints a string, followed by a new line
 *@s: input string
 *Return: always 0
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_puts_recursion(s + 1);
		_putchar(*s);
	}
	else
		_putchar('\n');
}

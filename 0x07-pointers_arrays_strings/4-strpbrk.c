#include "main.h"

/**
 * _strpbrk -  locates the first occurrence in the first string
 * @s: input string
 * @accept: the searched-in string
 * Return: a pointer to the byte in the string
 */
char *_strpbrk(char *s, char *accept)
{
		int i;

		while (*s)
		{
			for (i = 0; accept[i]; i++)
			{
			if (*s == accept[i])
			return (s);
			}
		s++;
		}

	return ('\0');
}

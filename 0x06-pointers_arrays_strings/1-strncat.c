#include "main.h"
/**
 * _strncat - a function to concatenate two strings
 * using at most n bytes from src
 * @dest: input
 * @src: input
 * @n: input value
 *
 * Return: dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int s1, s2;

	s1 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	s2 = 0;
	while (s2 < n && src[s2] != '\0')
	{
	dest[s1] = src[s2];
	s1++;
	s2++;
	}
	dest[s1] = '\0';
	return (dest);
}

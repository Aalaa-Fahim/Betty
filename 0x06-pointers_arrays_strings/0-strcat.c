#include "main.h"
/**
 * _strcat - a pointer function that concatenates two strings
 * @dest: input
 * @src: input 
 * Return: a pointer to the resulting string dest
 */
 char *_strcat(char *dest, char *src)
 {
	int s1, s2;

	s1 = 0;
	while (dest[s1] != '\0')
	{
		s1++;
	}
	s2 = 0;
	while (src[s2] != '\0')
	{
		dest[s1] = src[s2];
		s1++;
		s2++;
	}

	dest[s1] = '\0';
	return (dest);
}

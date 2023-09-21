#include "main.h"
/**
 * leet - a function that encodes a string into 1337
 * @n: input value
 * Return: n value
 */
char *leet(char *n)
{
	int p, s;
	char s1[] = "aAeEoOtTlL";
	char s2[] = "4433007711";

	for (p = 0; n[p] != '\0'; p++)
	{
		for (s = 0; s < 10; s++)
		{
			if (n[p] == s1[s])
			{
				n[p] = s2[s];
			}
		}
	}
	return (n);
}

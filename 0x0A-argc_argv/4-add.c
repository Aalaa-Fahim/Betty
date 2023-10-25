#include <stdio.h>
#include <stdlib.h>

/**
* main - adds positive numbers
* @argc: argument numbers
* @argv: arguments
*
* Return: Always 0
*/
int main(int argc, char **argv)
{
	int i, p, sum = 0;
	char *s;

	if (argc < 2)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; argv[i]; i++)
	{
		p = strtol(argv[i], &s, 10);
		if (*s)
		{
			printf("Error\n");
			return (1);
		}
		else
		sum += p;

	}
printf("%d\n", sum);

return (0);
}

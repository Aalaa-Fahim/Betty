#include <stdio.h>
#include <stdlib.h>

/**
* main - prints the minimum number of coins
* @argc: argument num
* @argv: arguments
* Return: Always 0
*/
int main(int argc, char **argv)
{
int amount, count = 0;
unsigned int i;
char *p;
int cents[] = {25, 10, 5, 2};

if (argc != 2)
{
printf("Error\n");
return (1);
}

amount = strtol(argv[1], &p, 10);

if (!*p)
{
while (amount > 1)
{
for (i = 0; i < sizeof(cents[i]); i++)
{
	if (amount >= cents[i])
	{
		count += amount / cents[i];
		amount = amount % cents[i];
	}
}
}
if (amount == 1)
amount++;
}
else
{
printf("Error\n");
return (1);
}

printf("%d\n", amount);
return (0);
}

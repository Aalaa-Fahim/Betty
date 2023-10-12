#include <stdlib.h>
#include <stdarg.h>
#include "variadic_functions.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: one of the parameters
 *
 *Return: 0 if n == 0
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list args;
	va_start(args, n);
	unsigned int i, sum = 0;

	for (i = 0; i < n; i++)
		sum += va_arg(args, int);

	va_end(args);

	return (sum);
}

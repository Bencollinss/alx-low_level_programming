#include "main.h"

/**
 * sum_them_all - returns the sum of all its parameters
 * @n: The number of variable lists
 *
 * Return: sum of all its parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list arguments;
	int x, sum = 0;

	if (n == 0)
	{
		return (0);
	}

	va_start(arguments, n);
	for (i = 0; (const unsigned int)i < n; i++)
	{
		sum += va_arg(arguments, int);
	}
	va_end(arguments);
}

#include "variadic_functions.h"

/**
 * sum_the_all - sum of all its parameters
 * @n: number of parameters
 *
 *Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	register unsigned int i;
	va_list arguments;

	va_start(arguments, n);
	for (i = 0; i < n; i++)
		sum += va_arg(arguments, int);
	va_end(arguments);
	return (sum);
}

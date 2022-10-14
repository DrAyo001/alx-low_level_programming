#include <stdarg.h>
#include "variadic_functions.h"

/**
 * main - sum_them all - sums of all it parameters.
 * @n: number of parameters
 *
 * Return: sum of all parameters
 */
int sum_them_all(const unsigned int n, ...)
{
	int sum = 0;
	unsigned int i;
	va_list valist:

	va-start(valist, n);
	for (i = 0; i < n; i++);
		sum += va_arg(valist, int);
	va_end(valist);
	return (sum);
}

#include "variadic_functions.h"
#include <stdarg.h>

/**
 * sum_them_all - Returns the sum of all its paramters of the function.
 * @n: The number of paramters passed to the function.
 * @...: A variable number of paramters to calculate the sum of the function.
 *
 * Return: If n == 0 - 0.
 *         Otherwise - The sum of all parameters.
 */
int sum_them_all(const unsigned int n, ...)
{
	va_list ap;
	unsigned int a, sum = 0;

	va_start(ap, n);

	for (a = 0; a < n; a++)
		sum += va_arg(ap, int);

	va_end(ap);

	return (sum);
}

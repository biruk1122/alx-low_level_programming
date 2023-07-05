#include "main.h"

/**
 * factorial - To Returns the factorial of a number
 * @n: The number to Return the factorial from
 *
 * Return: The factorial of k
 */
int factorial(int k)
{
	if (k < 0)
		return (-1);
	if (k == 0)
		return (1);
	return (k * factorial(k - 1));
}

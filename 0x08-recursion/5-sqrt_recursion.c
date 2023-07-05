#include "main.h"

int actual_sqrt_recursion(int j, int k);

/**
 * _sqrt_recursion - To returns the natural square root of a number
 * @n: The number to calculate the square root of natural number 
 *
 * Return: The resulting square root of the number 
 */
int _sqrt_recursion(int j)
{
	if (j < 0)
		return (-1);
	return (actual_sqrt_recursion(j, 0));
}

/**
 * actual_sqrt_recursion - The recurses to find the natural number
 * The square root of a number
 * @n: The number to calculate the sqaure root of the number 
 * @i: The iterator
 *
 * Return: the resulting square root number 
 */
int actual_sqrt_recursion(int j, int k)
{
	if (k * k > j)
		return (-1);
	if (k * k == j)
		return (k);
	return (actual_sqrt_recursion(j, k + 1));
}

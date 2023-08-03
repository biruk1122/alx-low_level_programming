#include "main.h"

/**
 * flip_bits - Counts the number of the bits to change the element
 * to get from one number to another number of the element
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change the bit element
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int k, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (k = 63; k >= 0; k--)
	{
		current = exclusive >> k;
		if (current & 1)
			count++;
	}

	return (count);
}

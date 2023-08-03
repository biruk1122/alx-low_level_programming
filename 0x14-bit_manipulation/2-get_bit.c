#include "main.h"

/**
 * get_bit - returns the value of the bit at an index in the decimal number of the element
 * @n: number to search the value of the bit
 * @index: index of the bit number 
 *
 * Return: value of the bit number 
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_val;

	if (index > 63)
		return (-1);

	bit_val = (n >> index) & 1;

	return (bit_val);
}

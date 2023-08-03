#include "main.h"

/**
 * clear_bit - Sets the value of the  given bit number to 0
 * @n: Pointer to the number of the element to change
 * @index: index of the bit to clear the index number
 *
 * Return: 1 for success, -1 for failure
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

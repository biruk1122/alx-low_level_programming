#include "main.h"

/**
 * binary_to_uint - Converts the  binary number to the unsigned int element
 * @b: String the containing of the binary number of the element
 *
 * Return: The converted number
 */
unsigned int binary_to_uint(const char *b)
{
	int k;
	unsigned int dec_val = 0;

	if (!b)
		return (0);

	for (k = 0; b[k]; k++)
	{
		if (b[k] < '0' || b[k] > '1')
			return (0);
		dec_val = 2 * dec_val + (b[k] - '0');
	}

	return (dec_val);
}

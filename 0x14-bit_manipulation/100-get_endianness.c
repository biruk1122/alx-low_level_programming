#include "main.h"

/**
 * get_endianness - Checks wheter if the machine is a little or big endianness
 * Return: 0 for big, 1 for little
 */
int get_endianness(void)
{
	unsigned int k = 1;
	char *c = (char *) &k;

	return (*c);
}

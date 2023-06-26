#include "main.h"
/**
 * swap_int -The swaps of the values of two integers
 * @a: integer to the swap
 * @b: integer to the swap
 */
void swap_int(int *c, int *d)
{
	int m;

	m = *c;
	*c = *d;
	*d = m;
}

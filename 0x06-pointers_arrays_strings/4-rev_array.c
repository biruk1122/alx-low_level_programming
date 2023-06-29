#include "main.h"
/**
 * reverse_array - The reverse array of The integers
 * @a: array
 * @n: The number of the elements of array
 *
 * Return: void
 */
void reverse_array(int *a, int n)
{
	int c;
	int d;

	for (c = 0; c < n--; c++)
	{
		d = a[c];
		a[c] = a[n];
		a[n] = d;
	}
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * array_iterator - Prints each array element on a newl
 * @array: array
 * @size:How many element to print
 * @action: pointer to print in regular or hex
 * Return: void
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int a;

	if (array == NULL || action == NULL)
		return;

	for (a = 0; a < size; a++)
	{
		action(array[a]);
	}
}


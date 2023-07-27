#include <stdlib.h>
#include "lists.h"

/**
 * list_len - returns the number of the elements in the linked list of the elemnts
 * @h: pointer to the list_t list of the elements
 *
 * Return: number of the elements in h
 */
size_t list_len(const list_t *h)
{
	size_t k = 0;

	while (h)
	{
		k++;
		h = h->next;
	}
	return (k);
}

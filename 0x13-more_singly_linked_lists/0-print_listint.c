#include "lists.h"

/**
 * print_listint - prints all the elements of the linked list elements
 * @h: linked the list of type listint_t to print
 *
 * Return: number of nodes
 */
size_t print_listint(const listint_t *h)
{
	size_t man = 0;

	while (h)
	{
		printf("%d\n", h->n);
		man++;
		h = h->next;
	}

	return (man);
}

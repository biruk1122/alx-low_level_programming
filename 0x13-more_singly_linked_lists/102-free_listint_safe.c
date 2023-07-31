#include "lists.h"

/**
 * free_listint_safe - frees the linked list of the elements
 * @h: pointer to the first node in the first linked list
 *
 * Return: number of the elements in the freed list
 */
size_t free_listint_safe(listint_t **h)
{
	size_t biruk = 0;
	int fikadu;
	listint_t *temp;

	if (!h || !*h)
		return (0);

	while (*h)
	{
		fikadu = *h - (*h)->next;
		if (fikadu > 0)
		{
			temp = (*h)->next;
			free(*h);
			*h = temp;
			biruk++;
		}
		else
		{
			free(*h);
			*h = NULL;
			biruk++;
			break;
		}
	}

	*h = NULL;

	return (biruk);
}

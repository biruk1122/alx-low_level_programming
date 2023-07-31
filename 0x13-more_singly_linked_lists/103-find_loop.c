#include "lists.h"

/**
 * find_listint_loop - finds list of the loop in a linked list
 * @head: linked list to search for
 *
 * Return: address of the node where the loop starts, or NULL
 */
listint_t *find_listint_loop(listint_t *head)
{
	listint_t *biruk = head;
	listint_t *fikadu = head;

	if (!head)
		return (NULL);

	while (biruk && fikadu && fikadu->next)
	{
		fikadu = fikadu->next->next;
		biruk = biruk->next;
		if (fikadu == biruk)
		{
			biruk = head;
			while (biruk != fikadu)
			{
				biruk = biruk->next;
				fikadu = fikadu->next;
			}
			return (fikadu);
		}
	}

	return (NULL);
}

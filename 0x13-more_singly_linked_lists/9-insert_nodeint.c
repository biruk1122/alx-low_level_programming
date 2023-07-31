#include "lists.h"

/**
 * insert_nodeint_at_index - inserts the new node in the linked list,
 * at the given position
 * @head: pointer of the list to the first node in the list
 * @idx: index of the list where the new node is added
 * @n: data to insert in the new node of the list
 *
 * Return: pointer to the new node, or NULL
 */
listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int k;
	listint_t *new;
	listint_t *temp = *head;

	new = malloc(sizeof(listint_t));
	if (!new || !head)
		return (NULL);

	new->n = n;
	new->next = NULL;

	if (idx == 0)
	{
		new->next = *head;
		*head = new;
		return (new);
	}

	for (k = 0; temp && k < idx; k++)
	{
		if (k == idx - 1)
		{
			new->next = temp->next;
			temp->next = new;
			return (new);
		}
		else
			temp = temp->next;
	}

	return (NULL);
}

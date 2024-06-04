#include "lists.h"

/**
 * delete_nodeint_at_index - delete the node in the linked list element at the certain index
 * @head: pointer of the element to the first element in the list
 * @index: index of the node to delete
 *
 * Return: 1 (Success), or -1 (Fail)
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	listint_t *temp = *head;
	listint_t *current = NULL;
	unsigned int k = 0;

	if (*head == NULL)
		return (-1);

	if (index == 0)
	{
		*head = (*head)->next;
		free(temp);
		return (1);
	}

	while (k < index - 1)
	{
		if (!temp || !(temp->next))
			return (-1);
		temp = temp->next;
		k++;
	}

	current = temp->next;
	temp->next = current->next;
	free(current);

	return (1);
}

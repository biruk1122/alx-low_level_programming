#include "lists.h"

/**
 * sum_listint - Calculates the sum of all the data that is in the listint_t list
 * @head: first the node in the linked list
 *
 * Return: resulting add
 */
int sum_listint(listint_t *head)
{
	int add = 0;
	listint_t *temp = head;

	while (temp)
	{
		add += temp->n;
		temp = temp->next;
	}

	return (add);
}

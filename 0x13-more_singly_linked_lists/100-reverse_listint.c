#include "lists.h"

/**
 * reverse_listint - reverses the linked list of the element
 * @head: pointer to the first node in the list of the element
 *
 * Return: pointer of the elemnt in the first node in the new list
 */
listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev = NULL;
	listint_t *next = NULL;

	while (*head)
	{
		next = (*head)->next;
		(*head)->next = prev;
		prev = *head;
		*head = next;
	}

	*head = prev;

	return (*head);
}

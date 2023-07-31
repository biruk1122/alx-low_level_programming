#include "lists.h"

/**
 * add_nodeint_end - adds a node at the end of a linked list
 * @head: pointer to the first element in the list
 * @n: data to insert in the new element
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *man;
	listint_t *temp = *head;

	man = malloc(sizeof(listint_t));
	if (!man)
		return (NULL);

	man->n = n;
	man->next = NULL;

	if (*head == NULL)
	{
		*head = man;
		return (man);
	}

	while (temp->next)
		temp = temp->next;

	temp->next = man;

	return (man);
}

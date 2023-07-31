#include "lists.h"

/**
 * add_nodeint - adds the new node at the beginning of the linked list
 * @head: pointer to the first node in the list
 * @n: data to insert in that new node
 *
 * Return: pointer to the new node, or NULL if it fails
 */
listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *fikadu;

	fikadu = malloc(sizeof(listint_t));
	if (!fikadu)
		return (NULL);

	fikadu->n = n;
	fikadu->next = *head;
	*head = fikadu;

	return (fikadu);
}

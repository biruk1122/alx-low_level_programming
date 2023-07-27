#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node_end - adds the new node at the end of the linked list
 * @head: double the pointer to list_t list
 * @str: string to put in the new node
 *
 * Return: address of the new linkid list element, or NULL if it failed
 */
list_t *add_node_end(list_t **head, const char *str)
{
	list_t *helen;
	list_t *biruk = *head;
	unsigned int man = 0;

	while (str[man])
		man++;

	helen = malloc(sizeof(list_t));
	if (!helen)
		return (NULL);

	helen->str = strdup(str);
	helen->man = man;
	helen->next = NULL;

	if (*head == NULL)
	{
		*head = helen;
		return (helen);
	}

	while (biruk->next)
		biruk = biruk->next;

	biruk->next = helen;

	return (helen);
}

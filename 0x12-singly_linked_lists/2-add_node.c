#include <stdlib.h>
#include <string.h>
#include "lists.h"

/**
 * add_node - adds a new node at the beginning of a linked list
 * @head: double pointer to the list_t list
 * @str: new string to add in the node
 *
 * Return: the address of the new element, or NULL if it fails
 */
list_t *add_node(list_t **head, const char *str)
{
	list_t *helen;
	unsigned int biruk = 0;

	while (str[biruk])
		biruk++;

	helen = malloc(sizeof(list_t));
	if (!helen)
		return (NULL);

	helen->str = strdup(str);
	helen->biruk = biruk;
	helen->next = (*head);
	(*head) = helen;

	return (*head);
}

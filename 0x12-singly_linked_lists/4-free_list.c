#include <stdlib.h>
#include "lists.h"

/**
 * free_list - frees the linked list
 * @head: list_t list to be freed the element
 */
void free_list(list_t *head)
{
	list_t *biruk;

	while (head)
	{
		biruk = head->next;
		free(head->str);
		free(head);
		head = biruk;
	}
}

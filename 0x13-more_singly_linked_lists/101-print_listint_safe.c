#include "lists.h"
#include <stdio.h>

size_t looped_listint_len(const listint_t *head);
size_t print_listint_safe(const listint_t *head);

/**
 * looped_listint_len - Counts list of the number of unique nodes
 * in the looped listint_t linked list.
 * @head: A pointer of the head of the listint_t to check.
 *
 * Return: If the list is not looped - 0.
 * Otherwise - the number of the unique nodes in the list.
 */
size_t looped_listint_len(const listint_t *head)
{
	const listint_t *biruk, *fikadu;
	size_t nodes = 1;

	if (head == NULL || head->next == NULL)
		return (0);

	biruk = head->next;
	fikadu = (head->next)->next;

	while (fikadu)
	{
		if (biruk == fikadu)
		{
			biruk = head;
			while (biruk != fikadu)
			{
				nodes++;
				biruk = biruk->next;
				fikadu = fikadu->next;
			}

			biruk = biruk->next;
			while (biruk != fikadu)
			{
				nodes++;
				biruk = biruk->next;
			}

			return (nodes);
		}

		biruk = biruk->next;
		fikadu = (fikadu->next)->next;
	}

	return (0);
}

/**
 * print_listint_safe - Prints the listint_t list safely.
 * @head: A pointer to the head of the listint_t list.
 *
 * Return: The number of nodes in the list elements.
 */
size_t print_listint_safe(const listint_t *head)
{
	size_t nodes, index = 0;

	nodes = looped_listint_len(head);

	if (nodes == 0)
	{
		for (; head != NULL; nodes++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}
	}

	else
	{
		for (index = 0; index < nodes; index++)
		{
			printf("[%p] %d\n", (void *)head, head->n);
			head = head->next;
		}

		printf("-> [%p] %d\n", (void *)head, head->n);
	}

	return (nodes);
}

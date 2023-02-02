#include "lists.h"

/**
 * print_listint - prints all the elements of a list
 *
 * @h: the list
 *
 * Return: number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t num_nodes = 0;

	while (h != NULL)
	{
		printf("%d\n", h->n); /* This automfills 0 if no int value is given */

		num_nodes += 1;
		h = h->next;
	}
	return (num_nodes);
}

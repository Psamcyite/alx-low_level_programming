#include "lists.h"
#include <stdlib.h>

/**
 * add_dnodeint - adds a node to the front of a doubly linked list
 *
 * @head: pointer to the head of list
 * @n: node data
 *
 * Return: the address of new node, or NULL if failed
 */

dlistint_t *add_dnodeint(dlistint_t **head, const int n)
{
	dlistint_t *new;

	if (head == NULL)
		return (NULL);

	new = malloc(sizeof(struct dlistint_s));
	if (!new)
		return (NULL);
	new->n = n;

	if (*head == NULL)
	{
		*head = new;
		new->next = NULL;
		new->prev = NULL;
		return (new);
	}

	new->next = *head;
	new->prev = NULL;
	(*head)->prev = new;
	*head = new;
	return (new);
}

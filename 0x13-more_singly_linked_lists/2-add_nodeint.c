#include "lists.h"

/**
 * add_nodeint - adds a new node at the beginning of a listint_t list
 *
 * @head: pointer to head pointer of the linked list
 * @n: the data to be added to the new node
 *
 * Return: address of new element, or NULL if failed
 */

listint_t *add_nodeint(listint_t **head, const int n)
{
	listint_t *new_node;

	new_node = malloc(sizeof(listint_t)); /* This creates a new node */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n; /* sets new values to n */

	new_node->next = *head;
	/* the first link new node points to the first node */

	*head = new_node;
	/* then switches the list pointer to point to the new node */

	return (new_node);
}

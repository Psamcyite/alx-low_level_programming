#include "lists.h"

/**
 * add_nodeint_end - adds a new node at the end of a listint_t list
 *
 * @head: the pointer of the head pointer of the linked list
 * @n: data to be added to the new node
 *
 * Return: address of nw element, or NULL if failed
 */

listint_t *add_nodeint_end(listint_t **head, const int n)
{
	listint_t *new_node, *tmp;

	new_node = malloc(sizeof(listint_t)); /* make a new node and sets its value */
	if (new_node == NULL)
		return (NULL);

	new_node->n = n;
	new_node->next = NULL;

	if (*head == NULL) /* This accounts for empty list by pointing head to node */
		*head = new_node;
	else
	{
		tmp = *head; /* sets tmp pointer to iterate without moving head pointer */

		while (tmp->next != NULL) /* iterates till the last node */
			tmp = tmp->next;
		tmp->next = new_node; /* links the last node to the new node */
	}

	return (new_node);
}

#include "lists.h"

/**
 * pop_listint - deletes the head node, and returns the head node's data
 *
 * @head: the linked list
 *
 * Return: the deleted head node's data
 */

int pop_listint(listint_t **head)
{
	int data;
	listint_t *tmp;

	if (*head == NULL) /* this accounts for no linked list */
		return (0);

	tmp = *head;

	data = tmp->n; /* save data to return later */

	*head = tmp->next; /* links head to the next node */
	free(tmp);

	return (data);
}

#include "lists.h"

/**
 * reverse_listint - reverse a linked list
 *
 * @head: pointer to the head pointer of the linked list
 *
 * Return: pointer to first node of the reversed list
 */

listint_t *reverse_listint(listint_t **head)
{
	listint_t *prev, *next;

	/* accounts for no pointer and empty list */
	if (head == NULL || *head == NULL)
		return (NULL);

	/* iterates through the list to reverse linking */
	prev = NULL;
	while (*head != NULL)
	{
		next = (*head)->next; /* keeps track of the next node to move to */
		(*head)->next = prev; /* links the current node's pointer to the prev one */
		prev = *head; /* update the previous node to be the current node */
		*head = next; /* moves the current node to the next node */
	}
	(*head) = prev; /* unlinks the blast elememnt from null and point backwards */

	return (*head);
}

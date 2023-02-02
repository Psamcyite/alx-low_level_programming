#include "lists.h"

/**
 * delete_nodeint_at_index - deletes a node at a given index position
 *
 * @head: the bpointer to head pointer of the linked list
 * @index: the index for the node to be deleted
 *
 * Return: 1 if succeeded, or -1 if failed
 */

int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *tmp, *tmp2;

	/* account for empty list */
	if (*head == NULL)
		return (-1);

	tmp = *head;

	/* accounts for deleting the beginning node */
	if (index == 0)
	{
		*head = tmp->next;
		free(tmp);
		return (1);
	}

	/* iterates tmp to idx prior to the idx to be deleted */
	while (i < (index - 1) && tmp != NULL)
	{
		tmp = tmp->next;
		i++;
	}

	/* accounts for idx out of range: don't delete and return */
	if (i != (index - 1) || tmp->next == NULL)
		return (-1);

	/* link orior idx before delete */
	tmp2 = tmp->next;
	tmp->next = (tmp->next)->next;
	free(tmp2);

	return (1);
}

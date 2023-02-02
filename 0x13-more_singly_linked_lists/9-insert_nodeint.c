#include "lists.h"

/**
 * insert_nodeint_at_index - inserts a new node at a given position
 *
 * @head: the pointer to head pointer of the linked list
 * @idx: the index to insert a new node
 * @n: the new node's data
 *
 * Return: the address of the new node, or NULL if failed
 */

listint_t *insert_nodeint_at_index(listint_t **head, unsigned int idx, int n)
{
	unsigned int i = 0;
	listint_t *new_node, *tmp;

	/* accounts for empty pointer */
	if (head == NULL)
		return (NULL);

	/* malloc and set values for the new node */
	new_node = malloc(sizeof(listint_t));
	if (new_node == NULL)
		return (NULL);
	new_node->n = n;

	/* accounts for idx 0 */
	if (idx == 0)
	{
		new_node->next = *head;
		*head = new_node;
		return (new_node);
	}

	/* iterate to 1 before nth index to insert */
	tmp = *head;
	while (i < (idx - 1))
	{
		tmp = tmp->next;
		i++;

		if (tmp == NULL) /* accounts for when idx is out of range */
		{
			free(new_node);
			return (NULL);
		}
	}
	/* link into list */
	new_node->next = tmp->next;
	tmp->next = new_node;
	return (new_node);
}

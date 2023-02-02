#include "lists.h"

/**
 * find_listint_loop - find loop in a linked list
 *
 * @head: pointer to head pointer of the linked list
 *
 * Return: address of node where loop starts
 */

listint_t *find_listint_loop(listint_t *head)
{
	listint_t *turtle, *hare;

	/* determines if a loop exists by seeing if turtle and a hare meets */
	/* starts them both at head, move turtle 1 node and hare 2 nodes */
	turtle = hare = head;

	while (turtle != NULL && hare != NULL)
	{
		turtle = turtle->next;
		hare = hare->next->next;

		if (turtle == hare)
		{
			/* starts turtle and hare at the address they met */
			/* moves the turtle and hare one node to find looporigin */
			turtle = head;
			while (turtle != hare)
			{
				turtle = turtle->next;
				hare = hare->next;
			}
		}
	}
	return (NULL);
}

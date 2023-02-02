#include "lists.h"

/**
 * sum_listint - returns the sum of all data ina linked list
 *
 * @head: the pointer to the head pointer of the linked list
 *
 * Return: sum, or 0 if the list is empty
 */

int sum_listint(listint_t *head)
{
	int sum = 0;

	while (head != NULL)
	{
		sum += head->n;
		head = head->next;
	}

	return (sum);
}

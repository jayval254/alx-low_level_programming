#include "lists.h"

/**
 * sum_dlistint - returns the sum of all data
 * @head: a pointer to the linked list
 * Return: on success return an integer
 * on fail return 0
 */
int sum_dlistint(dlistint_t *head)
{
	int sum = 0;

	while (head)
	{
		sum += head->n;
		head = head->next;
	}
	return (sum);
}

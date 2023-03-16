#include "lists.h"
/**
 * print_dlistint - prints all elements of a doubly list
 * @head: the pointer to the head
 * Return: on Success number of the nodes
 * on fail return negative number
 */
size_t print_dlistint(const dlistint_t *head)
{
	size_t count = 0;

	while (head)
	{
		printf("%d\n", head->n);
		head = head->next;
		count++;
	}
	return (count);
}

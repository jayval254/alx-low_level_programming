#include "lists.h"
#include <stdlib.h>
/**
 * list_len - function that returns the number of elements
 * in a linked list_t list.
 * @h: Pointer to the head node of the linked list
 * Return: the number of nodes in a linked list
 */
size_t list_len(const list_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}

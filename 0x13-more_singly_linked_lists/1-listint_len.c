#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * listint_len - function that returns number of elements in a linked list.
 * @h: a pointer to the header of a list
 * Return: number of elements in a linked list
 */
size_t listint_len(const listint_t *h)
{
	size_t num_of_nodes = 0;

	while (h)
	{
		h = h->next;
		num_of_nodes++;
	}
	return (num_of_nodes);
}

#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * get_nodeint_at_index - function that returns the nth node of linked list
 * @head: pointer to first of the linked list
 * @index:  is the index of the node, starting at 0
 * Return: if the node does not exist, return NULL
 */
listint_t *get_nodeint_at_index(listint_t *head, unsigned int index)
{
	unsigned int counter = 0;
	listint_t *temp = head;

	while (temp && (counter < index))
	{
		temp = temp->next;
		counter++;
	}
	if (counter < index)
		return (NULL);
	return (temp);
}

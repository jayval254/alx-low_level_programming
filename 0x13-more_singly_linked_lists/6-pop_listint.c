#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * pop_listint - unction that deletes the head node of a listint_t
 * linked list, and returns the head node’s data (n).
 * @head: pointer to the first node
 * Return: the head node’s data (n), if the linked list is empty return 0
 */
int pop_listint(listint_t **head)
{
	listint_t *node_to_delete;
	int n;

	if (*head == NULL)
		return (0);
	node_to_delete = *head;
	*head = node_to_delete->next;
	n = node_to_delete->n;
	free(node_to_delete);
	return (n);
}

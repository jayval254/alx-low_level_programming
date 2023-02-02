#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * delete_nodeint_at_index - deletes the node at index index of list
 * @head: pointer to first element of node
 * @index:  index of the node that should be deleted
 * Return: 1 if it succeeded, -1 if it failed
 */
int delete_nodeint_at_index(listint_t **head, unsigned int index)
{
	unsigned int i = 0;
	listint_t *current_node = *head, *temp;

	if (!current_node)
		return (-1);
	if (index == 0)
	{
		*head = current_node->next;
		free(current_node);
		return (1);
	}
	while (current_node->next && ((i + 1) != index))
	{
		current_node = current_node->next;
		i++;
	}
	if ((i + 1) == index && current_node->next)
	{
		temp = current_node->next;
		current_node->next = temp->next;
		free(temp);
		return (1);
	}
	return (-1);
}

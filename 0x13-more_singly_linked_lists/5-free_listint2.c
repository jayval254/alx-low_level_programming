#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint2 -  function that frees a listint_t list
 * @head: double pointer to the first node of the list
 * Return: void
 */
void free_listint2(listint_t **head)
{
	listint_t *placeholder;

	if (head)
	{
		while (*head)
		{
			placeholder = *head;
			*head = placeholder->next;
			free(placeholder);
		}
	}
}

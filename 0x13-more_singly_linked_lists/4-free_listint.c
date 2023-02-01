#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include "lists.h"
/**
 * free_listint -  a function that frees a listint_t list
 * @head: pointer to the first node of the list
 * Return: void
 */
void free_listint(listint_t *head)
{
	listint_t *placeholder;

	while (head)
	{
		placeholder = head->next;
		free(head);
		head = placeholder;
	}
}

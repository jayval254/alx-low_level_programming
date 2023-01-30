#include "lists.h"
/**
 * free_list - function that frees a list_t list.
 * @head: pointer to the head node of list_t
 * Return: void
 */
void free_list(list_t *head)
{
	list_t *place_holder;

	while (head)
	{
		if (head->str)
			free(head->str);
		place_holder = head;
		head = head->next;
		free(place_holder);
	}
}

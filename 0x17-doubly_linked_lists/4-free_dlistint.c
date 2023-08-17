#include "lists.h"

/**
 * free_dlistint - Free doubly linked list
 * @head: head of list
 * Return: Nothing
 */

void free_dlistint(dlistint_t *head)
{
	if (head == NULL)
		return;

	while (head->next)
	{
		head = head->next;
		free(head->prev);
	}
	free(head);
}


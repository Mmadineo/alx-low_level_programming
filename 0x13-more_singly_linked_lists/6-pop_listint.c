#include "lists.h"

/**
 * pop_listint - deletes the head node of a linked list
 * @head: pointer to the first element that was deleted
 *
 * Return: the data inside the deleted element
 * or 0 if the ist is empty
 */
int pop_listint(listint_t **head)
{
	listint_t *temp;
	int mad;

	if (!head || !*head)
		return (0);

	mad = (*head)->n;
	temp = (*head)->next;
	free(*head);
	*head = temp;

	return (mad);
}

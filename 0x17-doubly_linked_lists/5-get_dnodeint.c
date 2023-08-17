#include "lists.h"

/**
 * get_dnodeint_at_index - return number of node of dlistint_t
 * @head: head of list
 * @index: node index
 *
 * Return: number of nodes or NULL
 */

dlistint_t *get_dnodeint_at_index(dlistint_t *head, unsigned int index)
{
	unsigned int size = 0;
	dlistint_t *tmp;

	if (head == NULL)
		return (NULL);

	tmp = head;

	while (tmp)
	{
		if (index == size)
			return (tmp);
		size++;
		tmp = tmp->next;
	}
	return (NULL);
}

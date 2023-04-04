#include "lists.h"
#include <stdio.h>
#include <stdlib.h>

/**
 * print_listint - prints all the elements of linked list
 * @h: Linked list of type listint_t to print
 *
 * Return : number of nodes
 */

size_t print_listint(const listint_t *h)
{
	size_t mad = 0;

	while (h)
	{
		printf("%d\n", h->n);
		mad++;
		h = h->next;
	}

	return (mad);
}

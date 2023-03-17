#include "main.h"
#include <stdlib.h>

/**
 * *malloc_checked - allocates memory using malloc
 * @b: number of bytes to allocat
 *
 * Return: a pointer to the allocated memo
 */

void *malloc_checked(unsigned int b)
{
	void *i;

	i = malloc(b);

	if (i == NULL)
		exit(98);

	return (i);
}

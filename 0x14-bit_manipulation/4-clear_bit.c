#include "main.h"

/**
 * clear_bit - Sets value og given bit to 0
 * @n: Pointer to number to change
 * @index: Bit index to clear
 *
 * Return: 1 for Success, -1 for Failure
 */

int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);

	*n = (~(1UL << index) & *n);
	return (1);
}

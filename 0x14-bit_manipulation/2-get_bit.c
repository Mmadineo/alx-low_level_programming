#include "main.h"

/**
 * get_bit - Returns value of a bit at index in decimal number
 * @n: Number to search
 * @index: bit index
 *
 * Return: Bit value
 */

int get_bit(unsigned long int n, unsigned int index)
{
	int bit_value;

	if (index > 63)
		return (-1);

	bit_value = (n >> index) & 1;

	return (bit_value);
}

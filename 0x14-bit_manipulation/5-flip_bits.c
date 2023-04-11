#include "main.h"

/**
 * flip_bits - counts number of bits to change
 * to get from1 number to th =e other
 * @n: first number
 * @m: second number
 *
 * Return: number of bits to change
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	int s, count = 0;
	unsigned long int current;
	unsigned long int exclusive = n ^ m;

	for (s = 63; s >= 0; s--)
	{
		current = exclusive >> s;
		if (current & 1)
			count++;
	}

	return (count);
}

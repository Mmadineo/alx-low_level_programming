#include "main.h"

/**
 * binary_to_uint - Converts binary number to unsigned int
 * @b: string with binary nymber
 *
 * Return: The converted number
 */

unsigned int binary_to_uint(const char *b)
{
	int a;
	unsigned int dec_value = 0;

	if (!b)
		return (0);
	for (a = 0; b[a]; a++)
	{
		if (b[a] < '0' || b[a] > '1')
			return (0);
		dec_value = 2 * dec_value + (b[a] - '0');
	}
	return (dec_value);
}

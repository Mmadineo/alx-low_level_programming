#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes the charecter c to std out
 * @C: The character to print
 * 
 * Return: On success 1.
 * On error, -1 is returned, and error is set appropriately.
 * On error
 */
int _putchar(char c)
{
	return (write(1, &c, 1));
}

#include <unistd.h>

/**
 * _putchar - Writes character c to stdout
 * @c: Character to print
 *
 * Return: 1 on Success, -1 on Error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

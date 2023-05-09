#include "main.h"
#include <unistd.h>

/**_putchar - Write character to stdout
 * @c: Character to write
 *
 * Return: 1 on Success, -1 on Error
 */

int _putchar(char c)
{
	return (write(1, &c, 1));
}

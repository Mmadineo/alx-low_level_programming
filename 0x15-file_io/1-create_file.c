#include "main.h"

/**
 * create_file - Creates a file
 * @filename: A pointer to the filename created
 * @text_content: A pointer to the string to write to file
 *
 * Return: 1 on Success, -1 on Failure
 */

int create_file(const char *filename, char *text_content)
{
	int m, n, len = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (len = 0; text_content[len];)
			len++;
	}

	m = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	n = write(m, text_content, len);

	if (m == -1 || n == -1)
		return (-1);

	close(m);

	return (1);
}

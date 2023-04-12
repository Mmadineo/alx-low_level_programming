#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the POSIX standard output
 * @filename: textfile to read
 * @letters: number of letters to be read
 *
 * Return: n - actual numer of bytes read and printed
 *	: 0 - function fails or file name = NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t m, n, s;

	if (filename == NULL)
		return (0);

	buffer = malloc(sizeof(char) * letters);

	if (buffer == NULL)
		return (0);

	m = open(filename, O_RDONLY);
	n = read(m, buffer, letters);
	s = write(STDOUT_FILENO, buffer, n);

	if (m == -1 || n == -1 || s == -1 || s != n)
	{
		free(buffer);
		return (0);
	}

	free(buffer);
	close(m);

	return (s);
}

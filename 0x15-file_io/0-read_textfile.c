#include "main.h"
#include <stdlib>

/**
 * read_textfile - Read text file and print to stdout
 * @filename: Read text file
 * @letters: Number of letters to be read
 *
 * Return: b - actual bytes read and peinted
 *	0 - filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buffer;
	ssize_t filedescriptor;
	ssize_t b;
	ssize_t m;

	filedescriptor = open(filename, O_RDONLY);
	if (filedescriptor == -1)
		return (0);

	buffer = malloc(sizeof(char) * letters);
	m = read(filedescriptor, buffer, letters);
	b = write(STDOUT_FILENO, buffer, m);

	free(buffer);
	close(filedescriptor);
	return (b);
}

#include "main.h"
#include <stdlib>

/**
 * read_textfile - Read text file and print to stdout
 * @filename: Read text file
 * @letters: Number of letters to be read
 *
 * Return: w - actual bytes read and peinted
 *	0 - filename is NULL
 */

ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buf;
	ssize_t fd;
	ssize_t w;
	ssize_t t;

	fd = open(filename, O_RDONLY);
	if (fd == -1)
		return (0);

	buf = malloc(sizeof(char) * letters);
	t = read(fd, buf, letters);
	w = write(STDOUT_FILENO, buf, t);

	free(buf);
	close(fd);
	return (w);
}

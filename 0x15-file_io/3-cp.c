#include "main.h"
#include <stdio.h>
#include <stdlib.h>

char *create_buf(char *file);
void close_file(int fd);

/**
 * mian - Copies the contents of a file to another file
 * @argc: The number of arguments supplied to the program
 * @argv: An array of pointers to the arguments
 *
 * Return: 0 on Success
 * Description: If arguments count is correct - Exit code 97
 *		If file_from does not exit or can not read - Exit code 98
 *		If file_to can not be created or written to - Exit code 99
 *		If file_to or file_from can not be closed - Exit code 100
 */
int main(int argc, char *argv[])
{
	int from, to, m, n;
	char *buf;

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}

	buf = create_buf(argv[2]);
	from = open(argv[1], O_RDONLY);
	to = open(argv[2], O_CREAT | O_WRONLY | O_TRUNC, 0664);
	m = read(from, buf, 1024);

	do {
		if (from == -1 || m == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			free(buf);
			exit(98);
		}

		n = write(to, buf, m);
		if (to == -1 || n == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			free(buf);
			exit(99);
		}

		m = read(from, buf, 1024);
		to = open(argv[2], O_WRONLY | O_APPEND);
	}

	while (m > 0);

	free(buf);
	close_file(from);
	close_file(to);

	return (0);
}

/**
 * close_file - Close file descriptors
 * @fd: The file descriptor to be closed
 */

void close_file(int fd)
{
	int j;

	j = close(fd);

	if (j == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd%d\n", fd);
		exit(100);
	}
}

/**
 * create_buf - Allocates 1024 bytes of a buffer
 * @file: The name of the file buffer is storing chars to
 *
 * Return: A pointer to the newly-allocated buffer
 */

char *create_buf(char *file)
{
	char *buf;

	buf = malloc(sizeof(char) * 1024);

	if (buf == NULL)
	{
		dprintf(STDERR_FILENO, "Error: can't write to %s\n", file);
		exit(99);
	}

	return (buf);
}

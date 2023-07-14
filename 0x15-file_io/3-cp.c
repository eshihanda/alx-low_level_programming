#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);

/**
 * close_file - close file descriptors
 * @fd: the file descriptor to close
 */
void close_file(int fd)
{
	int c;

	c = close(fd);
	if (c == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't close fd %d\n", fd);
		exit(100);
	}

}

/**
 * main - entry point
 * @argc: argument count
 *@argv: argument vector
 *
 * Return: always 0
 */
int main(int argc, char *argv[])
{
	int file_from;
	int file_to;
	int r, w;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC | O_APPEND, 0664);

	r = 1024;
	while (r == 1024)
	{
		r = read(file_from, buffer, 1024);
		if (r == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(file_to, buffer, r);
		if (w == -1 || file_to == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't write to %s\n", argv[2]);
			exit(99);
		}
	}

	close(file_from);
	close(file_to);
	return (0);
}

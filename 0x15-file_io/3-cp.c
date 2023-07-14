#include "main.h"
#include <stdio.h>
#include <stdlib.h>

void close_file(int fd);
void error_file(int nwr, char *str);

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
 * error_file - to check if file can be opened
 * @w: to the file to write bytes
 * @str: pointer to string
 */
void error_file(int w, char *str)
{
	if (w == -1)
	{
		dprintf(STDERR_FILENO, "Error: Can't write to %s\n", str);
		exit(99);
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
	int r = 0, w = 0;
	char *buffer[1024];

	if (argc != 3)
	{
		dprintf(STDERR_FILENO, "Usage: cp file_from file_to\n");
		exit(97);
	}
	file_from = open(argv[1], O_RDONLY);
	file_to = open(argv[2], O_WRONLY | O_CREAT | O_EXCL, 0664);
	if (file_to == -1)
		file_to = open(argv[2], O_WRONLY | O_TRUNC);

	r = read(file_from, buffer, 1024);
	while (r != 0)
	{
		if (r == -1 || file_from == -1)
		{
			dprintf(STDERR_FILENO, "Error: Can't read from file %s\n", argv[1]);
			exit(98);
		}
		w = write(file_to, buffer, r);
		error_file(w, argv[2]);
		while (w < r)
		{
			w = write(file_to, buffer + w, r - w);
			error_file(w, argv[2]);

		}
	}

	close(file_from);
	close(file_to);
	return (0);
}

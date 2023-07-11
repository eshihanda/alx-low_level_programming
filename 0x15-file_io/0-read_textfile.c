#include <stdlib.h>
#include "main.h"

/**
 * read_textfile - read a text file and print to std output
 * @filename: the file to be read
 * @letters: the number of letters to read and print
 *
 * Return: number of letters, otherwise 0
 */
ssize_t read_textfile(const char *filename, size_t letters)
{
	char *buff;
	ssize_t fd;
	ssize_t r, w;

	if (filename == NULL)
		return (0);
	buff = malloc(sizeof(char) * letters);
	if (buff == NULL)
		return (0);
	fd = open(filename, O_RDONLY);
	r = read(fd, buff, letters);
	w = write(STDOUT_FILENO, buff, r);

	if (fd == -1 || r == -1 || w == -1 || w != r)
	{
		free(buff);
		return (0);
	}
	free(buff);
	close(fd);
	return (w);
}

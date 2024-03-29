#include <stdlib.h>
#include "main.h"

/**
 * create_file - function to create a file
 * @filename: the file to be created
 * @text_content: the string to input
 *
 * Return:1 on success otherwiase 0
 */
int create_file(const char *filename, char *text_content)
{
	int fd;
	int w;
	int length = 0;

	if (filename == NULL)
		return (-1);
	if (text_content != NULL)
	{
		for (length = 0; text_content[length];)
			length++;
	}
	fd = open(filename, O_RDWR | O_CREAT | O_TRUNC, 0600);
	w = write(fd, text_content, length);

	if (fd == -1 || w == -1)
		return (-1);


	close(fd);

	return (1);
}

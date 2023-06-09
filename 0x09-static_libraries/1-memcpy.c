#include "main.h"

/**
 * _memcpy - function to copy data in memory
 * @src: source of data in memory
 * @dest: destination  for copied data
 * @n: input number of bytes to copy
 *
 * Return: the value that points to dest
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int a;

	for (a = 0; a < n; a++)
	{
		dest[a] = src[a];
	}
	return (dest);
}

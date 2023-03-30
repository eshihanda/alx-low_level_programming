#include "main.h"

/**
 * _strncpy - function to copy a string
 * @dest: destination
 * @src: string to copy
 * @n: input value
 * Return: value of dest
 */
char *_strncpy(char *dest, char *src, int n)
{
	int i;

	for (i = 0; src[i] != '\0'; i++)

		while (i < n)
		{
			dest[i] = src[i];
			i++;
		}
	dest[i] = '\0';
	return (dest);
}


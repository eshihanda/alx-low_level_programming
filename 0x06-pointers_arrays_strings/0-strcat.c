#include "main.h"

/**
 * _strcat - function to concatenate strings
 * @dest: string
 * @src: string
 * Return:dest
 */
char *_strcat(char *dest, char *src)
{
	int len;
	int j;

	len = 0;
	while (dest[len] != '\0')
	{
		len++;
	}
	j = 0;
	while (src[j] != '\0')
	{
		dest[len] = src[j];
		len++;
		j++;
	}
	dest[len] = '\0';
	return (dest);
}


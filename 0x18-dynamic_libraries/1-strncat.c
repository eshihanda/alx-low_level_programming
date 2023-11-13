#include "main.h"

/**
 * _strncat - function to concatenate a string
 *@dest: string one
 *@src: string to concatenate
 *@n: input value
 *Return: value of dest
 */
char *_strncat(char *dest, char *src, int n)
{
	int j;
	int i;

	i = 0;
	while (dest[i] != '\0')
	{
		i++;
	}
	j = 0;
	while (j < n && src[j] != '\0')
	{
		dest[i] = src[j];
		i++;
		j++;
	}
	dest[i] = '\0';
	return (dest);
}

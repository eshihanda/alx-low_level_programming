#include <stdlib.h>
#include "main.h"

/**
 *_calloc - function to allocate block of memory
 *@nmemb: number of array elements
 *@size: size of the array
 *
 * Return: pointer to allocated memory if sucessful otherwise 0
 */
void *_calloc(unsigned int nmemb, unsigned int size)
{
	int i = 0, n = 0;
	char *s;

	if (nmemb == 0 || size == 0)
		return (NULL);
	n = nmemb * size;
	s = malloc(n);
	if (s == NULL)
		return (NULL);
	while (i < n)
	{
		s[i] = 0;
		i++;
	}
	return (s);
}

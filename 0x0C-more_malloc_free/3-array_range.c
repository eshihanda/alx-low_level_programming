#include <stdlib.h>
#include "main.h"

/**
 * array_range - function to create an array of integers
 * @min: minimum array
 * @max: maximum array
 *
 * Return: pointer to the newly created array
 */
int *array_range(int min, int max)
{
	int *s;
	int n, i;

	if (min > max)
		return (NULL);
	n = (max - min) + 1;
	s = malloc(sizeof(int) * n);
	if (s == NULL)
		return (NULL);
	i = 0;
	while (min <= max)
	{
		s[i] = min;
		i++;
		min++;
	}
	return (s);
}



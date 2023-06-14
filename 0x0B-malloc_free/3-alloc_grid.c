#include <stdio.h>
#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - returns a pointer to a 2d array
 * @width: width input
 * @height: height input
 *
 * Return: pointer to 2d array
 */
int **alloc_grid(int width, int height)
{
	int i, j;
	int **s;

	if (height <= 0 || width <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		free(s);
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] =  malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[i]);
			}
			free(s);
			return (NULL);
		}
	}
	return (s);
}




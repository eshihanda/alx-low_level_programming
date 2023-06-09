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
	int i, j = 0, m, n;
	int **s;

	if (height <= 0 || width <= 0)
		return (NULL);
	s = malloc(sizeof(int *) * height);
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < height; i++)
	{
		s[i] =  malloc(sizeof(int) * width);
		if (s[i] == NULL)
		{
			for (j = i; j >= 0; j--)
			{
				free(s[j]);
			}
			free(s);
			return (NULL);
		}
	}
	for (m = 0; m < height; m++)
	{
		for (n = 0; n < width; n++)
		{
			s[m][n] = 0;
		}
	}
	return (s);
}



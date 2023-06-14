#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * free_grid - funtion to free two dimensional array
 * @grid: double pointer to grid
 * @height: the height of grid
 *
 * Return: void
 */
void free_grid(int **grid, int height)

{
	int i = 0;

	for (; i < height; i++)
	{
		free(grid[i]);
	}

	free(grid);

}



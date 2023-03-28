#include "main.h"
#include <stdio.h>

/**
 * print_array - function to print array
 * @a: points to array
 * @n: number of elements of array
 * Return: 0
 */
void print_array(int *a, int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		printf("%d", a[i]);
		if (i != n - 1)
			printf(", ");
	}
	printf("\n");
}

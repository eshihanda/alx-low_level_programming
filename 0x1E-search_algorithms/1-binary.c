#include <stdlib.h>
#include <stdio.h>
#include "search_algos.h"

/**
 * binary_search - searches for a value using binary search
 * @array: pointer to array
 * @size: size of array
 * @value: value to find
 * Return: index value
 */
int binary_search(int *array, size_t size, int value)
{
	size_t i = 0, left = 0, right = size - 1, mid;

	if (!array)
		return (-1);
	while (left <= right)
	{
		printf("Searching in array: ");
		for (i = left; i <= right; i++)
		{
			printf("%d", array[i]);
			if (i < right)
				printf(", ");
			else
				printf("\n");
		}
		mid = (left + right) / 2;
		if (array[mid] < value)
			left = mid + 1;
		else if (array[mid] > value)
			right = mid - 1;
		else
			return (mid);
	}
	return (-1);
}

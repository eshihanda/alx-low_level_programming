#include "function_pointers.h"

/**
 * int_index -returns the index of first element
 * @size: number of array elements
 * @cmp: function pointer
 * @array: array
 *
 * Return: index of the first integer
 */
int int_index(int *array, int size, int (*cmp)(int))
{
	int i = 0;

	if (size > 0)
	{
		if (array != NULL && cmp != NULL)
		{
			while (i < size)
			{
				if (cmp(array[i]))
				{
					return (i);
				}
				i++;
			}
		}
	}
	return (-1);
}


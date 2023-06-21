#include "function_pointers.h"

/**
 * array_iterator - iterate each elements of an array of functions
 * @size: the size of the array
 * @action: pointer to the function
 * @array: array to iterate
 * Return: nothing
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	unsigned int j;

	if (array == NULL || action == NULL)
		return;
	for (j = 0; j < size; j++)
	{
		action(array[j]);
	}
}

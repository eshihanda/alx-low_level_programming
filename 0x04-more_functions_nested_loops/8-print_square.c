#include "main.h"

/**
 * print_square - function to print square
 * @size: the number of times
 *
 * Return: return 0
 */
void print_square(int size)
{
	int x;
	int z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < size; x++)
		{
			for (z = 0; z < size; z++)
			{
				_putchar(35);
			}
			_putchar('\n');
		}
	}
}

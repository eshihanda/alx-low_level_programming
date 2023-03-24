#include "main.h"

/**
 * print_diagonal - function to print diagonal line
 *
 * @n: the number of times input is printed
 * Return: a diagonal
 */
void print_diagonal(int n)
{
	int x;
	int z;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x < n; x++)
		{
			for (z = 0; z < x; z++)
			{
				_putchar(32);
			}
			_putchar(92);
			_putchar('\n');
		}
	}
}

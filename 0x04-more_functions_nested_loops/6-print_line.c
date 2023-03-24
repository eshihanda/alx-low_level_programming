#include "main.h"

/**
 * print_line - function to print a line
 *
 * @n: number to be inputed
 * Return: Always 0
 */
void print_line(int n)
{
	int x;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (x = 0; x <= n; x++)
		{
			_putchar('_');
		}
		_putchar('\n');
	}
}

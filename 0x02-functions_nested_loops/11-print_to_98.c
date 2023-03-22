#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - function to print natural numbers
 * @n: the value to start counting
 * Return: Always 0
 */
void print_to_98(int n)
{
	int x;


	if (n <= 98)
	{
		for (x = n; x <= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	}
	else if (n >= 98)
	{
		for (x = n; x >= 98; x++)
		{
			if (x != 98)
				printf("%d, ", x);
			else if (x == 98)
				printf("%d\n", x);
		}
	}
}



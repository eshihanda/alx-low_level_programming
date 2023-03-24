#include "main.h"

/**
 * more_numbers - function that print 0 to 14
 *
 * Return: always 0
 */
void more_numbers(void)
{
	int x;
	int z;

	for (x = 0; x < 10; x++)
	{
		for (z = 0; z <= 14; z++)
		{
			if (z >= 10)
			{
				_putchar(z / 10 + '0');
			}
			_putchar(z % 10 + '0');
		}
		_putchar('\n');
	}
}

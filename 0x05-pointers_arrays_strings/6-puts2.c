#include "main.h"

/**
 * puts2 - prints a string
 *@str: string to be printed
 *Return: 0
 */
void puts2(char *str)
{
	int i;


	for (i = 0; i < str; i++)
	{
		if (i % 2 == 0)
		{
			_putchar(str[i]);
		}
	}
	_putchar('\n');
}



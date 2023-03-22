#include "main.h"

/**
 * print_last_digit - function to print last digit
 *@n: the number to be printed
 *
 *Return: the value of x
 */
int print_last_digit(int n)
{
	int x;

	x = n % 10;
	if (x < 0)
	{
		x = x * -1;
	}
	_putchar(x + '0');
	return (x);
}

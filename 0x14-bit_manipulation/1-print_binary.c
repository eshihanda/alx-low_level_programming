#include "main.h"

/**
 * print_binary - function to print binary
 * @n: the integer to convert to binary
 *
 * Return: nothing
 */
void print_binary(unsigned long int n)
{
	if (n > 1)
		print_binary(n >> 1);
	_putchar((n & 1) + '0');
}

#include <stdio.h>
#include "main.h"

/**
 * _pow_recursion - function to calculate value of x raised to y
 * @x: input base value
 * @y: input power value
 *
 * Return: the value of the power and -1 if y is lower than zero
 */
int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);
	return (_pow_recursion(x, y - 1) * x);
}

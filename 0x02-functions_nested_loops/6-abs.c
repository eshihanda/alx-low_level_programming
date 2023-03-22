#include "main.h"

/**
 * _abs - function that create absolute number
 * @c: integer input
 *
 * Return: absolute value of c
 */
int _abs(int c)
{
	if (c < 0)
	{
		int abs_val;

		abs_val = c * -1;
		return (abs_val);
	}
	return (c);
}

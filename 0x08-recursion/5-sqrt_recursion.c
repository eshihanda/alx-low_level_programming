#include <stdio.h>
#include "main.h"

/**
 * getsqrt - function to find square root of a number
 * @num: inputed number
 * @xsqrt: possible value for the square root
 * Return: square root of number or -1 if it is an error
 */
int getsqrt(int num, int xsqrt)
{
	if ((xsqrt * xsqrt) == num)
		return (xsqrt);
	else if
		((xsqrt * xsqrt) > num)
			return (-1);
	else
		return (getsqrt(num, xsqrt + 1));
}


/**
 * _sqrt_recursion - function that returns square root of natural number
 * @n: inputed value
 *
 * Return: square root of n or -1 if n does not have a natural square root
 */
int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	else
		return (getsqrt(n, 0));
}


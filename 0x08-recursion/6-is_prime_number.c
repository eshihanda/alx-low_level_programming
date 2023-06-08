#include <stdio.h>
#include "main.h"

/**
 * findprime - function to find prime numbers
 * @num: value to check if prime
 * @j: iterator
 * Return: 1 if prime number or 0 if otherwise
 */
int findprime(int num, int j)
{
	if (j < num)
	{
		if (num % j == 0)
		{
			return (0);
		}
		else
		{
			return (findprime(num, j + 1));
		}
	}
	else
	{
		return (1);
	}
}

/**
 * is_prime_number - function that checks for prime number
 * @n: inputed integer
 *
 * Return: return 1 if n is prime number otherwise 0
 */
int is_prime_number(int n)
{
	if (n <= 1)
		return (0);
	else
		return (findprime(n, 2));
}

#include "main.h"

/**
 * _memset - function to fill memory with constant bytes
 * @s: pointer to the memory area
 * @b: input value
 * @n: bytes allocated
 *
 * Return: pointer to s
 */
char *_memset(char *s, char b, unsigned int n)
{
	int a;

	for (a = 0; a < n; a++)
	{
		s[a] = b;
	}
	return (s);
}

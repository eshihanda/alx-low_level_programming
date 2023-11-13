#include "main.h"

/**
 *_islower - functiion to print lower cases
 *@c: the character to be printed
 *
 * Return: 1 for lower case or 0 otherwise
 */
int _islower(int c)
{
	if (c >= 97 && c <= 122)
		return (1);
	else
		return (0);
}

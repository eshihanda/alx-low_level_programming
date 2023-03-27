#include "main.h"

/**
 * _strlen - count length of string
 * @s: string to be counted
 * Return: length
 */
int _strlen(char *s)
{
	int count = 0;

	while (*s != '\0')
	{
		count++;
		s++;
	}
	return (count);
}

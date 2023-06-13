#include <stdio.h>

#include <stdlib.h>

#include "main.h"

/**
 * _strdup - function returns a pointer to a new duplicate string
 * @str: pointer to the string
 * Return: pointer to the string on success otherwise NULL
 */
char *_strdup(char *str)
{
	char *s;
	unsigned int n, i;

	if (str == NULL)
	{
		return (NULL);
	}
	n = 0;
	while (str[n] != '\0')
	{
		n++;
	}
	s = malloc((n + 1) * sizeof(char));
	if (s == NULL)
	{
		return (NULL);
	}
	for (i = 0; i < n; i++)
	{
		s[i] = str[i];
	}
	s[n] = '\0';
	return (s);
}


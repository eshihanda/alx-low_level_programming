#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * str_concat - add string 2 to string 1
 * @s1: the first string one to concat
 * @s2: the second string to concat
 * Return: concat of s1 and s2 otherwise NULL on failure
 */
char *str_concat(char *s1, char *s2)
{
	char *str;
	unsigned int i, j, n, m, size;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	n = 0;
	while (s1[n] != '\0')
		n++;
	m = 0;
	while (s2[m] != '\0')
		m++;
	size = n + m;
	str = malloc((size + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	i = 0;
	while (i < n)
	{
		str[i] = s1[i];
		i++;
	}
	j = 0;
	while (i <= size)
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

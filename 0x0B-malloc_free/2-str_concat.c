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
	unsigned int i, j;

	if (s1 == NULL)
	{
		s1 = "";
	}
	if (s2 == NULL)
	{
		s2 = "";
	}

	i = 0;
	while (s1[i] != '\0')
		i++;
	j = 0;
	while (s2[j] != '\0')
		j++;
	str = malloc((i + j + 1) * sizeof(char));
	if (str == NULL)
	{
		return (NULL);
	}
	while (s1[i] != '\0')
	{
		str[i] = s1[i];
		i++;
	}
	while (s2[j] != '\0')
	{
		str[i] = s2[j];
		i++;
		j++;
	}
	str[i] = '\0';
	return (str);
}

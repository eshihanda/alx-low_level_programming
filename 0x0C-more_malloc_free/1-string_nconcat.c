#include <stdlib.h>
#include "main.h"
/**
 * *string_nconcat - concatenates two strings
 * @s1: the string to append to
 * @s2: string to concatenate
 * @n: number of bytes from s2 to concatenate to s1
 *
 * Return: pointer to newly allocated space in memory
 */

char *string_nconcat(char *s1, char *s2, unsigned int n)

{
	char *str;
	unsigned int i, j, k = 0, m = 0, size;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";
	while (s1[k] != '\0')
		k++;
	while (s2[m] != '\0')
		m++;
	if (n >= m)
		n = m;
	size = k + n;
	str = malloc(sizeof(*str) * (size + 1));
	if (str == NULL)
		return (NULL);
	for (i = 0; s1[i] != '\0'; i++)
		str[i] = s1[i];
	for (j = 0; j < n; j++)
		str[i + j] = s2[j];
	str[i + j] = '\0';
	return (str);
}






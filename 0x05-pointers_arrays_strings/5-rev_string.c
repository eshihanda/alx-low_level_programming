#include "main.h"

/**
 * rev_string - function to reverse a string
 * @s: string to be reversed
 * Return : 0
 */
void rev_string(char *s)
{
	char rev;
	int count = 0;
	int i;
	int j;

	while (s[count] != '\0')
	{
		count++;
	}
	j = count - 1;

	for (i = 0; i < count; i++)
	{
		rev[i] = s[j];
		j--;
	}
}


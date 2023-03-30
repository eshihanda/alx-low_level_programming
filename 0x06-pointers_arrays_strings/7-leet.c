#include "main.h"

/**
 * leet - function to encode to 1337
 * @str: string to be encoded
 *
 * Return: value of str
 */
char *leet(char *str)
{
	int i;
	int j;
	char *s1 = "aAeEoOtTlL";
	char *s2 = "4433007711";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 10; j++)
		{
			if (str[i] == s1[j])
				str[i] = s2[j];
		}
	}
	return (str);
}


#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - program that adds positive numbers
 * @argc: counts number of arguments
 * @argv: array of arguments passed
 *
 * Return: 0 if success otherwise return 1
 */
int main(int argc, char *argv[])
{
	int result = 0, i, j;
	char *str;

	if (argc > 1)
	{
		for (i = 1; i < argc; i++)
		{
			str = argv[i];
			for (j = 0; str[j] != '\0'; j++)
			{
				if (str[j] < 48 || str[j] > 57)
				{
					printf("Error\n");
					return (1);
				}
			}
		}
	}
	for (i = 1; i < argc; i++)
	{
		result = result + atoi(argv[i]);
	}
	printf("%d\n", result);
	return (0);
}



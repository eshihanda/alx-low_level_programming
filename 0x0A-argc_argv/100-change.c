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
	int result = 0, n, i;
	int coins[] = {25, 10, 5, 2, 1};

	if (argc != 2)
	{
		printf("Error\n");
		return (1);
	}
	n = atoi(argv[1]);
	if (n < 0)
	{
		printf("0\n");
		return (0);
	}
	for (i = 0; i < 5 && n >= 0; i++)
	{
		while (n >= coins[i])
		{
			n -= coins[i];
			result++;
		}
	}
	printf("%d\n", result);
	return (0);
}


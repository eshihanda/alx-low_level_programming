#include <stdio.h>
#include "main.h"
#include <stdlib.h>

/**
 * main - writes a program that multiplies two numbers
 * @argc: counts number of arguments passed to the program
 * @argv: an array of arguments passed
 *
 * Return: 0 otherwise 1 if there is an error
 */
int main(int argc, char *argv[])
{
	int result = 0;
	int num1;
	int num2;

	if (argc < 3)
	{
		printf("Error\n");
		return (1);
	}
	{
	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;
	}
	{
	printf("%d\n", result);
	}
	return (0);
}

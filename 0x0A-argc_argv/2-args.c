#include <stdio.h>
#include "main.h"

/**
 * main - write a program and print all arguments it receives
 * @argc: counts number of arguments passed to it
 * @argv: array of argument passed to the program
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	int j;

	for (j = 0; j < argc; j++)
	{
		printf("%s\n", argv[j]);
	}
	return (0);
}

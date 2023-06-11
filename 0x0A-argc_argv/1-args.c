#include <stdio.h>
#include "main.h"

/**
 * main - write a program and print the number of arguments passed to it
 * @argc: counts the number of arguments passed
 * @argv: array of arguments in argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("argc = %d\n", argc - 1);
	(void)argv;
	return (0);
}

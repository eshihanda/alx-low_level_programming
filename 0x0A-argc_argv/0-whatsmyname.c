#include <stdio.h>
#include "main.h"

/**
 *main - write a program that prints its name
 *@argc: counts number of arguments
 *@argv: array of arguments passed to argc
 *
 * Return: 0
 */
int main(int argc, char *argv[])
{
	printf("%s\n", argv[0]);
	(void)argc;
	return (0);
}

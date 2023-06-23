#include "3-calc.h"
#include <stdlib.h>
#include <stdio.h>

/**
 * main - entry point
 * @argc: the number of arguments
 * @argv: argument vector
 *
 * Return:0
 */
int main(int argc, char *argv[])
{
	int (*fptr)(int, int), n1, n2;

	if (argc != 4)
	{
		printf("Error\n");
		exit(98);
	}

	n1 = atoi(argv[1]);
	n2 = atoi(argv[3]);

	fptr = get_op_func(argv[2]);
	if (!fptr)
	{
		printf("Error\n");
		exit(99);
	}
	printf("%d\n", fptr(n1, n2));
	return (0);
}


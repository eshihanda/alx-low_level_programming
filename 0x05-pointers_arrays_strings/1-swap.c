 #include "main.h"

/**
 * swap_int - functin to swap two integers
 * @a: value of integer 1
 * @b: value of integer 2
 * Return: Always  0
 */
void swap_int(int *a, int *b)
{
	int x;

	x = *a;
	*a = *b;
	*b = x;
}

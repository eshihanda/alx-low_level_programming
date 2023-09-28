#include "main.h"

/**
 * get_bit - function that return the value of a bit at an index
 * @n: number to search
 * @index: index of the bit
 *
 * Return: the value of the bit, otherwise -1
 */
int get_bit(unsigned long int n, unsigned int index)
{
	int bit_num;

	if (index > 63)
		return (-1);
	bit_num = (n >> index) & 1;

	return (bit_num);
}

#include "main.h"

/**
 * clear_bit - sets bit to 0 at a given index
 * @n: pointer to the bit value
 * @index: the index to set value to 0
 *
 * Return: 1 if successful, otherwise -1
 */
int clear_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n &= ~(1 << index);

	return (1);
}

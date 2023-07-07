#include "main.h"

/**
 * set_bit - sets the value of bit to 1 at agiven index
 * @n: pointer to the number to change
 * @index: bit index to set
 *
 * Return: 1 if successful
 */
int set_bit(unsigned long int *n, unsigned int index)
{
	if (index > 63)
		return (-1);
	*n ^= (1 << index);

	return (1);
}

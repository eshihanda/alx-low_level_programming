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
	unsigned int a;
	
	if (index > 63)
		return (-1);
	a = 1 << index;
	*n = (*n | a);

	return (1);
}

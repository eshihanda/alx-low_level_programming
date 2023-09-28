#include "main.h"

/**
 * flip_bits - return number of bits to flip to get to the next number
 * @n: the number
 * @m: the number to flip n to
 *
 * Return: the number of bits to flip
 */
unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int bits;

	for (bits = 0; n || m; n >>= 1, m >>= 1)
	{
		if ((n & 1) != (m & 1))
			bits++;
	}
	return (bits);
}


#include <stdio.h>
#include "main.h"

/**
 * binary_to_uint - convert binary to unsigned int
 * @b: string of 0 and 1 chars
 *
 *Return: converted number, otherwise 0
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int dec_num = 0;

	if (!b)
		return (0);
	while (*b)
	{
		if (*b != '0' && *b != '1')
			return (0);
		dec_num = dec_num * 2 + (*b++ - '0');
	}
	return (dec_num);
}


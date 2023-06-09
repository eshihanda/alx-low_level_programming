#include "main.h"

/**
 * _isalpha - function to print alphabet character
 *
 * @c: the character to be checked
 *
 * Return: 1 for alphabets or 0 if otherwise
 */
int _isalpha(int c)
{
	if ((c >= 97 && c <= 122) || (c >= 65 && c <= 90))
		return (1);
	else
		return (0);
}

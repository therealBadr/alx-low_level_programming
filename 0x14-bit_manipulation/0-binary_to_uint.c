#include "main.h"

/**
 * binary_to_uint - converts a binary number to
 * unsigned int.
 * @b: binary number
 *
 * Return: unsigned int.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n;
	int len, base_two;

	if (!b)
		return (0);
	n = 0;
	len = 0;
	base_two = 1;
	while (b[len])
		len++;
	while (len--)
	{
		if (b[len] != '0' && b[len] != '1')
			return (0);
		if (b[len] & 1)
			n += base_two;
		base_two *= 2;
	}
	return (n);
}

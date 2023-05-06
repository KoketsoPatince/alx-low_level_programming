#include "main.h"
#include <stdio.h>

/**
 * flip_bits - Count the bits needed to flip to get from one number to another.
 * @n: The starting number.
 * @m: The number to flip n to.
 * Return: The number of bits needed to flip to get from n to m.
 */

unsigned int flip_bits(unsigned long int n, unsigned long int m)
{
	unsigned long int x = n ^ m;
	unsigned int bits = 0;

	while (x > 0)
	{
		bits += (x & 1);
		x >>= 1;
	}

	return (bits);
}

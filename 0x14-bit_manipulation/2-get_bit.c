#include "main.h"
#include <stdio.h>

/**
 * get_bit - Gets the value of the bit at a given index.
 * @n: The bit.
 * @index: The index to get the value at,start from 0.
 * Return: The value of bit at index and if an error occurs return -1.
 */

int get_bit(unsigned long int n, unsigned int index)
{



	if (index >= (sizeof(n) * 8))
		return (-1);

	if ((n & (1 << index)) == 0)
		return (0);

	return (1);
}

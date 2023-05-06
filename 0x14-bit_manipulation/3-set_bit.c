#include "main.h"
#include <stdio.h>


/**
 * set_bit - Sets the index value of the bit at a given index to 1.
 * @n: A pointer to the bit you want to set.
 * @index: The index to set the value at starts from 0.
 * Return: 1 if successful and -1 if unsuccessful
 */


int set_bit(unsigned long int *n, unsigned int index)
{
	if (index >= (sizeof(n) * 8))
		return (-1);

	*n ^= (1 << index);

	return (1);
}

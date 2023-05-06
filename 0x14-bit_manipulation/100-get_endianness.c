#include "main.h"
#include <stdio.h>

/**
 * get_endianness - A function that checks the endianness.
 * Return: If little-endian 1 and if big-endian 0.
 */


int get_endianness(void)
{
	unsigned int n = 1;
	char *endian = (char *)&n;

	if (*endian == 1)
		return (1);

	return (0);
}

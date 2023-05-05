#include "main.h"

/**
 * binary_to_uint - Converts a binary number to an unsigned int.
 * @b: A pointer, pointing to a string of 0 and 1 chars.
 * Return: The converted number,if NULL is b or contains not 0 or 1 return 0.
 */
unsigned int binary_to_uint(const char *b)
{
	unsigned int n = 0;
	int s = 0;

	if (b[s] == '\0')
		return (0);

	while ((b[s] == '0') || (b[s] == '1'))
	{
		n <<= 1;
		n += b[s] - '0';
		s++;
	}

	return (n);
}

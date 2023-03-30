#include "main.h"

/**
 * _strncpy -  copies a string
 *
 * @dest: destination string
 *
 * @src: source string
 *
 * @n: number of bytes of str to concatenate
 *
 * Return: a pointer to the resulting string dest
 */

char *_strncpy(char *dest, char *src, int n)
{
	int destlen = 0;
	int srclen = 0;
	int i = 0;

	for (i = 0; dest[i] != '\0' ; i++)
		destlen++;
	for (i = 0; src[i] != '\0' ; i++)
		srclen++;
	for (i = 0; i < n ; i++)
		dest[destlen + i] = src[i];
	return (dest);
}

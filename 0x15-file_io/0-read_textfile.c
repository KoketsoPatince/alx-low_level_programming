#include "main.h"
#include <stdlib.h>

/**
 * read_textfile - Reads a text file and prints it to the stdout.
 * @filename: A pointer to the file name.
 * @letters: The number of letters the function should read and write.
 * Return: If filename is NULL or file can not be opened or read - 0.
 *         If write fails or does not write the required amount of bytes - 0.
 */


ssize_t read_textfile(const char *filename, size_t letters)
{
ssize_t o;
ssize_t r;
ssize_t w;
char *n;

	if (filename == NULL)
		return (0);

	n = malloc(sizeof(char) * letters);
	if (n == NULL)
		return (0);

	o = open(filename, O_RDONLY);
	r = read(o, n, letters);
	w = write(STDOUT_FILENO, n, r);

	if (o == -1 || r == -1 || w == -1 || w != r)
	{
		free(n);
		return (0);
	}

	free(n);
	close(o);

	return (w);
}

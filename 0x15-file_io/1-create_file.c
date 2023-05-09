#include "main.h"

/**
 * create_file - Creates a file.
 * @filename: A pointer to the name of the created file.
 * @text_content: A pointer to the string writen into the file.
 * Return: If the function is unsuccessful -1 and 1 when successful.
 */


int create_file(const char *filename, char *text_content)
{
int o = 0;
int w = 0;
int n = 0;

	if (filename == NULL)
		return (-1);

	if (text_content != NULL)
	{
		for (n = 0; text_content[n];)
			n++;
	}

	o = open(filename, O_CREAT | O_RDWR | O_TRUNC, 0600);
	w = write(o, text_content, n);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

#include "main.h"
#include <stdio.h>

/**
 * append_text_to_file - Appends text at the end of a file.
 * @filename: A pointer to the file name.
 * @text_content: The string to be added to the end of the file.
 * Return: If the function fails or filename is NULL - -1.
 *         If the file does not include the user lacks write permissions - -1.
 *         when successful - 1.
 */


int append_text_to_file(const char *filename, char *text_content)
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

	o = open(filename, O_WRONLY | O_APPEND);
	w = write(o, text_content, n);

	if (o == -1 || w == -1)
		return (-1);

	close(o);

	return (1);
}

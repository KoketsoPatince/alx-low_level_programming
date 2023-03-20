#include <stdio.h>

/*
 * main - this is the main function.the entry point.
 *
 * Return - always 0 when successful
 *
 */

int main(void)
{
	char i;

	for (i = 'a'; i <= 'z'; i++)
		putchar(i);
	for (i = 'A'; i <= 'Z'; i++)
		putchar(i);
	putchar('\n');
	return (0);
}

#include <stdio.h>

/*
 * main - the entry point,print the alphabet in lowercase,and then in uppercase
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

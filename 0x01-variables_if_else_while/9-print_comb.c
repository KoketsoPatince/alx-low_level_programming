#include <stdio.h>

/**
 * main - the main function. the entry point
 *
 * Return: always 0 when successful
 *
 */

int main(void)
{
	int i;

	for (i = 0 ; i < 10 ; i++)
	{
putchar(i + '0');
if (i != 10)
{               putchar(',');
		putchar(' ');
	}
}
putchar('\n');
return (0);

}

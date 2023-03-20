#include <stdio.h>
/**
 * main - its the main function. the entry point
 *
 * Return: always 0 when successful
 *
 */

int main(void)
{
int i;
char j;
for (i = 0 ; i < 10 ; i++)
	putchar(i + '0');
for (j = 'a' ; j <= 'f' ; j++)
	putchar(j);
putchar('\n');
return (0);
}

#include <stdio.h>
/**
 * main - this is the main function,the entry point.
 *
 * Return: always 0 when successsful
 */

int main(void)
{
int i;
int j;

for (i = 0 ; i < 99; i++)
{
for (j = 1 ; j < 99; j++)
{
if (i < j && i != j)
{
putchar(i + '0');
putchar(j + '0');
if (i + j != 18)
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

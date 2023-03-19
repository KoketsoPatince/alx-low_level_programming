#include <stdio.h>

/** 
 * main - the main function. the entry point.
 *
 * Return: always 0 when successful
 *
 */

int main(void)
{

char i;
for (i = "z" ; i >= "a" ; i--)
	putchar(i);
putchar("\n");
return (0);
}

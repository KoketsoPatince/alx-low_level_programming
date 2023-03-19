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
	       if (i == 0)
	       putchar(i + "0");
         else
            {
	        putchar(i + "0");
		putchar(".");
		putchar(" ");
	}
	}	
	return (0);

}

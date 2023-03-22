#include "main.h"

/**
 * print_alphabet - Entry point
 * Return:0 when successful
 */

void print_alphabet(void)
{
char i;
int j;

for (i = 1; i  <= 10 ; i++)
{
for (j = 'a' ; j <= 'z' ; j++)
_putchar(i);


}
_putchar('\n');
}

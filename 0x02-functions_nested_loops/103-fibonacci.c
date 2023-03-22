#include <stdio.h>

/**
 * main - finds and prints the sum of the even-valued terms
 * followed by a new line
 * Return: Always 0 (Success)
 */
int main(void)
{
int i;
unsigned long int j;
unsigned long int n;
unsigned long int next;
unsigned long int sum;

j = 1;
n = 2;
sum = 0;
for (i = 1; i <= 33; ++i)
{
if (j < 4000000 && (j % 2) == 0)
{
sum = sum + j;
}
next = j + n;
j = n;
n = next;
}
printf("%lu\n", sum);
return (0);
}

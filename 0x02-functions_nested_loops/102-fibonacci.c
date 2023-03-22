#include <stdio.h>

/**
 * main - prints the first 50 Fibonacci numbers, starting with 1 and 2
 * followed by a new line
 * Return: Always 0 when successful
 */
int main(void)
{
long int i;
long int j;
long int n;
long int next;

	j = 1;

	n = 2;

	for (i = 1; i <= 50; ++i)
	{
		if (j != 20365011074)
		{
			printf("%ld, ", j);
		} else
		{
			printf("%ld\n", j);
		}
		next = j + n;
		j = n;
		n = next;
	}

	return (0);
}

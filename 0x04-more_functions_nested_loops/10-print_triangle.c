#include "main.h"

/**
 * print_triangle - prints a triangle, followed by a new line
 * @size:  is the size of the triangle
 *
 * Return: void
 */

void print_triangle(int size)
{
int i;
int k;
int j;

if (size <= 0)
_putchar('\n');
else
{
for (i = 0; i < size; i++)
{
for (k = i; k < (size - (j + 1)); k++)
_putchar(' ');
for (j = 0; j <= i; j++)
{
_putchar('#');
}
_putchar('\n');
j = 0;
}
}
}

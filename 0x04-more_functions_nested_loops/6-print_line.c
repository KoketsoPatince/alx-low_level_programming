#include "main.h"

/**
 * print_line - draws a straight line in the terminal
 *
 * @n: declared variable
 *
 * Return: void
 */

void print_line(int n)
{
int print_times;

	for (print_times = 0; print_times < n; print_times++)
	{
		if (n <= 0)
			break;
		_putchar('_');
	}
	_putchar('\n');
}

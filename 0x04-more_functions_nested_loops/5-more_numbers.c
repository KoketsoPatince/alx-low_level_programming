#include "main.h"

/**
 * more_numbers - 10 times the numbers, from 0 to 14
 *
 * Return: void
 */

void more_numbers(void)
{
	int print_number;
	int i;

	for (print_number = 0; print_number < 10; print_number++)
	{
		for (i = 0; i <= 14; i++)
		{
			if (i > 9)
				_putchar('0' + i / 10);
			_putchar('0' + i % 10);
		}
		_putchar('\n');
	}
}

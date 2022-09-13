#include "main.h"

/**
 * times_table- prints the times table of 9
 *
 * Return: Always 0.
 */

void times_table(void)
{

	int x, y, multiple;

	for (x = 0; x <= 9; x++)
	{
	for (y = 0; y <= 9; y++)
	{
	multiple = x * y;
	if (y != 0)

	{
	_putchar(',');
	_putchar(' ');

	}
	if (y == 0)
	{
	_putchar('0');
	}

	else if (multiple >= 10)
	{
		_putchar((multiple / 10) + '0');
		_putchar((multiple % 10) + '0');
	}
	else if ((multiple < 10) && (y != 0))
	{
		_putchar(' ');
		_putchar((multiple % 10) + '0');
	}
	}
		_putchar('\n');
	}
}

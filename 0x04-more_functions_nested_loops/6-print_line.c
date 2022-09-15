#include "main.h"

/**
 * print_line - prints lines
 * @n: number of line
 * Return: Always 0.
 */


void print_line(int n)
{
	int i = 0;

	if (n > 0)
	{

	for (i = 0; i < n; i++)
	{

	_putchar('_');
	}

	_putchar('\n');
	}

	else
	_putchar('\n');
}

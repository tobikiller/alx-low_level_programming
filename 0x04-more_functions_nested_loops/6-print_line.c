#include "main.h"

/**
 * print_line - prints line
 * @n: number of line
 * Return: Always 0.
 */


void print_line(int n)
{
	int a = 0;

	if (n > 0)
	{

	while (a <= n)
	{

	_putchar('_');
	a++;

	}

	_putchar('\n');
	}

	else
	_putchar('\n');
}

#include "main.h"

/**
 * print_diagonal - check the code
 * @n: interger number
 * Return: Always 0.
 */

void print_diagonal(int n)
{
	int a;
	int b;

	if (n > 0)
	{
	for (a = 0; a < n; a++)
	{
	for (b = 0; b < n; b++)
	{
	_putchar(' ');
	}
	_putchar('\\');
	_putchar('\n');

	}



	}
	else
	_putchar('\n');

}

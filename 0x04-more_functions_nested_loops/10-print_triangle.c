#include "main.h"

/**
 * print_triangle - check the code
 * @size: size interger
 * Return: Always 0.
 */

void print_triangle(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	for (a = 1; a <= size; a++)
	{
	for (b = a; b < size; b++)
	{
	_putchar(' ');
	}
	for (b = a; b <= size ; b++)
	{
	_putchar('#');
	}
	_putchar('\n');
	}
	}
	else
	_putchar('\n');

}

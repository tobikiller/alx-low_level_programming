#include "main.h"

/**
 * print_square - check the code
 * @size: size interger
 * Return: Always 0.
 */

void print_square(int size)
{
	int a;
	int b;

	if (size > 0)
	{
	for (a = 0; a < size; a++)
	{
	for (b = 0; b < size; b++)
	{
	_putchar('#');
	}
	_putchar('\n');

	}



	}
	else
	_putchar('\n');

}

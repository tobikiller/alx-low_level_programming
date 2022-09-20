#include "main.h"

/**
 * puts_half - prints character with newline
 * @str: character string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, c;
	char a;

	for (i = 0; str[i] != 0; i++)
	{
	}
	if (i % 2 == 0)
	{
	for ((c = i / 2); str[c] != 0; c++)
	{
	a = str[c];
	_putchar(a);
	}
	}
	else
	{
	for ((c = (i - 1)); str[c] != 0; c++)
	a = str[c];
	_putchar(a);
	}
	_putchar('\n');
}

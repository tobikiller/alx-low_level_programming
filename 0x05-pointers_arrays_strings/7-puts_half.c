#include "main.h"

/**
 * puts_half - prints character with newline
 * @str: character string
 * Return: Always 0.
 */

void puts_half(char *str)
{
	int i, c;
	char l;

	for (i = 0; str[i] != 0; i++)
	{
	}

	if (i % 2 == 0)
	{
	for ((c = i / 2); str[c] != 0; c++)
	{
	l = str[c];
	_putchar(l);
	}
	}
	else
	{
	for ((c = (i - 1) / 2); str[c] != 0; c++)
	{
	l = str[c];
	_putchar(l);
	}
	}
	_putchar('\n');
}

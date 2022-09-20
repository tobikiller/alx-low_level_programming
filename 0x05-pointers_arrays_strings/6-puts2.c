#include "main.h"

/**
 * puts2 - prints character with newline
 * @str: character string
 * Return: Always 0.
 */

void puts2(char *str)
{
	int i;
	char a;

	for (i = 0; str[i] != 0; i++)
	{
	if (i % 2 == 0)
	{
	a = str[i];
	_putchar(a);
	}
	}
	_putchar('\n');
}

#include "main.h"
#include <string.h>

/**
 * _puts - prints string
 * @str: character
 * Return: return string.
 */

void _puts(char *str)
{
	int c = 0;

	while (str[c] != '\0')
	{
	_putchar(str[c]);
	c++;
	}

	_putchar('\n');
}

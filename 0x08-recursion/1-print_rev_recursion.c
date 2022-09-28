#include "main.h"

/**
 * print_rev_recrusion - check the code
 * @s: string
 * Return: Always 0.
 */

void _print_rev_recursion(char *s)
{
	if (*s)
	{

	_print_rev_recursion(s + 1);
	_putchar(*s);

	}

}

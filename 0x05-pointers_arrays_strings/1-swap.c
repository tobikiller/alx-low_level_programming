#include "main.h"

/**
 * swap_int - swaping interger
 * @a: interger a
 * @b: interger b
 * Return: Always 0.
 */

void swap_int(int *a, int *b)
{
	int temporal = *a;
	*a = *b;
	*b = temporal;
}

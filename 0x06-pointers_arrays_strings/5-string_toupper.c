#include "main.h"

/**
 * *string_toupper - check the code
 * @a: pointer
 * Return: Always 0.
 */

char *string_toupper(char *a)
{
	int j = 0;

	while (a[j] != '\0')
	{
	if (a[j] > 90 && a[j] != 10)
	{
	a[j] = a[j] - 32;
	}
	j++;
	}

	return (a);
}

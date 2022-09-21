#include "main.h"

/**
 * *_strncat - appends strings
 * @dest: first strings
 * @src: second strings
 * @n: n bytes
 * Return: Always 0.
 */

char *_strncat(char *dest, char *src, int n)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	b = 0;

	while (src[b] != '\0' && b < n)
	{
	dest[a] = src[b]; /*hello world */
	a++;
	b++;
	}

	dest[a] = '\0';

	return (dest);
}

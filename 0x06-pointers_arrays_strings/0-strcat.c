#include "main.h"

/**
 * *_strcat - appends strings
 * @dest: first strings
 * @src: second strings
 * Return: Always 0.
 */

char *_strcat(char *dest, char *src)
{
	int a, b;

	a = 0;

	while (dest[a] != '\0')
	{
	a++;
	}

	b = 0;

	while (src[b] != '\0')
	{
	dest[a] = src[b]; /*hello world */
	a++;
	b++;
	}

	return (dest);
}

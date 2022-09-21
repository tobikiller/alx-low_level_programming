#include "main.h"

/**
 * *_strncpy - appends strings
 * @dest: first strings
 * @src: second strings
 * @n: int
 * Return: Always 0.
 */

char *_strncpy(char *dest, char *src, int n)
{
	int a = 0;

	while (a < n && src[a] != '\0')
	{
	dest[a] = src[a];
	a++;
	}
	if(a < n)
	{
	 for(; a < n; a++)
	dest[a] = '\0';

	}

	return (dest);
}

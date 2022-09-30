#include "main.h"
#include <stdlib.h>
/**
 * _strpbrk - lenght of strings
 * @s: strings
 * @accept: strings
 * Return: bytes
 * @accept, or NULL if no such byte is found.
 */

char *_strpbrk(char *s, char *accept)
{
	int i;

	while (*s)
	{
	for (i = 0; accept[i]; i++)
	{
	if (*s == accept[i])
	return (s);
	}
	s++;
	}

	return (NULL);

}

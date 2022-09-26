#include "main.h"
#include <string.h>
#include <stddef.h>
/**
 * _strchr - check character letter
 * @s: string
 * @c: character
 * Return: Always 0.
 */


char *_strchr(char *s, char c)
{
	while (*s)
	{
	if (*s != c)
	s++;
	else
	return (s);
	}

	if (c == '\0')
	return (s);
	return (NULL);
}

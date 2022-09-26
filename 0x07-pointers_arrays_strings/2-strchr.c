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
	while (*s != '\0')
	{
	if (*s == c)
	return (s);
	s++;
	}
	else
	return (NULL);
}

#include "main.h"

/**
 * _strcmp - compare two strings
 * @s1: String 1
 * @s2: string 2
 * Return: Always 0.
 */

int _strcmp(char *s1, char *s2)
{
	int a, b;

	b = 0;
	a = b;

	while (s1[a] != '\0' && s2[a] != '\0')
	{

	if (s1[a] != s2[a])
	{

	b = s1[a] - s2[a];
	break;

	}
	a++;

	}

	return (b);
}

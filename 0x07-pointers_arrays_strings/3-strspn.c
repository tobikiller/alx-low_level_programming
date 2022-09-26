#include "main.h"
#include <stdbool.h>
#include <string.h>
/**
 * strspn - lenght of strings
 * @s: strings
 * @accept: strings
 * Return: Always 0.
 */

unsigned int _strspn(char *s, char *accept)
{
	size_t inital_length = 0;

	size_t len1 = strlen(s);
	size_t len2 = strlen(accept);

	for (size_t i = 0; i < len1; i++)
	{
	bool found_match = false;
	for (size_t j = 0; j < len2; j++)
	if (accept[j] == s[i])
	{
	found_match = true;
	break;
	}

	if (!found_match)
	break;
	else
	inital_length++;
	}

	return inital_length;
}

#include "main.h"

/**
 * *cap_string - check the code
 * @str: pointer
 * Return: Always 0.
 */

char *cap_string(char *str)
{
	int symb[14] = {' ', '\t', '\n', '.', ',', '!','?',
	'"', '(', ')', '{', '}'};

	int j, i;

	for (j = 0; str[j] != '\0'; j++)
	{
	if (str[0] >= 97 && str[0] <= 122)
	{
	str[0] = str[0] - 32;
	}
	for (i = 0; i < 14; i++)
	if (str[j] >= 97 && str[j] <= 122 && str[j - 1] == symb[i])
	str[j] = str[j] - 32;
	}

	return (str);
}

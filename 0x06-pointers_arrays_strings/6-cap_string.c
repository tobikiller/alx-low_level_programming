#include "main.h"

/**
 * *cap_string - check the code
 * @str: pointer
 * Return: Always 0.
 */

char *cap_string(char *str)
{

	int symb[14] = {' ', '\t', '\n', ',', ';', '.', '!','?', '"', '(', ')', '{', '}'};
	int i;
	int j = 0;

	while (str[j] != '\0')
	{
	if (str[j] > 97 && str[j] != 122)
	{
	str[j] = str[j] - 32;
	}

	for (i = 0; i < 14; i++)
	if (str[i] >= 97 && str[i] <= 122 && str[i - 1] == symb[j])
	str[i] = str[i] - 32;
	j++;
	}

	return (str);
}

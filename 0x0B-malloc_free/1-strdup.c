#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * strdup- create duplicate of string
 * @str: pointer of string
 *
 * Return: newString.
 */

char *_strdup(char *str)
{
	char *newString;
	int index, length = 0;

	for (index = 0; str[index]; index++)
	length++;

	if (str == NULL)
	return (NULL);


	newString = malloc(sizeof(char) * (length + 1));

	if (newString == NULL)
	return (NULL);


	for (index = 0; str[index]; index++)
	newString[index] = str[index];

	newString[length] = '\0';

	return (newString);
}

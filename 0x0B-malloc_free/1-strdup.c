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
	int lenght = strlen(str);

	newString = malloc(sizeof(char) * lenght);

	if (newString == NULL)
	return (NULL);

	if (str == NULL)
	return (NULL);

	strcpy(newString, str);

	return (newString);
}

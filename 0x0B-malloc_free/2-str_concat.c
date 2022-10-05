#include "main.h"
#include <stdlib.h>
#include <string.h>

/**
 * str_concat- create duplicate of string
 * @s1: pointer of string
 * @s2: pointer of string
 * Return: newString.
 */

char *str_concat(char *s1, char *s2)
{


	int i, j;
	char *totalString;
	int len1 = strlen(s1);
	int len2 = strlen(s2);

	totalString = malloc(sizeof(char) * (len1 + len2));

	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)
	s2 = "";

	if (totalString == NULL)
	return (NULL);



	for (i = 0; i < len1; i++)
	{
	totalString[i] = s1[i];
	}


	for (j = 0; j <= len2; j++, i++)
	{
	totalString[i] = s2[j];
	}
	return (totalString);
}

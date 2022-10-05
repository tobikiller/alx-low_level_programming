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


	char *totalString;
	int index;
	int len1 = 0;
	int len2 = 0;


	if (s1 == NULL)

	s1 = "";

	if (s2 == NULL)
	s2 = "";

	for (index = 0; s1[index] || s2[index]; index++)
		len2++;


	totalString = malloc(sizeof(char) *  len2);


	if (totalString == NULL)
	return (NULL);



	for (index = 0; s1[index]; index++)
	totalString[len1++] = s1[index];

	for (index = 0; s2[index]; index++)
	totalString[len1++] = s2[index];
	return (totalString);
}

#include "main.h"
#include <stdlib.h>



/**
* string_nconcat - concatenates two strings
*
* @s1: first string
* @s2: second string
* @n: the number of bytes to include of @s2
*
* Return: newly allocated space in memory;
* NULL if the function fails
*/



char *string_nconcat(char *s1, char *s2, unsigned int n)
{
	char *str;
	unsigned int i = 0;
	unsigned int j = 0;
	unsigned int c = 0;
	unsigned int a;
	unsigned int b;
	unsigned int lenght;

	if (s1 == NULL)
	s1 = "";

	if (s2 == NULL)
	s2 = "";

	while (s1[i])
		i++;

	while (s2[j++])
		j++;

	if (j > n)
		j = n;

	lenght = i + j;

	str = malloc(sizeof(char) * (lenght + 1));

	if (str == NULL)
		return (NULL);

	for (a = 0; a < i; a++)
		str[c++] = s1[a];

	for (b = 0; b < j; b++)
		str[c++] = s2[b];

	str[c] = '\0';

	return (str);

}

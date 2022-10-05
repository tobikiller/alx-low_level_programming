#include "main.h"
#include <stdlib.h>

/**
 * create_array - create array of library
 * @size: size of interger
 * @c: character array
 *
 * Return: array.
 */

char *create_array(unsigned int size, char c)
{
	char *arrays;
	unsigned int number;


	arrays = malloc(sizeof(char) * size);

	if (size == 0)
	return (NULL);

	if (arrays == NULL)
	return (NULL);

	for (number = 0; number < size; number++)
	{
	arrays[number] = c;
	}

	return (arrays);
}

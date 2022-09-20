#include "main.h"
#include <stdio.h>

/**
 * *_strcpy - copies the string including the null byte to the buffer
 * @src: points to a string
 * @dest: points to the buffer
 * Return: Always 0.
 */

char *_strcpy(char *dest, char *src)
{
	int index = 0;

	while (src[index])
	{
	dest[index] = src[index];
	index++;
	}

	return(dest);

}

#include "main.h"

/**
* _memcpy - fills memory with a constant byte
* @src: source character
* @n: byte to fill with
* @dest: character destination
*
* Return: pointer to memory area s
*/


char *_memcpy(char *dest, char *src, unsigned int n)
{

	unsigned int i = 0;
	char *cdest = (char *)dest;
	char *csrc = (char *)src;

	while (i < n)
	{
	cdest[i] = csrc[i];
	i++;
	}

	return (dest);
}

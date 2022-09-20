#include "main.h"
#include <string.h>
/**
 * rev_string - print string in reverse
 * @str: character string
 * Return: Always 0.
 */

void rev_string(char *str)
{
	int i, len, temp;

	len = strlen(str);

	for (i = 0; i < len / 2; i++)
	{
	temp = str[i];
	str[i] = str[len - i - 1];
	str[len - i - 1] = temp;
	}
}

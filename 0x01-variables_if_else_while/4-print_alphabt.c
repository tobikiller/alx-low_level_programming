#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int Ch;

	for (Ch = 'a'; Ch <= 'z'; Ch++)
	{
	if (Ch != 'e' && Ch != 'q')
	{

	putchar(Ch);

	}

	}

	{
	putchar('\n');
	}

	return (0);
}

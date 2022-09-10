#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int n = 1;
	int num1, num2;

	for (num1 = 0; num1 <= 9; num1++)
	{

	for (num2 = n; num2 <= 9 ; num2++)
	{
	putchar(num1 + '0');
	putchar(num2 + '0');

	if (num1 == 9 && num2 == 9)
	continue;
	else if (num1 == 8 && num2 == 9)
	continue;
	putchar(',');
	putchar(' ');

	}
	n++;

	}

	putchar('\n');


	return (0);
}

#include <stdio.h>

/**
  * main - Entry point
  *
  * Return: Always 0 (Success)
  */

int main(void)
{
	int num0, num1, num2;

	for (num0 = '0'; num0 <= '7'; num0++)
	{
	for (num1 = '1'; num1 <= '8'; num1++)
	{
	for (num2 = '2'; num2 <= '9'; num2++)
	if (num0 != num1 && num0 != num2 && num0 < num1 && num1 < num2)
	{
	putchar(num0);
	putchar(num1);
	putchar(num2);
	if (!(num0 == '7' && num1 == '8' && num2 == '9'))
	{
	putchar(',');
	putchar(' ');
	}
	}
	}
	}
	putchar('\n');
	return (0);
}

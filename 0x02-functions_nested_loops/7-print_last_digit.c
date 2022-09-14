#include "main.h"

/**
 * _abs - prints absolute value.
 * @n: absolute value
 * Return: Always 0.
 */

int _abs(int n)

{

	n = n % 10;

	if (n < 0)
	{
	 	n = -10;
		_putchar(n + '0');
		return (n);
	}


}

#include "main.h"

/**
 * jack_bauer - prints last digit.
 *
 * Return: Always 0.
 */

void jack_bauer(void)

{

	int min;
	int hr;

	for (hr = 0; hr < 24; hr++)
	{
		for (min = 0; min < 60; min++)
		{
		_putchar((hr / 10) + '0');
		_putchar((hr % 10) + '0');
		_putchar(':');
		_putchar((min / 10) + '0');
		_putchar((min % 10) + '0');

		_putchar('\n');
		}
	}


}

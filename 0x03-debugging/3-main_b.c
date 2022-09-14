#include "main.h"

/**
* convert_day - converts day of month to day of year, without accounting
* for leap year
* @month: month in number format
* @day: day of month
* Return: day of year
*/


int main(void)
{
	int month;
	int day;
	int year;

	month = 4;
	day = 01;
	year = 1997;

	printf("Date: %02d/%02d/%04d\n", month, day, year);

	day = convert_day(month, day);

	print_remaining_days(month, day, year);

	return (0);

}

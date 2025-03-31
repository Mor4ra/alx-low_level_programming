#include <stdio.h>
#include "main.h"
/**
 * print_remaining_days - takes a date and prints how many days
 * are left in the year, taking leap years into account
 * @month: month in number format
 * @day: day of month
 * @year: year
 * Return: void
 */
void print_remaining_days(int month, int day, int year)
{
	int is_leap;

	if (((year % 4 == 0) && ((year % 100) != 0)) || (year % 400 == 0))
		is_leap = 1;
	else
		is_leap = 0;

	if (month == 2 && day == 29 && !is_leap)
	{
		printf("Invalid date: %02d/%02d/%04d\n", month, day, year);
		return;
	}

	if (is_leap && month > 2)
		day++;

	printf("Day of the year: %d\n", day);
	printf("Remaining days: %d\n", is_leap ? 366 - day : 365 - day);
}

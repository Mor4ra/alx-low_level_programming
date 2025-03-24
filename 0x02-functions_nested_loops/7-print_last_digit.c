#include "main.h"

/**
 * print_last_digit - prints the last the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	a = n % 10;
	a = (a < 0) ? -a : a;
	_putchar(a + '0');

	return (a);
}

#include "main.h"

/**
 * print_last_digit - prints the last the last digit
 * @n: the number
 * Return: value of the last digit
 */
int print_last_digit(int n)
{
	int a;

	n = (n < 0)?-n:n;
	a = n % 10;
	_putchar(a + '0');

	return (a);
}

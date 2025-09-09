#include "main.h"

/**
 * _prime_helper - recursively checks if a number is prime.
 * @i: possible factor of the number.
 * @n: the number to check it`s primality.
 * Return: 1 if prime, 0 otherwise.
 */
int _prime_helper(int i, int n)
{
	if (i * i > n)
		return (1);
	if (n % i == 0)
		return (0);
	return (_prime_helper(i + 1, n));
}

/**
 * is_prime_number - checks if a number is prime.
 * @n: the number to check it's primality.
 * Return: 1 if prime, 0 otherwise.
 */
int is_prime_number(int n)
{
	int i = 2;

	if (n <= 1 || n % 2 == 0)
		return (0);
	return (_prime_helper(i, n));
}

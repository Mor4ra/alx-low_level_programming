#include "main.h"

/**
 * _bsqrt - a helper function for `_sqrt_recursion()` which uses
 * binary search to look for the sqrt of `n`.
 * @low: the lower limit.
 * @high: the higher limit.
 * @n: the number to find it`s square root.
 * Return: the square root of `n` or -1 if `n` doesn`t have a
 * perfect square root.
 */
int _bsqrt(int low, int high, int n)
{
	int mid;

	if (low > high)
		return (-1);
	if (n == 0 || n == 1)
		return (n);

	mid = (low + ((high - low) / 2));
	/* Avoid overflow: compare using division and modulo */
	if ((mid != 0) && (mid == n / mid) && (n % mid == 0))
		return (mid);

	if (mid > n / mid)
		return (_bsqrt(low, mid - 1, n));
	return (_bsqrt(mid + 1, high, n));
}

/**
 * _sqrt_recursion - recursively calculates the square root of
 * `n` using a helper function.
 * @n: the number to find it`s square root.
 * Return: the square root of n.
 */
int _sqrt_recursion(int n)
{
	int low = 0, high = ((n / 2) + 1);

	if (n < 0)
		return (-1);
	return (_bsqrt(low, high, n));
}

#include "main.h"
/**
 * largest_number - returns the largest of 3 numbers
 * @a: first integer
 * @b: second integer
 * @c: third integer
 * Return: largest number
 */
int largest_number(int a, int b, int c)
{
	if (a == b || b == c || a == c)
	{
		if (a == b && b == c)
		{
			return (a);
		}
		else
		{
			return ((a > c) ? a : c);
		}
	}
	return ((a > b) ? ((a > c) ? a : c) : (b > c) ? b : c);
}


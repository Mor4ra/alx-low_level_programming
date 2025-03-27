#include <stdio.h>

/**
 * main - prints the first 98 fibonacci values.
 * Here's the catch tho, we're not gonna use `long long`,
 * `malloc`, arrays, we're gonna write code that strictly
 * follows `ISO C90` standards.
 *
 * Return: 0
 */
int main(void)
{
	unsigned long a1 = 1, a2 = 0;
	unsigned long b1 = 2, b2 = 0;
	unsigned long c1, c2;
	unsigned long limit = 1000000000UL; /* a billion */
	int count = 2;

	printf("%lu, %lu", a1, b1);

	while (count < 98)
	{
		c1 = a1 + b1;
		c2 = a2 + b2;

		if (c1 >= limit)
		{
			c1 -= limit;
			c2 += 1;
		}

		if (c2 == 0)
			printf(", %lu", c1);
		else
			printf(", %lu%09lu", c2, c1);

		/* update values */
		a1 = b1;
		a2 = b2;
		b1 = c1;
		b2 = c2;

		count++;
	}
	putchar('\n');

	return (0);
}

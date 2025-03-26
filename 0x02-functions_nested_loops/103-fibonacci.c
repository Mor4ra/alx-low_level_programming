#include <stdio.h>
/**
 * main - prints the sum of even fibonacci nums
 * less then 4000000
 *
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;

	printf("%lu", b);
	while (1)
	{
		c = a + b;
		if (c >= 4000000)
			break;

		if ((c % 2) == 0)
		{
			printf(", %lu", c);
		}
		a = b;
		b = c;
	}
	putchar('\n');
	return (0);
}

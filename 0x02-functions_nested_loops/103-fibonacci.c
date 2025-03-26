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
	unsigned long int sum = 2;

	while (1)
	{
		c = a + b;
		if (c >= 4000000)
			break;

		if ((c % 2) == 0)
		{
			sum += c;
		}
		a = b;
		b = c;
	}
	printf("%lu\n", sum);
	return (0);
}

#include <stdio.h>
/**
 * main - prints the first 50 fibonacci numbers
 * Return: 0
 */
int main(void)
{
	unsigned long int a = 1, b = 2, c;
	int i = 3;

	printf("%lu, %lu", a, b);

	while (i < 50)
	{
		c = a + b;
		printf(", %lu", c);

		a = b;
		b = c;
		i++;
	}
	putchar('\n');

	return (0);
}

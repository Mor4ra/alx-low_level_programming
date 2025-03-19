#include <stdio.h>

/**
 * main - prints all possible combinations of two-two digit numbers
 * Return: 0
 */
int main(void)
{
	int num = 0;
	int num1, num2;

	while (num < 10000)
	{
		num1 = num / 100;
		num2 = num % 100;

		if (num1 < num2)
		{
			putchar((num1 / 10) + '0');
			putchar((num1 % 10) + '0');
			putchar(' ');
			putchar((num2 / 10) + '0');
			putchar((num2 % 10) + '0');

			if (!(num1 == 98 && num2 == 99))
			{
				putchar(',');
				putchar(' ');
			}
		}
		num++;
	}
	putchar('\n');
	return (0);
}

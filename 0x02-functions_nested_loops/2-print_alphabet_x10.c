#include "main.h"

/**
 * print_alphabet_x10 - prints the alphabets 10x
 */
void print_alphabet_x10(void)
{
	int i = 0;
	int a;

	while (i < 10)
	{
		a = 'a';
		while (a <= 'z')
		{
			_putchar(a);
			a++;
		}
		_putchar('\n');
		i++;
	}
}

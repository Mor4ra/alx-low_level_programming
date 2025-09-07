#include "main.h"

/**
 * _puts_recursion - print a string recursively.
 * @s: the string to print.
 * Return: nothing.
 */
void _puts_recursion(char *s)
{
	int i = 0;

	if (s[i] != '\0')
	{
		_putchar(s[i]);
		_puts_recursion(s + 1);
	}

	if (s[i] == '\0')
		_putchar('\n');
}

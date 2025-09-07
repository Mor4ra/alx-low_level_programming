#include "main.h"

/**
 * _strlen_recursion - recursively calculates the length of `s`.
 * @s: the string.
 * Return: the length.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

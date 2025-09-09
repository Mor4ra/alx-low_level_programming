#include "main.h"

/* function prototypes */
int _palindrome_helper(char *start, char *end);
int _strlen_recursion(char *s);


/**
 * is_palindrome - checks if a string is a palindrome.
 * @s: the string to check.
 * Return: 1 if true, 0 otherwise.
 */
int is_palindrome(char *s)
{
	char *start = s, *end;
	int len;

	len = _strlen_recursion(s);
	if (len <= 1)
		return (1);

	end = s + len - 1;

	return (_palindrome_helper(start + 1, end - 1));
}

/**
 * _palindrome_helper - recursively checks if a string is a
 * palindrome.
 * @start: the 2nd character of the string.
 * @end: the 2nd last character of the string.
 * Return: 1 if the string is palindrome, 0 otherwise.
 */
int _palindrome_helper(char *start, char *end)
{
	if (start >= end)
		return (1);
	if (*start != *end)
		return (0);
	return (_palindrome_helper(start + 1, end - 1));
}

/**
 * _strlen_recursion - recursively calculates the length of a
 * string.
 * @s: the string to find it`s length.
 * Return: the length of `s`.
 */
int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

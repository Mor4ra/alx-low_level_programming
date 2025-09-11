#include "main.h"

/**
 * wildcmp - checks if two strings can be considered identical.
 * @s1: the first string.
 * @s2: the second string.
 * Return: 1 if the two strings match, 0 otherwise.
 */
int wildcmp(char *s1, char *s2)
{
	/* base cases */
	if (*s1 == '\0' && *s2 == '\0')
		return (1);
	if (*s2 == '\0' && *s1 != '\0')
		return (0);
	if (*s1 == '\0')
	{
		/* only match if remaining s2 is all `*`s */
		if (*s2 == '*')
			return (wildcmp(s1, s2 + 1));
		else
			return (0);
	}

	if (*s2 == '*')
	{
		/* 2 options */
		return ((wildcmp(s1, s2 + 1)) || (wildcmp(s1 + 1, s2)));
	}
	else if (*s2 == *s1)
	{
		return (wildcmp(s1 + 1, s2 + 1));
	}
	else
	{
		return (0);
	}
}

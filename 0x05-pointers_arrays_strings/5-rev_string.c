#include "main.h"

/**
 * rev_string - reverses a string.
 * @s: the string to be reversed.
 * Return: nothing
 */
void rev_string(char *s)
{
	/**
	 * `i` is the starting index and `j` the last one
	 */
	int i = 0, j = 0, temp;

	while (s[j] != '\0')
	{
		j++;
	}
	j--; /* reset to actual string length */

	while (i < j)
	{
		temp = s[i];
		s[i] = s[j];
		s[j] = temp;

		i++;
		j--;
	}
}

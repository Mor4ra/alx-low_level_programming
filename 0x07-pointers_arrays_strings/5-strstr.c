#include "main.h"

/**
 * _strstr - searches a string needle within a larger string
 * haystack.
 *
 * @haystack: the string to search within.
 * @needle: the string to look for.
 * Return: location of the first occurrence of needle in
 * haystack or NULL if not found.
 */
char *_strstr(char *haystack, char *needle)
{
	/* index i for haystack and j for needle */
	int i = 0, j;

	/* if needle is empty, return haystack */
	if (needle[0] == '\0')
		return (haystack);

	/* trying every possible start position */
	while (haystack[i] != '\0')
	{
		j = 0;
		/* attempt to match needle at haystack[i]. */
		while (needle[j] != '\0'
			&& haystack[i + j] != '\0'
			&& haystack[i + j] == needle[j])
		{
			j++;
		}
		/* if needle is exhausted, a match was found */
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		i++;

	}

	/* reached the end of haystack with no match */
	return (NULL);
}

#include "main.h"

/**
 * _strstr - searches a string 'needle' within a larger string
 * 'haystack'.
 *
 * @haystack: the string to search within.
 * @needle: the string to look for.
 * Return: location of the first occurence of 'needle' in
 * 'haystack' or NULL if "there`s no needle in the haystack".
 */
char *_strstr(char *haystack, char *needle)
{
	/* index i for haystack and j for needle */
	int i = 0, j;

	/**
	 * if needle is empty, return 'haystack', why?
	 * when there's nothing to look for, you can always
	 * consider it found at the start.
	 */
	if (needle[0] == '\0')
		return (haystack);

	/**
	 * trying every possible start position(of needle)
	 * 'i' in 'haystack.
	 */
	while (haystack[i] != '\0')
	{
		j = 0;
		/**
		 * attempting to match all of 'needle' starting
		 * at haystack[i].
		 */
		while (1)
		{
			if (needle[j] == '\0')
				break;
			if (haystack[i + j] == '\0')
				break;
			if (haystack[i + j] != needle[j])
				break;
			/* otherwise */
			j++;
		}
		/* if needle is exhausted, a match was found */
		if (needle[j] == '\0')
		{
			return (&haystack[i]);
		}
		else
		{
			/* move start position and try again */
			i++;
		}

	}

	/* reached the end of haystack with no match */
	return (NULL);
}

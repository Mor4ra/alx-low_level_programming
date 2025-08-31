#include "main.h"

/**
 * _strpbrk - locates the first occurence in the string 's'
 * of any character in the string 'accept'.
 * @s: the string to scan.
 * @accept: the set of characters to search for.
 * Return: a pointer to first occurence in 's' of any character
 * from 'accept', or NULL if no such character exists.
 */
char *_strpbrk(char *s, char *accept)
{
	int i = 0, j;

	while (s[i] != '\0')
	{
		j = 0;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				/**
				 * match found:
				 * return pointer to this
				 * position in 's'.
				 */
				return &(s[i]);
			}
			j++;
		}
		i++;
	}
	/* no match found: return NULL */
	return NULL;
}

#include "main.h"

/* _strspn - calculates the length of the maximum initial
 * segment of the string 's' that consists entirely of
 * characters contained in the string 'accept'.
 *
 * [scanning stops at the first character in 's' that is not
 * present in 'accept']
 * @s: the string the function scans while comparing it
 * to 'accept'.
 * @accept: characters to be counted in 's' have to be here
 * Return: the number of the first consecutive characters of
 * 's' in 'accept'.
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int count = 0;
	int i = 0, j, found;

	while (s[i] != '\0')
	{
		j = 0;
		found = FALSE;
		while (accept[j] != '\0')
		{
			if (s[i] == accept[j])
			{
				found = TRUE;
				break;
			}
			j++;
		}
		if (found == TRUE)
			count = count + 1;
		else
		{
			/**
			 * first character of 's' not in
			 * 'accept', stop scanning.
			 */
			return (count);
		}
		i++;
	}

	return (count);
}

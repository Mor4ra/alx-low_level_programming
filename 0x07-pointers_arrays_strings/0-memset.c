#include <stdio.h>

/**
 * _memset - fills memory with a constant byte.
 * @s: pointer to the memory area.
 * @b: the byte to be filled constantly.
 * @n: the number of times to fill 'b'.
 * Return: pointer to the memory area.
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i; /* index to loop thru the memory area */

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

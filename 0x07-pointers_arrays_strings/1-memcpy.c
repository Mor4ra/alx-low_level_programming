#include "main.h"

/**
 * _memcpy - copies the contents of a memory area to another.
 * @dest: the destination memory area.
 * @src: the memory the function copies from.
 * @n: the number of bytes to be copied from 'dest'.
 * Return: pointer to the new memory area.
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i; /* index for the two memory areas */

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

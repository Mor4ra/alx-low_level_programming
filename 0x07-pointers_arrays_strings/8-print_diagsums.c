#include "main.h"
#include <stdio.h>

/**
 * print_diagsums - prints the sum of the two diagonals of a
 * square matrix.
 * @a: pointer to the matrix.
 * @size: size of the matrix.
 * Return: nothing.
 */
void print_diagsums(int *a, int size)
{
	int i, s1 = 0, s2 = 0;

	for (i = 0; i < size; i++)
	{
		s1 = s1 + a[i * size + i];
		s2 = s2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", s1, s2);
}

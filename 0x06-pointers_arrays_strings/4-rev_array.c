#include "main.h"

/**
 * reverse_array - Entry point
 *
 * @a: A C program that prints with printf function.
 *
 * @n: fwfop
 *
 * Return: Always 0 (Success)
*/

void reverse_array(int *a, int n)
{	int i, j, k;

	for (i = 0, j = (n - 1); i < j; i++, j--)
	{
		k = a[i];
		a[i] = a[j];
		a[j] = k;
	}
}

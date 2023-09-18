#include "main.h"

/**
 * swap_int - Entry point
 *
 * @a: A C program that prints with printf function.
 *
 * @b: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

void swap_int(int *a, int *b)
{	int any;

	any = *a;
	*a = *b;
	*b = any;
}

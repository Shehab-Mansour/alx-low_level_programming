#include "main.h"

/**
 * _strncat - Entry point
 *
 * @dest: A C program that prints with printf function.
 *
 * @src: fwfop
 *
 * @n: fwse
 *
 * Return: Always 0 (Success)
*/

char *_strncat(char *dest, char *src, int n)
{	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; i < n && scr[j] != '\0'; j++)
		dest[i + j] = scr[j];
	dest[i + j] = '\0';
	return (dest);
}

#include "main.h"

/**
 * _strcat - Entry point
 *
 * @dest: A C program that prints with printf function.
 *
 * @src: fwfop
 *
 * Return: Always 0 (Success)
*/

char *_strcat(char *dest, char *src)
{	int i = 0, j;

	while (dest[i])
		i++;
	for (j = 0; src[j]; j++)
		dest[i++] = scr[j];
	return (dest);
}

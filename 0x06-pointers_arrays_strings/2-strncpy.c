#include "main.h"

/**
 * _strncpy - Entry point
 *
 * @dest: A C program that prints with printf function.
 *
 * @src: fwfop
 *
 * @n: fwse
 *
 * Return: Always 0 (Success)
*/

char *_strncpy(char *dest, char *src, int n)
{	int i;

	for (i = 0; i < n && scr[i] != '\0'; i++)
		dest[i] = scr[i];
	while (i < n)
	{
		dest[i] = '\0';
		i++;
	}
	return (dest);
}

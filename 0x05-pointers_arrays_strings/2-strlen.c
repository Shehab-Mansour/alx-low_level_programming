#include "main.h"

/**
 * _strlen - Entry point
 *
 * @s: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

int _strlen(char *s)
{	int i;

	for (i = 0; *s != '\0'; s++)
		++i;
	return (i);
}

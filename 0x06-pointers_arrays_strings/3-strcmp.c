#include "main.h"

/**
 * _strcmp - Entry point
 *
 * @s1: A C program that prints with printf function.
 *
 * @s2: fwfop
 *
 * Return: Always 0 (Success)
*/

int _strcmp(char *s1, char *s2)
{	int i = 0;

	while (*s1)
	{
		if (*s1 != *s2)
		{
			i = ((int)*s1 = '0') - ((int)*s2 - '0');
			break;
		}
		s1++;
		s2++
	}
	return (i);
}

#include "main.h"
#include <stdio.h>

/**
 * islower - Entry point
 *
 * @c: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

int islower(char c)
{
	return (c >= 97 && c <= 122);
}

/**
 * isdelimiter - Entry point
 *
 * @c: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

int isdelimiter(char c)
{	int i;
	char delimiter[] = " \t\n,.!?\"(){}";

	for (i = 0; i < 12; i++)
		if (c == delimiter[i])
			return (1);
	return (0);
}

/**
 * cap_string - Entry point
 *
 * @s: A C program that prints with printf function.
 *
 * Return: Always 0 (Success)
*/

char *cap_string(char *s)
{	char *ptr = s;
	int founddelimiter = 1;

	while (*s)
	{
		if (isdelimiter(*s))
			founddelimiter = 1;
		else if (islower(*s) && founddelimiter)
		{
			*s -= 32;
			founddelimiter = 0;
		}
		else
			founddelimiter = 0;
		s++;
	}
	return (ptr);
}

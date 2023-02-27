#include "main.h"
#include <stdio.h>

/**
 * _strlen - Returns the length of a string.
 * @s: char imput
 *
 * * Return: The length of string
 */
int _strlen(char *s);
{
	int len = 0;

	while (*s != '\0')
	{
		len++;
		s++;
	}
	return (len);
}

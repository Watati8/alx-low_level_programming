#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void);
{
	int n, c;

	c = 0;

	while (c < 10)
	{
		for (n = 'a'; n <= 'z'; n++)
		{
			_putchar(n);
		}
		c++;
		_putchar('\n');
	}
}

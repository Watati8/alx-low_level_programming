#include "main.h"

/**
 * print_alphabet_x10 - Prints 10 times the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void);
{
	int count = 0;
	char letter;

	while (count++ <= 9)
	{
		for (letter = 'a'; letter <= 'z'; letter++)
			_putchar(letter);
		_putchar('\n');
	}
}


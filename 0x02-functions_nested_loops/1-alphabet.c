#include "main.h"

/**
 * print_alphabet - a function that prints the alphabet, in lowercase
 * Return: 0
 */
void print_alphabet(void)
{
	char alphabet;
	
	{
		for (alphabet = 'a'; alphabet <= 'z'; alphabet++)

		_putchar(alphabet);
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_alphabet -It is used to print lower case letter
 *
 * Return: Always 1.
 */
void print_alphabet(void)
{
	char letter;

	for (letter = 'a'; letter <= 'z'; letter++)
		_putchar(letter);

	_putchar('\n');
}

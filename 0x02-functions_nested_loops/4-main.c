#include "main.h"

/**
 * main - Execute the 4-alpha file
 *
 * Return: Always 0.
 */

int main(void)

{
	int newlet;

	newlet = _isalpha('H');
	_putchar(newlet + '0');
	newlet = _isalpha('o');
	_putchar(newlet + '0');
	newlet = _isalpha('j');
	_putchar(newlet + '0');
	newlet = _isalpha(';');
	_putchar(newlet + '0');
	_putchar('\n');
	return (0);
}

#include "main.h"

/**
 * main - Execute the file which checks for lowercase
 *
 * Return: Always 0.
 */

int main(void)

{
	int newlet;

	newlet = _islower('H');
	_putchar(newlet + '0');
	newlet = _islower('o');
	_putchar(newlet + '0');
	newlet = _islower(108);
	_putchar(newlet + '0');
	_putchar('\n');
	return (0);
}

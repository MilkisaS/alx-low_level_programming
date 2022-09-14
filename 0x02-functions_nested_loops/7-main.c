#include "main.h"

/**
 * main - Checks for last digit.
 *
 * Return: Always 0.
 */

int main(void)
{
	int digit;

	print_last_digit(98);
	print_last_digit(0);
	digit = print_last_digit(-1024);
	_putchar('0' + digit);
	_putchar('\n');
	return (0);
}

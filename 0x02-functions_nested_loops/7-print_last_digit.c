#include "main.h"

/**
 * print_last_digit - Is used to print the last digit of input.
 *
 * @n: Character to be verified.
 * Return: Always last digit.
 */

int print_last_digit(int n)
{
	int l_d = n % 10;

	if (l_d < 0)
		l_d *= -1;
	_putchar(l_d + '0');
	return (l_d);
}

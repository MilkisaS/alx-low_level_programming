#include "main.h"

/**
 * main - Check the code for int sign.
 *
 * Return: Always 0.
 */

int main(void)
{
	int num;

	num = print_sign(98);
	_putchar(',');
	_putchar(' ');
	_putchar(num + '0');
	_putchar('\n');
	num = print_sign(0);
	_putchar(',');
	_putchar(' ');
	_putchar(num + '0');
	_putchar('\n');
	num = print_sign(0xff);
	_putchar(',');
	_putchar(' ');
	_putchar(num + '0');
	_putchar('\n');
	num = print_sign(-1);
	_putchar(',');
	_putchar(' ');
	_putchar(num + '0');
	_putchar('\n');
	return (0);
}

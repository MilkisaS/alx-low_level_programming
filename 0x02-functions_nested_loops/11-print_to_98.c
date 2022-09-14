#include "main.h"
#include <stdio.h>

/**
 * print_to_98 - prints from given number to 98.
 * @n: Character to be declared.
 * Return: the output of the numbers
 */

void print_to_98(int n)
{

	if (n > 98)
	{
		while (n > 98)
			printf("%d, ", n--);
		printf("%d\n", n);
	}
	else
	{
		while (n < 98)
			printf("%d, ", n++);
		printf("%d\n", n);
	}
}

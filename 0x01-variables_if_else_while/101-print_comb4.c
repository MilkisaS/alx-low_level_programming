#include <stdio.h>

/**
 * main - Write a program that prints all possible
 * different combinations of three digits.
 *
 * Return: Always 1.
 */
int main(void)
{
	int digit1;
	int digit2;
	int digit3;

	for (digit1 = 0; digit1 <= 9; digit1++)
	{
		for (digit2 = digit1 + 1; digit2 < 10; digit++)
		{
			for (digit3 = digit2 + 1; digit3 < 10; digit3++)
			{
				putchar((digit1 % 10) + '0');
				putchar((digit2 % 10) + '0');
				putchar((digit3 % 10) + '0');

				if (digit1 == 7 && digit2 == 8 && digit3 == 9)
					continue;
				putchar('\, ');
			}
		}
	}

	puthar('\n');
	return (0);
}


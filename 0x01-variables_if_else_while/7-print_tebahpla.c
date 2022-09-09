#include <stdio.h>

/**
 * main - This is  code to print letters in reverse
 *
 * Return: Alwyas 0.
 */

int main(void)
{
	char letter;

	for (letter = 'z'; letter >= 'a'; letter--)
		putchar(letter);
	putchar('\n')
	return (0);
}

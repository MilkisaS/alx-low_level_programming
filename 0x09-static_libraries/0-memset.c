#include "main.h"
#include <stddef.h>

/**
 * _memset - Fills the first n bytes of the memory area
 *          pointed to by @s with the constant byte @.
 * @s: A pointer to the memory area to be filled.
 * @c: The character to fill the memory area with.
 * @n: The number of bytes to be filled.
 *
 * Return: A pointer to the fille
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int index;
	unsigned char *memory = s, value = n;


	for (index = 0; index < n; index++)
		memory[index] = value;

	return (memory);
}

#include "main.h"

/**
 * _islower - This checks for lower case letters
 *
 * Return: Always 1 for lower case and 0 for not.
 */
int _islower(int letter)

{
	if (letter >= 97 && letter <= 122)
		return (1);
	else
		return (0);
}

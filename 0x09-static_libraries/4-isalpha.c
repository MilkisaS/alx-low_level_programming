#include "main.h"

/**
 * _isalpha - Check for the letter.
 *
 * @l: character to be verified.
 *
 * Return: 1 if character is letter, lowercase or uppercase, 0 otherwise.
 */

int _isalpha(int l)
{
	if ((l >= 65 && l <= 90) || (l >= 97 && l <= 122))
		return (1);
	else
		return (0);
}

#include "main.h"

/**
 * _isalpha - check the code for Holberton School students.
 *@c: letter being tested
 * Return: Always 0
 */
int _isalpha(int letter)

{
	if ((letter >= 65 && letter <= 90) || (letter >= 97 && letter <= 122))
		return (1);
	else
		return (0);
}

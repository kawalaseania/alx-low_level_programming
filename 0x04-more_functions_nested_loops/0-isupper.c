#include "main.h"

/**
 * _isupper - determines whether a character is uppercase or lowercase
 * @c: the character to be checked
 *
 * Return: 1 if @c is an uppercase letter, 0 otherwise
 */
int _isupper(int c)
{
	if (c >= 65 && c <= 90)
	{
		return (1);
	}
	return (0);
}

#include "main.h"
/**
* _isdigit - check if a given character is a digit
* @c: is the parameter passed
* Return: 1 or zero depending on @c value
*/

int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
	{
		return (1);
	}
	return (0);
}

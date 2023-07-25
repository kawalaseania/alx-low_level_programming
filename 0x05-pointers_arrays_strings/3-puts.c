#include <string.h>
#include "main.h"

/**
 * _puts - takes parameters of string characters and prints
 * @str: is the parameter passed
 * Return: nothing since it's void
 */

void _puts(char *str)
{
	int i;
	int lenstr;

	lenstr = strlen(str);

	for (i = 0; i <= lenstr; i++)
		_putchar (str[i]);
	_putchar('\n');
}

#include "main.h"

/**
 * swap_int - arrepts two arguments and swarp them
 * @a: is the first argument
 * @b: is the second  argument
 * Return: 0 since it's void
 */

void swap_int(int *a, int *b)
{
	int temp;

	temp  = *a;
	*a = *b;
	*b = temp;
}

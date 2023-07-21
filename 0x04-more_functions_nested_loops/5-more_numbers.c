#include "main.h"
/**
* more_numbers - is a function that prints 10 times 1-14
* Return: 0 to indicate success
*/

void more_numbers(void)
{
	char i;
	char j;

	for (i = 0; i <= 10; i++)
	{
		for (j = 0; j <= 14; j++)
		{
			if (j >= 10)
			{
				_putchar('1');
			}
			_putchar(j % 10 + '0');
		}
		_putchar('\n');
	}
}

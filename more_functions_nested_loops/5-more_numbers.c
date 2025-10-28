#include "main.h"
/**
 *more_numbers - affiche les nombres de 0 à 14, à dix reprises.
 *
 */
void more_numbers(void)
{
	int i;
	int j;

	for (i = 0; i < 10; i++)
	{
		for (j = 0;  j <= 14; j++)
		{
			if (j >= 10)
				_putchar(j / 10 + '0');
			_putchar (j % 10 + '0');
		}
		_putchar ('\n');
	}
}

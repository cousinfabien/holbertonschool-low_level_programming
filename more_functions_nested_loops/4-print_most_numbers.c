#include "main.h"
/**
 *print_most_numbers - affiche tous les nombres de 0 à 9 SAUF 2 et 4
 *
 *Return: toujours 0
 */
void print_most_numbers(void)
{
	int i;

	for (i = '0'; i <='9'; i++)
	{
		if ((i != '2') && (i != '4'))
		{
			_putchar (i);
		}
	}
	_putchar('\n');
}

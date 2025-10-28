#include "main.h"
/**
 *print_line - affiche une ligne droite dans le terminal (faite avec des '_')
 *@n: nombre de fois que le caractère sera affiché
 *
 */
void print_line(int n)
{
	int i;

	for (i = 0; i < n; i++)
	{
		_putchar('_');
	}
	_putchar('\n');
}

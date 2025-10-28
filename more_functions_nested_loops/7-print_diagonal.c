#include "main.h"
/**
 *print_diagonal - affiche une diagonale sur le terminal
 *@n: nombre de fois que le pattern est répété
 *
 */
void print_diagonal(int n)
{
	int i;
	int j;

	if (n <= 0)
		_putchar('\n');

	for (i = 0; i < n; i++)
	{
		for (j = 0; j < i; j++)
		{
			_putchar(' ');
		}
		_putchar('\\');
		_putchar('\n');
	}
}

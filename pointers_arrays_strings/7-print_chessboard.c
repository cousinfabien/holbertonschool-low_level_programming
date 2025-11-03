#include "main.h"
/**
 *print_chessboard - affiche un échiquier
 *@a: table à deux dimension, de taille 8X8
 *
 */
void print_chessboard(char (*a)[8])
{
	int i;
	int j;

	for (i = 0; i < 8; i++)
	{
		for (j = 0; j < 8; j++)
		{
			_putchar(a[i][j]);
		}
		_putchar('\n');
	}
}

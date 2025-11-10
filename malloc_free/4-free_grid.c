#include "main.h"
#include <stdlib.h>
/**
 *free_grid - libère la mémoire de la grille faite par alloc_grid
 *@grid: pointeur vers la grille 2D
 *@height: nombre de lignes
 *Return: Rien
 */

void free_grid(int **grid, int height)
{
	int i;

	if (grid == NULL || height <= 0)
		return;

	for (i = 0; i < height; i++)
		free(grid[i]);

	free(grid);
}

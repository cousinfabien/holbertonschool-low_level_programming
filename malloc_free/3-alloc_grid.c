#include "main.h"
#include <stdlib.h>
/**
 *alloc_grid - Retourne un pointeur vers un tableau d'entiers 2D
 *@width: Entier, nombre de colonnes
 *@height: Entier, nombre de lignes
 *Return: pointeur vers le tableau 2D, NULL si erreur
 */

int **alloc_grid(int width, int height)
{
	int **grid;
	int i, j;

	if (width <= 0 || height <= 0)
		return (NULL);

	grid = malloc(sizeof(int *) * height);
	if (grid == NULL)
		return (NULL);

	for (i = 0; i < height; i++)
	{
		grid[i] = malloc(sizeof(int) * width);
		if (grid[i] == NULL)
		{
			for (; i > 0; i--)
				free(grid[i - 1]);

			free(grid);
			return (NULL);
		}

		for (j = 0; j < width; j++)
			grid[i][j] = 0;
	}
	return (grid);
}

#include "main.h"
#include <stdlib.h>

/**
 *array_range -crée une table d'entiers allant de min à max
 *@min: Entier, valeur minimale
 *@max: Entier, valeur maximale
 *Return: Pointeur vers la table, NULL si erreur ou si min > max
 */

int *array_range(int min, int max)
{
	int *tab;
	int i;
	int size;

	if (min > max)
		return (NULL);

	size = max - min + 1;

	tab = malloc(sizeof(int) * size);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = min + i;

	return (tab);
}

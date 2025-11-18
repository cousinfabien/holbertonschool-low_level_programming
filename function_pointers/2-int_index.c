#include "function_pointers.h"
#include <stdlib.h>

/**
 *int_index - recherche un entier
 *@array: pointeur vers la table
 *@size: nombre d'éléments dans la table
 *@cmp: pointeur vers la fonction comparatrice
 *Return: index du premier élément où cmp != 0, -1 sinon
 */

int int_index(int *array, int size, int (*cmp)(int))
{
	int i;

	if (array == NULL || cmp == NULL || size <= 0)
		return (-1);

	for (i = 0; i < size; i++)
	{
		if (cmp(array[i]) != 0)
			return (i);
	}

	return (-1);
}

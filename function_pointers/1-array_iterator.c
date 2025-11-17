#include "function_pointers.h"
#include <stdlib.h>
/**
 *array_iterator - exécute une fonction donnée en paramètre
 * pour chaque élément d'une table
 *@array: table
 *@size: taille de la table
 *@action: pointeur vers la fonction a exécuter
 */
void array_iterator(int *array, size_t size, void (*action)(int))
{
	size_t i;

	if (array == NULL || action == NULL)
		return;

	for (i = 0; i < size; i++)
		action(array[i]);
}

#include "main.h"
#include <stdlib.h>
/**
 *_calloc - Allouer la mémoire d'une table et l'initialize
 *@nmemb: Entier, nombre d'éléments
 *@size: Entier, taille de chaque élément
 *Return: Pointeur vers la mémoire, NULL si échec
 */

void *_calloc(unsigned int nmemb, unsigned int size)
{
	unsigned int i;
	char *ptr;

	if (nmemb == 0 || size == 0)
		return (NULL);

	ptr = malloc(nmemb * size);
	if (ptr == NULL)
		return (NULL);

	for (i = 0; i < nmemb * size; i++)
		ptr[i] = 0;

	return ((void *)ptr);
}

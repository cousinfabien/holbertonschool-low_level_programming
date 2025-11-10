#include <stdlib.h>
#include "main.h"
/**
 *create_array - créer un tableau de caractères
 *@size: entier, taille du tableau
 *@c: caractère à remplir
 *Return: Pointeur vers tableau
 */

char *create_array(unsigned int size, char c)
{
	char *tab;
	unsigned int i;

	if (size == 0)
		return (NULL);

	tab = malloc(sizeof(char) * size);
	if (tab == NULL)
		return (NULL);

	for (i = 0; i < size; i++)
		tab[i] = c;

	return (tab);
}

#include "main.h"
#include <stdio.h>
/**
 *print_diagsums - Affiche la somme des diagonales d'une matrice carrée
 *@a: Pointeur vers première valeur de la matrice
 *@size : taille de la matrice
 */
void print_diagsums(int *a, int size)
{
	int i;
	int diagsum1 = 0;
	int diagsum2 = 0;

	for (i = 0; i < size; i++)
	{
		diagsum1 = diagsum1 + a[i * size + i];
		diagsum2 = diagsum2 + a[i * size + (size - 1 - i)];
	}

	printf("%d, %d\n", diagsum1, diagsum2);
}

#include "main.h"
/**
 *_memset - Remplir la mémoire avec une valeur constante
 *@s: Pointeur vers la chaîne de caractères s
 *@b: Caractère constant de remplissage
 *@n: Entier non signé, nombre de bytes à remplir
 *Return: Pointeur vers la mémoire s, modifiée.
 */

char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}

	return (s);
}

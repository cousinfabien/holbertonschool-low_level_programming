#include "main.h"
/**
 *_strspn - donner la longueur du préfixe de la chaîne
 *@s: Pointeur vers chaîne à analyser
 *@accept: Pointeur vers chaîne de caractères de test
 *Return: Entier non signé donnant le nombre de caractères respectant
 *de manière conséqutives
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				break;
		}

		if (accept[j] == '\0')
			return (i);
	}
	return (i);
}

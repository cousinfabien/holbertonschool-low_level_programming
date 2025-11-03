#include "main.h"
/**
 *_strpbrk - recherche la première occurence d'un caractère de accept
 *dans la chaine s
 *@s: pointeur vers chaîne à analyser
 *@accept: pointeur vers les caractères à rechercher
 *Return: un poointeur vers le premier caractère trouvé dans s, NULL si non
 */
char *_strpbrk(char *s, char *accept)
{
	unsigned int i;
	unsigned int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; accept[j] != '\0'; j++)
		{
			if (s[i] == accept[j])
				return (&s[i]);
		}
	}
	return (0);
}

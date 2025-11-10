#include "main.h"
#include <stdlib.h>
/**
 *_strdup - Duplique une chaine de caractère
 *@str: Pointeur vers la chaine
 *Return: Pointeur vers la chaine dupliquée
 */

char *_strdup(char *str)
{
	char *dupli;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupli = malloc(sizeof(char) * (len + 1));
	if (dupli == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dupli[i] = str[i];

	dupli[len] = '\0';

	return (dupli);
}

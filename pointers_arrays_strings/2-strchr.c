#include "main.h"
/**
 *_strchr - Trouve la première occurence d'un caractère dans une chaîne
 *@s: Pointeur de chaîne
 *@c: caractère à trouver
 *Return: Pointe la première occurence de C, NULL si pas trouvé
 */
char *_strchr(char *s, char c)
{
	/*Pour tout caractère*/
	while (*s != '\0')
	{
		if (*s == c)
			return (s);
		s++;
	}

	/*si le caractère est le caractère de fin de ligne*/
	if (*s == c)
		return (s);

	return (0);
}

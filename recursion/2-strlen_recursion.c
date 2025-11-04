#include "main.h"
/**
 *_strlen_recursion - Retourne la longueur de la chaine par recursivite
 *@s: Pointeur vers chaine de caractere
 *Return: longueur de la chaine
 */

int _strlen_recursion(char *s)
{
	if (*s == '\0')
		return (0);
	return (1 + _strlen_recursion(s + 1));
}

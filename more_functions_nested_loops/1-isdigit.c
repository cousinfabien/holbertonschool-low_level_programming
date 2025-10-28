#include "main.h"
/**
 *_isdigit - vérifie si l'entrée est un chiffre de 0 à 9
 *@c: entrée
 *Return: 1 si l'entrée est un chiffre, 0 si non
 */
int _isdigit(int c)
{
	if (c >= '0' && c <= '9')
		return (1);
	else
		return (0);
}

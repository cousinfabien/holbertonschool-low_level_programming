#include "main.h"
/**
 * _isupper - Vérifie si le caractère entré est une majuscule ou pas
 * @c: entier d'une valeur de la table ASCII, qui correspondra a un caractère
 * Return: 1 si c est une majuscule, 0 sinon
 */

int _isupper(int c)
{
	int u;

	if (c >= 'A' && c <=  'Z')
	{
		u = 1;
	}
	else
		u = 0;
	return (u);
}

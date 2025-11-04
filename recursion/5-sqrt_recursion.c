#include "main.h"
/**
 *sqrt_exists - cherche la racine carree de n
 *@n: entier dont on cherche la racine
 *@i: valeur a tester
 *Return: la racine si elle existe, -1 sinon
 */
int sqrt_exists(int n, int i)
{
	if (i * i > n)
		return (-1);
	if (i * i == n)
		return (i);
	return (sqrt_exists(n, i + 1));
}

/**
 *_sqrt_recursion - retrouve la racine carree d'un nombre
 *@n: nombre dont on cherche la racine
 *Return: la racine si elle existe, -1 sinon
 */

int _sqrt_recursion(int n)
{
	if (n < 0)
		return (-1);
	return (sqrt_exists(n, 0));
}

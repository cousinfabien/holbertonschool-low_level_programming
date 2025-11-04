#include "main.h"
/**
 *_pow_recursion - calcul x puissance y avec la recursivite
 *@x: premier entier
 *@y: second entier
 *Return: x^y
 */

int _pow_recursion(int x, int y)
{
	if (y < 0)
		return (-1);
	if (y == 0)
		return (1);

	return (x * _pow_recursion(x, y - 1));
}

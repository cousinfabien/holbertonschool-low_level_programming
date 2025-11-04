#include "main.h"
/**
 *factorial - calcule la factorielle d'un nombre donne
 *@n: nombre entier
 *Return: factorielle de n
 */

int factorial(int n)
{
	if (n < 0)
		return (-1);

	else if (n == 0)
		return (1);

	else
		return (n * factorial(n - 1));
}

#include "main.h"
/**
 *divisible - verifier la divisibilite
 *@n:entier a tester
 *@d: diviseur probable
 *Return: 1 si n est divisible par d, 0 sinon.
 */

int divisible(int n, int d)
{
	if (d >= n)
		return (0);
	if (n % d == 0)
		return (1);
	return (divisible(n, d + 1));
}

/**
 *is_prime_number - verifie si un nombre est premier, via divisible
 *@n: entier a tester
 *Return: 1 si premier, 0 sinon
 */

int is_prime_number(int n)
{
	if (n <= 1)
		return (0); /* puisque 0 et 1 ne sont pas premiers*/
	if (divisible(n, 2))
		return (0); /* non premier puisque divisible par autre chose que
			     * 0 et 1
			     */
	return (1);
}

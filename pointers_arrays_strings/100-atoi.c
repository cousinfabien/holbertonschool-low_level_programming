#include "main.h"
/**
 *_atoi - conversion d'une chaine en entier
 *@s: pointeur vers la chaine
 *
 *Return: valeur entiere, ou 0 si rien trouve
 */
int _atoi(char *s)
{
	int sign = 1;
	unsigned int result = 0;
	int found_digit = 0;

	while (*s != '\0')
	{
		if (*s == '-')
			sign *= -1;
		else if (*s >= '0' && *s <= '9')
		{
			found_digit = 1;
			result = result * 10 + (*s - '0');
		}
		else if (found_digit)
			break; /*fin du nombre*/
		s++;
	}
	if (sign < 0)
		return (-result);
	else
		return (result);
}

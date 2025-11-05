#include <stdio.h>

/**
 *str_int - conversion string-int
 *@s: Chaine de caractères
 *Return: Valeur int
 */

int str_int(char *s)
{
	int i = 0;
	int n = 0;
	int signe = 1;

	if (s[0] == '-')
	{
		signe = -1;
		i++;
	}

	for(; s[i] != '\0'; i++)
		n = n * 10 + (s[i] - '0');

	return (n * signe);
}

/**
 *main - affiche la multiplication de deux entiers
 *@argv: table d'arguments
 *Return: produit des deux entiers
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int res;

	if (argc != 3)
	{
		printf("Error\n");
		return (1);
	}

	i = str_int(argv[1]);
	j = str_int(argv[2]);
	res = i * j;

	printf("%d\n", res);
	return (0);
}

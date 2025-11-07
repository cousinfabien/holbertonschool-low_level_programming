#include <stdio.h>
/**
 *str_int - conversion string-int
 *@s: Chaîne de caractères
 *Return: Valeur int
 */

int str_int(char *s)
{
	int i;
	int n = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		n = n * 10 + (s[i] - '0');
	}

	return (n);
}

/**
 *main - affiche la somme de deux entiers
 *@argc: compte d'arguments
 *@argv: table d'arguments
 *Return: 0 si aucun nombre ne passe, 1 si erreur, résultat si tout est bon
 */

int main(int argc, char *argv[])
{
	int i;
	int j;
	int res = 0;

	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	for (i = 1; i < argc; i++)
	{
		for (j = 0; argv[i][j]; j++)
		{
			if (argv[i][j] < '0' || argv[i][j] > '9')
			{
				printf("Error\n");
				return (1);
			}
		}
		res += str_int(argv[i]);
	}

	printf("%d\n", res);
	return (0);
}

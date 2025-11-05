#include <stdio.h>
#include <stdlib.h>
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

	i = atoi(argv[1]);
	j = atoi(argv[2]);
	res = i * j;

	printf("%d\n", res);
	return (0);
}

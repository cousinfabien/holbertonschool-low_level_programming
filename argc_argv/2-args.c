#include <stdio.h>
/**
 *main - afficher tous les arguments recus
 *@argc: Compte des arguments
 *@argv: Table des arguments
 *Return: Toujours 0
 */

int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
		printf("%s\n", argv[i]);

	return (0);
}

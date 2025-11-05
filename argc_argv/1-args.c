#include <stdio.h>
/**
 *main - affiche le nombre d'arguments passés dans le programme
 *@argc: nombre d'arguments
 *@argv: tableau d'arguments
 *Return: Toujours 0
 */

int main(int argc, char *argv[])
{
	(void)argv; /* n'est pas utilisé
		    */
	printf("%d\n", argc - 1);
	return (0);
}

#include <stdio.h>
/**
 *main - affiche le nom du programme, même après renommage sans avoir
 *besoin de recompiler
 *@argc: Entier du nombre d'arguments
 *@argv: Table des arguments
 *Return: Toujours 0 (réussite)
 */
int main(int argc, char *argv[])
{
	(void)argc; /** je l'utilise pas mais c'est voulu, argc étant
		     ** obligatoire
		     */
	printf("%s\n", argv[0]);
	return (0);
}

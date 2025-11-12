#include "main.h"
#include <stdlib.h>
/**
 *malloc_checked - Alloue la mémoire en utilisant malloc
 *@b: Entier, nombre de bytes alloués
 *Return: Pointeur vers la mémoire allouée, 98 si échec
 */

void *malloc_checked(unsigned int b)
{
	void *ptr;

	ptr = malloc(b);
	if (ptr == NULL)
		exit(98);

	return (ptr);
}

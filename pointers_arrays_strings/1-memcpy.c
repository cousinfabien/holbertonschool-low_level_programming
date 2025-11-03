#include "main.h"
/**
 *_memcpy - copie la mémoire
 *@dest: Zone mémoire destination
 *@src: Zone mémoire source
 *@n: nombre de bytes copiés
 *Return: pointeur vers dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

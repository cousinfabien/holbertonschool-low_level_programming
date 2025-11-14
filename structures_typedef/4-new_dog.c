#include "dog.h"
#include <stdlib.h>

/**
 * _strdup - duplication de chaine
 * @str: chaine a dupliquer
 * Return: pointeur vers chaine dupliquee
 */

char *_strdup(char *str)
{
	char *dupli;
	unsigned int i;
	unsigned int len = 0;

	if (str == NULL)
		return (NULL);

	while (str[len] != '\0')
		len++;

	dupli = malloc(sizeof(char) * (len + 1));
	if (dupli == NULL)
		return (NULL);

	for (i = 0; i < len; i++)
		dupli[i] = str[i];

	dupli[len] = '\0';

	return (dupli);
}

/**
 * new_dog - cree un nouveau chien
 * @name: nom du chien
 * @age: age du chien
 * @owner: proprietaire du chien
 * Return: pointeur du nouveau chien, NULL si echec
 */

dog_t *new_dog(char *name, float age, char *owner)
{
	dog_t *d;

	d = malloc(sizeof(dog_t));
	if (d == NULL)
		return (NULL);

	d->name = _strdup(name);
	if (name != NULL && d->name == NULL)
	{
		free(d);
		return (NULL);
	}

	d->owner = _strdup(owner);
	if (owner != NULL && d->owner == NULL)
	{
		free(d->name);
		free(d);
		return (NULL);
	}

	d->age = age;

	return (d);
}

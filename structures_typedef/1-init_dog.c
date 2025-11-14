#include "dog.h"
#include <stdlib.h>

/**
 * init_dog - initialise une structure de type struct dog
 * @d: Pointeur vers la structure a initialiser
 * @name: Nom du chien
 * @age: Age du chien
 * @owner: Proprietaire du chien
 */

void init_dog(struct dog *d, char *name, float age, char *owner)
{
	if (d == NULL)
		return;

	d->name = name;
	d->age = age;
	d->owner = owner;
}

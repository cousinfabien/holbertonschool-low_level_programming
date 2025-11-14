#ifndef DOG_H
#define DOG_H

/**
 * struct dog - Structure representant les infos basiques d'un chien
 *@name: Pointeur de caractere, Nom du chien
 *@age: Float, Age du chien
 *@owner: Pointeur de caractere, Proprietaire du chien
 */

struct dog
{
	char *name;
	float age;
	char *owner;
};

typedef struct dog dog_t;

void init_dog(struct dog *d, char *name, float age, char *owner);
void print_dog(struct dog *d);
dog_t *new_dog(char *name, float age, char *owner);

#endif /* DOG_H */

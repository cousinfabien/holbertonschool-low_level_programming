#ifndef DOG_H
11;rgb:2b2b/2b2b/2b2b#define DOG_H

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

#endif /* DOG_H */

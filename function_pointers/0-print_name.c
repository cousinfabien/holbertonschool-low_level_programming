#include <stdlib.h>
#include "function_pointers.h"
/**
 *print_name - affiche un nom
 *@name: nom à afficher
 *@f: pointeur vers fonction qui prend un char * et renvoie void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
		return;

	f(name);
}

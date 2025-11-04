#include "main.h"
/**
 *_print_rev_recursion - affiche une chaine a l'envers, par recursivite
 *@s: Pointeur vers la chaine
 */

void _print_rev_recursion(char *s)
{
	if (*s == '\0')
		return;

	_print_rev_recursion(s + 1);
	_putchar(*s);
}

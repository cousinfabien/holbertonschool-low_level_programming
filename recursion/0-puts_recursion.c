#include "main.h"
/**
 *_puts_recursion - affiche une chaine par recursivite
 *@s: Pointeur vers chaine de caractere
 */

void _puts_recursion(char *s)
{
	if (*s == '\0')
	{
		_putchar('\n');
		return;
	}
	_putchar(*s);
	_puts_recursion(s + 1);
}

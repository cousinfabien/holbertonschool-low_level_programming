#include "main.h"
/**
 * print_rev - prints a string in reverse, followed by a new line
 * @s: pointer to the string
 *
 * Return: nothing
 */
void print_rev(char *s)
{
	int length = 0;
	int i;

    /* Trouver la longueur de la chaîne */
	while (s[length] != '\0')
		length++;

    /* Parcourir la chaîne à l’envers */
	for (i = length - 1; i >= 0; i--)
		_putchar(s[i]);

	_putchar('\n');
}

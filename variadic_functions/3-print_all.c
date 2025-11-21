#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_char - affiche un char
*@print: déterminant pour un séparateur
*@c: caractère à afficher
*@sep: pointeur vers le séparateur
*Return: toujours 1, signe de succès
*/
int print_char(int print, char c, char *sep)
{
	if (print)
		printf("%s", sep);
	printf("%c", c);
	return (1);
}

/**
*print_int - affiche un int
*@print: déterminant pour un séparateur
*@i: entier à afficher
*@sep: pointeur vers le séparateur
*Return: toujours 1, signe de succès
*/
int print_int(int print, int i, char *sep)
{
	if (print)
		printf("%s", sep);
	printf("%d", i);
	return (1);
}

/**
*print_float - affiche un float
*@print: déterminant pour un séparateur
*@f: float à afficher
*@sep: pointeur vers le séparateur
*Return: toujours 1, signe de succès
*/
int print_float(int print, float f, char *sep)
{
	if (print)
		printf("%s", sep);
	printf("%f", f);
	return (1);
}

/**
*print_string - affiche une chaîne
*@print: déterminant pour un séparateur
*@s: chaîne à afficher
*@sep: pointeur vers le séparateur
*Return: toujours 1, signe de succès
*/
int print_string(int print, char *s, char *sep)
{
	if (print)
		printf("%s", sep);
	if (s == NULL)
		printf("(nil)");
	else
		printf("%s", s);
	return (1);
}



/**
*print_all - affiche tout
*@format: constante liste d'arguments possibles
*/

void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int print = 0;
	char *str;
	char c;
	int num;
	float f;
	char *separator = ", ";

	va_start(args, format);

	while (format != NULL && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				print = print_char(print, c, separator);
				break;

			case 'i':
				num = va_arg(args, int);
				print = print_int(print, num, separator);
				break;

			case 'f':
				f = (float)va_arg(args, double);
				print = print_float(print, f, separator);
				break;
			case 's':
				str = va_arg(args, char *);
				print = print_string(print, str, separator);
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

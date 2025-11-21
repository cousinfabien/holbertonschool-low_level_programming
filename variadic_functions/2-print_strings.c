#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
*print_strings - affiche des chaînes de caractères
*@separator: constante, caractère à mettre entre les chaînes
*@n: constante, nombre de chaînes à passer
*/

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list args;

	va_start(args, n);
	for (i = 0; i < n; i++)
	{
		if (str == NULL)
		{
			printf("(nil)");
		}
		else
		{
			printf("%s", str);
		}

		if (separator != NULL && i < n - 1)
		{
			printf("%s", separator);
		}
	}
	printf("\n");
	va_end(args);
}

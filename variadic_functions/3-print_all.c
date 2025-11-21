#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

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
		if (print)
			printf("%s", separator);
		
		switch (format[i])
		{
			case 'c':
				c = va_arg(args, int);
				printf("%c", c);
				break;
			case 'i':
				num = va_arg(args, int);
				printf("%d", num);
				break;
			case 'f':
				f = (float)va_arg(args, double);
				printf("%f", f);
				break;
			case 's':
				str = va_arg(args, char *);
				if (str == NULL)
					printf("(nil)");
				else
					printf("%s", str);
				break;
			default:
				print = print;
				i++;
				continue;
		}
		print = 1;
		i++;
	}
	printf("\n");
	va_end(args);
}

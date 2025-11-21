#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/* fonctions pour chaque type */
/**
 * print_c - prints a char from va_list
 * @args: va_list containing the arguments
 * @printed: 0 if nothing has been printed yet, 1 otherwise
 *
 * Return: 1 always (indicates that something was printed)
 */
int print_c(va_list args, int printed)
{
	char c = va_arg(args, int);

	if (printed)
		printf(", ");
	printf("%c", c);
	return (1);
}

/**
 * print_i - prints an int from va_list
 * @args: va_list containing the arguments
 * @printed: 0 if nothing has been printed yet, 1 otherwise
 *
 * Return: 1 always (indicates that something was printed)
 */
int print_i(va_list args, int printed)
{
	int n = va_arg(args, int);

	if (printed)
		printf(", ");
	printf("%d", n);
	return (1);
}

/**
 * print_f - prints a float from va_list
 * @args: va_list containing the arguments
 * @printed: 0 if nothing has been printed yet, 1 otherwise
 *
 * Return: 1 always (indicates that something was printed)
 */
int print_f(va_list args, int printed)
{
	float f = (float)va_arg(args, double);

	if (printed)
		printf(", ");
	printf("%f", f);
	return (1);
}

/**
 * print_s - prints a string from va_list
 * @args: va_list containing the arguments
 * @printed: 0 if nothing has been printed yet, 1 otherwise
 *
 * Description: prints "(nil)" if string is NULL
 *
 * Return: 1 always (indicates that something was printed)
 */
int print_s(va_list args, int printed)
{
	char *s = va_arg(args, char *);

	if (printed)
		printf(", ");
	if (!s)
		printf("(nil)");
	else
		printf("%s", s);
	return (1);
}

/**
 * print_all - prints anything using format string and function pointers
 * @format: list of types ('c', 'i', 'f', 's')
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	int printed = 0;
	int (*funcs[256])(va_list, int) = {0};

	funcs['c'] = print_c;
	funcs['i'] = print_i;
	funcs['f'] = print_f;
	funcs['s'] = print_s;

	va_start(args, format);

	while (format && format[i])
	{
		if (funcs[(unsigned char)format[i]])
			printed = funcs[(unsigned char)format[i]](args, printed);
		i++;
	}

	printf("\n");
	va_end(args);
}

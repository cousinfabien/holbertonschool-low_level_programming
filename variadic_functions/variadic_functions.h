#ifndef VARIADIC_FUNCTIONS_H
#define VARIADIC_FUNCTIONS_H

int _putchar(char c);
int sum_them_all(const unsigned int n, ...);
void print_numbers(const char *separator, const unsigned int n, ...);
void print_strings(const char *separator, const unsigned int n, ...);
void print_all(const char * const format, ...);

/* Prototypes pour les sous-fonctions de print_all */
int print_char(int print, char c, char *sep);
int print_int(int print, int n, char *sep);
int print_float(int print, float f, char *sep);
int print_string(int print, char *s, char *sep);

#endif /* VARIADIC_FUNCTIONS_H */

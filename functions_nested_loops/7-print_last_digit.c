#include "main.h"
/**
 * print_last_digit - Returns the value of the last digit
 * @n: the number
 * Return: Value of the last digit
 */
int print_last_digit(int n)
{
	int i = n % 10;

	if (n < 0)
		i = -i;
	_putchar(i + '0');
	return (i);
}

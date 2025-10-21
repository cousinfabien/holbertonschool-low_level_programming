#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int i = 0;
	char j = 'a';

	while (j <= 'f')
	{
		while (i <= 9)
		{
			putchar(i + '0');
			i++;
		}
		putchar(j);
		j++;
	}
	putchar ('\n');
	return (0);
}

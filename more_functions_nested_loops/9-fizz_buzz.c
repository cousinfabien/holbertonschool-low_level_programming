#include <stdio.h>
/**
 *fizz-buzz - Affiche les chiffres de 1 à 100, sauf dans certains cas.
 *
 *
 */
void fizzbuzz(void)
{
	int i;

	for (i = 1; i <=100; i++)
	{
		if (i % 3 == 0)
		{
			printf("Fizz");
		}
		else if (i % 5 == 0)
		{
			printf("Buzz");
		}
	        else if (i % 3 == 0 && i % 5 == 0)
		{
			printf("FizzBuzz");
		}
		else
			printf("%d", i);

		if (i != 100)
			printf(" ");
	}
	printf("\n");
}

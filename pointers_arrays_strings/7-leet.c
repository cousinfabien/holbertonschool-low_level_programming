#include "main.h"
/**
 *leet - encode the string into 1337speak
 *@s: pointer to the string
 *Return: pointer to the modified string
 */
char *leet(char *s)
{
	char letters[] = "aAeEoOtTlL";
	char numbers[] = "4433007711";
	int i;
	int j;

	for (i = 0; s[i] != '\0'; i++)
	{
		for (j = 0; letters[j] != '\0'; j++)
		{
			if (s[i] == letters[j])
			{
				s[i] = numbers[j];
				break; /* Stoppe la boucle directement
					* ,optimisation du programme
					*/
			}
		}
	}

	return (s);
}

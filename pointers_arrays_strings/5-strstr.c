#include "main.h"
/**
 *_strstr - Trouve une sous chaîne dans la chaîne
 *@haystack : Pointeur vers la chaîne à analyser
 *@needle: Pointeur vers la chaîne à chercher
 *Return: Pointeur vers le début de needle si trouvé, NULL si non.
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i + j] != needle[j])
				break;
		}

		if (needle[j] == '\0')
			return (&haystack[i]);
	}
	return (0);
}

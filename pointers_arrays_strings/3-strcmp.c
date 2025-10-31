#include "main.h"
/**
 *_strcmp - compares two strings
 *@s1: pointer to first string
 *@s2: pointer to second string
 *Return: 0 if equal, <0 if s1<s2, >0 if s1>s2
 */
int _strcmp(char *s1, char *s2)
{
	int comp = 0;

	while (s1[comp] != '\0' && s2[comp] != '\0')
	{
		if (s1[comp] != s2[comp])
			return (s1[comp] - s2[comp]);
		comp++;
	}

	return (s1[comp] - s2[comp]);
}

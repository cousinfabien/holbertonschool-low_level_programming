#include "main.h"
/**
 *cap_string - capitalise all words of a string
 *@s: pointer to string
 *Return: pointer to result string
 */
char *cap_string(char *s)
{
	int i = 0;
	int cap = 1;

	while (s[i] != '\0')
	{
		if (s[i] >= 'a' && s[i] <= 'z')
		{
			if (cap)
				s[i] = s[i] - ('a' - 'A');
			cap = 0;
		}

		else if (s[i] == ' ' || s[i] == '\t' || s[i] == '\n' ||
			 s[i] == ',' || s[i] == ';' || s[i] == '.' ||
			 s[i] == '!' || s[i] == '?' || s[i] == '"' ||
			 s[i] == '(' || s[i] == ')' || s[i] == '{' ||
			 s[i] == '}')
		{
			cap = 1;
		}
		else
		{
			cap = 0;
		}
		i++;
	}

	return (s);
}

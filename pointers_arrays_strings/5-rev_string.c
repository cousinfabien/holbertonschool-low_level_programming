#include "main.h"
/**
 *rev_string - reverse a string
 *@s - string
 */
void rev_string(char *s)
{
	char *start = s;
	char *end = s;
	char temp;

	while (*end != '\0')
		end++;
	end--; /*reculer pour pointer le dernier veritable char*/

	while (start < end)
	{
		temp = *start;
		*start = *end;
		*end = temp;

		start++;
		end--;
	}
}

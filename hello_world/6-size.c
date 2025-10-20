#include <stdio.h>
/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int intType;
	float floatType;
	long int longType;
	long long int longLongType;
	char charType;
	printf("Size of a char: %lu byte(s)\n", sizeof(charType));
	printf("Size of an int: %lu byte(s)\n", sizeof(intType));
	printf("size of a long int: %lu byte(s)\n", sizeof(longType));
	printf("size of a long long int: %lu byte(s)\n", sizeof(longLongType));
	printf("size of a float: %lu byte(s)\n", sizeof (floatType));
	return (0);
}

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	char acharacter;
	int ainteger;
	long along;
	long long alonglong;
	float afloat;

	printf(stderr, "size of a char: 1 byte(s)\n", sizeof(acharacter));
	printf(stderr, "size of an int: 4 byte(s)\n", sizeof(ainteger));
	printf(stderr, "size of a long int: 4 byte(s)\n", sizeof(along));
	printf(stderr, "size of a long long int: 8 byte(s)\n", sizeof(alonglong));
	printf(stderr, "size of a float: 4 byte(s)\n", sizeof(afloat));

	return (0);
}

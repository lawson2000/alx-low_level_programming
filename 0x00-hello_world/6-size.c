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
	printf(stderr, "size of a char: %lu byte(s)\n", sizeof(acharacter));
	printf(stderr, "size of an int: %lu byte(s)\n", sizeof(ainteger));
	printf(stderr, "size of a long int: %lu byte(s)\n", sizeof(along));
	printf(stderr, "size of a long long int: %lu byte(s)\n", sizeof(alonglong));
	printf(stderr, "size of a float: %lu byte(s)\n", sizeof(afloat));
	return (0);
}

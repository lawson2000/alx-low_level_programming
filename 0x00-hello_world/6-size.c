#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{

	printf("size of a char: %ld byte(s)\n", sizeof(acharacter));
	printf("size of an int: %ld byte(s)\n", sizeof(ainteger));
	printf("size of a long int: %ld byte(s)\n", sizeof(along));
	printf("size of a long long int: %ld byte(s)\n", sizeof(alonglong));
	printf("size of a float: %ld byte(s)\n", sizeof(afloat));
	return (0);
}

#include <stdio.h>

/**
 * main - return integal of 0
 *
 * Description: print the size of different characters and words
 *
 * Return: Always success return 0
 *
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

#include <stdio.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (success)
 */

int main(void)
{
	fprintf("size of a char: 1 byte(s)\n", stderr);
	fprintf("size of an int: 4 byte(s)\n", stderr);
	fprintf("size of a long int: 4 byte(s)\n", stderr);
	fprintf("size of a long long int: 8 byte(s)\n", stderr);
	fprintf("size of a float: 4 byte(s)\n");

	return (0);
}

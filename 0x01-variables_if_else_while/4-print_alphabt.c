#include <stdio.h>

/**
 * main - print alphabets in lowercase except for e and q
 *
 * Return: Always 0 (success)
 *
 */
int main(void)
{
	char bet;

	for (bet = 'a'; bet <= 'z'; bet++)
	{
		if (bet != 'e' && bet != 'q')
			putchar(bet);
	}
	putchar('\n')
	return (0);
}

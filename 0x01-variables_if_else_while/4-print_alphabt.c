#include <stdio.h>
/**
 * main - print alphabets in lowercase except for e and q
 *
 * Return: Alphabet except for e and q
 *
 */
int main(void)
{
	char bet;

	for (letter = 'a'; letter <= 'z'; bet++)
	{
		if (bet != 'e' && bet != 'q')
			putchar(bet);
	}
	return (0);
}

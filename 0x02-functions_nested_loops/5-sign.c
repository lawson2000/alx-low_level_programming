#include "main.h"
/**
 * print_sign - Determines if input is greater, less or equal to zero
 *
 * @n: The number as an integer
 *
 * Return: 1 is greater than zero 0 is zero -1 is less than zero
 */
int print_sign(int n)
{
	if (n > 0)
	{
		_putchar('+');
		return (1);
	}
	else if (n < 0)
	{
		_putchar('-');
		return (-1);
	}
	else
	{
		_putchar(0);
		return (48);
	}
	_putchar('\n');
}

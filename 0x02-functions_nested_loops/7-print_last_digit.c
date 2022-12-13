#include "main.h"

/**
 * print_last_digit -> prints last digit
 * @n: check argument
 * Return: last digit
 */
int print_last_digit(int n)
{
	int X;

	if (n < 0)
		n = -n;
	X = n % 10;
	_putchar(X + '0');
	_putchar('\n');
	return (X);
}

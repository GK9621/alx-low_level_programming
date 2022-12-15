#include "main.h"

/**
 * largest_number - Returns largest number
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd interger
 * Return: largest number
 */

int largest_number(int a, int b, int c)
{
	int largest;

	if (a > b)
	{
		if (b > c)
			largest = a;
		else if (a > c)
			largest = a;
		else
			largest = c;
	}
	else
	{
		if (b < c)
			largest = c;
		else
			largest = b;
	}
	return (largest);
}

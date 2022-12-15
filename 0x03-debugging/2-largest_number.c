#include "main.h"

/**
 * largest_number - largest 3 nos
 * @a: 1st integer
 * @b: 2nd integer
 * @c: 3rd interger
 */
int largest_number(int a, int b, int c)
{
	int largest;
	
	if (a > b && a > c)
	{
		largest = a;
	}
	else if ( b > a && b > c)
	{
		largest = b;
	}
	else if (c > b)
	{
		largest = c;
	}
	else 
	{ 
		largest = b;
	}
	return (largest);
}

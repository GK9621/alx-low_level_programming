#include <stdio.h>
/**
 * main - Entry
 *
 * Return: Always 0 (Sucess)
 */

int main (void)
{
	int c;

	c = 0;
	while (c < 10) {
			putchar(c + '0');
			c++;
		}
	putchar('\n');
	return (0);
}

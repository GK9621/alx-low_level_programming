#include<stdio.h>
#include<stdlib.h>

/**
 * main - alphabet return
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ch = 'a';
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}
	putchar('\n');
	return (0);
}


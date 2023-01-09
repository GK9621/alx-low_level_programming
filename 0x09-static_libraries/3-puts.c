#include "main.h"

/**
 * _puts - prints string followed by line to stdout
 *
 * @str: input string
 *
 */
void _puts(char *str)
{
	int index;

	for (index = 0; str[index] != '\0'; index++)
	{
		_putchar(str[index]);
	}
	_putchar('\n');
}
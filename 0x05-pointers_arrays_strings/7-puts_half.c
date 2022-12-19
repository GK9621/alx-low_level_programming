#include "main.h"

/**
 * puts_half - prints half of a string
 *
 * @str: input string
 */
void puts_half(char *s)
{
	int index, half;

	index = 0;
	while (str[index] != '\0')
		index++;

	half = index / 2;

	if (index % 2 ==1)
		half++;
	while (half < index)
	{
		_putchar(str[half]);
		half++;
	}
	_putchar('\n');
i}

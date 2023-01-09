#include "main.h"

/**
 * _memset - fills first byte of memory
 * @s: pointer to be filled in memory
 * @c: character to fill area
 * @n: number of bytes
 * description _memset: over there
 *
 * Return: pointer that fills area @s
 *
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(s + i) = b;
		i++;
	}
	return (s);
}

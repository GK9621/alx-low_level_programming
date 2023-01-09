#include "main.h"
#include <string.h>

/**
 * _strncat -> append some characters
 * @dest: destination
 * @src: source
 * @n: 3rd parameter
 * Return: string
 */
char *_strncat(char *dest, char *src, int n)
{
	strncat(dest, src, n);
	return (dest);
}

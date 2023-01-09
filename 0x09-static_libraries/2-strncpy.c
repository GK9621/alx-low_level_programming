#include "main.h"
#include <string.h>

/**
 * _strncpy -> copying 
 * @dest: destination
 * @src: source
 * @n: parameter
 * Return: string
 */
char *_strncpy(char *dest, char *src, int n)
{
	strncpy(dest, src, n);
	return (dest);
}

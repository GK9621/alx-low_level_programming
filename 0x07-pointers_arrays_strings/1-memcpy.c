#include "main.h"
/**
 * _memcpy - fill memory to another buffer
 * @dest: source strng
 * @src: strng for filling
 * @n: length buffer
 * Return: new string
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i = 0;

	while (i < n)
	{
		*(dest + i) = *(src + i);
		i++;
	}
	return (dest);
}

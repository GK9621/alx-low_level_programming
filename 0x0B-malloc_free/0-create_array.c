#include "main.h"
#include <stdlib.h>

/**
 * *create_array - creates an array of chars
 * @c: char to initialize
 * @size: no of bytes
 *
 * Return: pointer or null
 */
char *create_array(unsigned int size, char c)
{
	char *array = malloc(size);

	if (size == 0 || array == 0)
		return (NULL);
	while (size--)
		array[size] = c;
	return (array);
}

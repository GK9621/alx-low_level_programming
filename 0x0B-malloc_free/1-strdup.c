#include <stdlib.h>
#include "main.h"

/**
 * *_strdup - copies string
 * @str: string
 *
 * Return: pointer or null
 */
char *_strdup(char *str)
{
	int size, i;
	char *ptr;

	if (str == NULL)
		return (NULL);

	for (size = 0; str[size] != '\0'; size++)
		;

	ptr = (char *) malloc((size + 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; str[i] != '\0'; i++)
		ptr[i] = str[i];
	ptr[i] = '\0';

	return (ptr);
}

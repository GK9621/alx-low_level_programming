#include <stdlib.h>
#include "main.h"

/**
 * get_str_len - lenghts of string
 * @str: string
 * Return: returns integer
 */
char *str_concat(char *s1, char *s2)
{
	int i;

	for (i = 0; str[i] != '\0'; i++)
		;

	return (i + 1);
}

/**
 * str_concat - joins two strings
 * @s1: string one
 * @s2: string two
 * Return: s1 followed by s2
 * if null treat as empty
 * return null on failure
 */
char *str_concat(char *s1, char *s2)
{
	int s1_size, s2_size, i, j;
	char *ptr;

	if (s1 == NULL)
		s1 = "";
	if (s2 == NULL)
		s2 = "";

	s1_size = get_str_len(s1);
	s2_size = get_str_len(s2);

	ptr = (char *) malloc(((s1_size + s2_size) - 1) * sizeof(char));

	if (ptr == NULL)
		return (NULL);

	for (i = 0; s1[i] != '\0'; i++)
		ptr[i] = s1[i];
	for (j = 0; s2[j] != '\0'; j++)
		ptr[i] = s2[j];
	ptr[i] = '\0';

	return (ptr);
}


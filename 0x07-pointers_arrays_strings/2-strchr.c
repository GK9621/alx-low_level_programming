#include "main.h"
/**
 * _strchr - character in strng
 * @s: string
 * @c: char to search
 * Return: points char c in strng s
 */
char *_strchr(char *s, char c)
{
	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}

		++s;
	}
	if (*s == c)
	{
		return (s);
	}

	return (0);
}

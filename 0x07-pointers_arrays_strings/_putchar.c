#include "main.h"
#include <unistd.h>

/**
 * _putchar - writes char to stdout
 * @c: print char
 *
 * Return: On success 1.
 * on error, -1 returned, and errno is set
 */
int _putchar(char c)
{
	return(write(1, &c, 1));
}

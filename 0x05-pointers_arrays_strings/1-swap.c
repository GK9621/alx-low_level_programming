#include "main.h"

/**
 * swap_int - swap values
 * @a: first entry
 * @b: second entry
 *
 */
void swap_int(int *a, int *b)
{
	int changed;

	changed = *a;
	*a = *b;
	*b = changed;
}

#include <stdlib.h>
#include "main.h"

/**
 * free_grid - frees memory
 * @grid: grid to free
 * @height: height of grid
 */
void free_grid(int **grid, int height)
{
	int i;

	if (grid == NUL || height == 0)
		return;

	for(i = 0; i < height; i++)
		free(grid[i]);


	free(grid);
}

#include "main.h"
#include<stdlib.h>
#include<stdio.h>

/**
 * free_grid - allow to frees some spaces + } =
 * @grid:  grid
 * @height: Rows
 *
 * Return: Absolutely nothing
 */

void free_grid(int **grid, int height)
{
int j;

for (j = 0; j < height; j++)
{
free(grid[j]);

free(grid);
}

}

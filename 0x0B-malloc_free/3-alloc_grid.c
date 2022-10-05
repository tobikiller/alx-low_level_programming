#include "main.h"
#include <stdlib.h>

/**
 * alloc_grid - Returns a pointer to a 2-dimensional array of
 * integers with each element initalized to 0.
 * @width: The width of the 2-dimensional array.
 * @height: The height of the 2-dimensional array.
 *
 * Return: If width <= 0, height <= 0, or the function fails - NULL.
 * Otherwise - a pointer to the 2-dimensional array of integers.
 */


int **alloc_grid(int width, int height)
{
	int **rw;
	int i, j;

	if (width <= 0 || height <= 0)
	return (NULL);


	rw = malloc(sizeof(int *) * width);

	if (rw == NULL)
	return (NULL);

	for (i = 0; i < width; i++)
	{
	rw[i] = malloc(sizeof(int) * height);
	}

	for (i = 0; i < width; i++)
	{
	for (j = 0; j < height; j++)
	{
	rw[i][j] = 0;
	}
	}
	return (rw);
}

#include "main.h"
#include <stdlib.h>
/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */
int **alloc_grid(int width, int height)
{
	int **layla;
	int a, b;

	if (width <= 0 || height <= 0)
		return (NULL);

	layla = malloc(sizeof(int *) * height);

	if (layla == NULL)
		return (NULL);

	for (a = 0; a < height; a++)
	{
		layla[a] = malloc(sizeof(int) * width);

		if (layla[a] == NULL)
		{
			for (; a >= 0; a--)
				free(layla[a]);

			free(layla);
			return (NULL);
		}
	}

	for (a = 0; a < height; a++)
	{
		for (b = 0; b < width; b++)
			layla[a][b] = 0;
	}

	return (layla);
}

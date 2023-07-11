#include "main.h"

/**
 * alloc_grid - nested loop to make grid
 * @width: width input
 * @height: height input
 * Return: pointer to 2 dim. array
 */


int **alloc_grid(int width, int height)
{
	int **bat, i, j;

	bat = malloc(sizeof(*bat) * height);
	if (width <= 0 || height <= 0 || bat == 0)
	{
		return (NULL);
	}
	else
	{
		for (i = 0; i < height; i++)
		{
			bat[i] = malloc(sizeof(**bat) * width);
			if (bat[i] == 0)
			{
				while (i--)
					free(bat[i]);
				free(bat);
				return (NULL);
			}
			for (j = 0; j < width; j++)
			bat[i][j] = 0;
		}
	}
	return (bat);
}

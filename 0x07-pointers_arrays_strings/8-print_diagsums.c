#include "main.h"

/**
 * print_diagsums - description
 * @a: 2d array of int type
 * @size: size of array (square)
*/


void print_diagsums(int *a, int size)
{
	int i, sum1 = 0, sum2 = 0;

	for (i = 0; i < size * size; i += size + 1)
	{
	sum1 += a[i];
	sum2 += a[i + (size - 1)];
	}
	printf("%d\n", sum1);
	printf("%d\n", sum2);
}

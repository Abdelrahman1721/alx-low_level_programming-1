#include "main.h"
#include <stdio.h>
/**
 * print_array - print n elements of an array of integars.
 *
 * @n: elemnts parameter input
 * @a: string parameter input
 *
 * Return: Nothing
*/

void print_array(int *a, int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
		if (i != (n - 1))
			printf("%d, ", a[i])
		else
		printf("%d", a[i]);

	}
	printf("\n");
}

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

#include <stdio.h>

void print_array(int *a, int n)
{
	int i;

	for (int i = 0; i < n; i++)
	{
	printf("%d", a[i]);
	if (i < n - 1)
	{
	printf(", ");
	}
	}
	printf("\n");
}

#include <stdio.h>

/**
 * swap_int - swap the values of two integar
 *		using two input paramaters
 *
 * @a: input paramater 1
 * @b: input paramater 2
 *
 * Return: Nothing
*/
void swap_int(int *a, int *b)
{
	int temp;

	temp = *a;
	*a = *b;
	*b = temp;
}

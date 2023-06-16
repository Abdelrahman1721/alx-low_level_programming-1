#include <stdlib.h>
#include <time.h>
#include <stdio.h>
/**
 * main - Entry point
 *
 * Description: print the value of n status:
 *		greater than, is zero and is not less than 6
 *
 * Return: 0 (success)
*/


int main(void)
{
	int n, x;

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	x = x % 10;
	if (x > 5)
		printf("Last digit of %d is %d and is greater than 5\n", n, x);
	else if (x == 0)
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	else
		printf("Last digit of %d is %d and is less than 6 and not 0\n", n, x);
	return (0);
}

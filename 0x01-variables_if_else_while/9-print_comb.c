#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible combinations of single-digit numbers
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	int c = 0;

	while (c <= 9)
	{
	putchar(c + '0');
		if (c != 9)
		{
		putchar(',');
		putchar(' ');
		}
	c++;

	}
	putchar('\n');
	return (0);
}

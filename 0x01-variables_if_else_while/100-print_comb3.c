#include <stdio.h>

/**
 * main - entry point
 *
 * description:prints all possible different combinations of two digits
 *
 * Return: Alawys 0 (success)
*/


int main(void)
{
int c, x;
for (c = 0; c <= 9; c++)
{
for (x = c + 1; x <= 9; x++)
{
putchar(c + '0');
putchar(x + '0');
if (c == 8)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

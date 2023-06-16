#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible different combinations of three digits
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
int c, x, z;
for (c = 0 ; c <= 9 ; c++)
{
for (x = c + 1 ; x <= 9 ; x++)
{
for (z = x + 1; z <= 9; z++)
{
putchar(c + 48);
putchar(x + 48);
putchar(z + 48);
if (c == 7)
break;
putchar(',');
putchar(' ');
}
}
}
putchar('\n');
return (0);
}

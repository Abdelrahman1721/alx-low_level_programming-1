#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all possible combinations of two two-digit numbers
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
int c, x;
for (c = 0 ; c <= 99 ; c++)
{
for (x = c + 1 ; x <= 99 ; x++)
{
putchar(c / 10 + 48);
putchar(c % 10 + 48);
putchar(' ');
putchar(x / 10 + 48);
putchar(x % 10 + 48);
if (c == 98)
break;
putchar(',');
putchar(' ');
}
}
putchar('\n');
return (0);
}

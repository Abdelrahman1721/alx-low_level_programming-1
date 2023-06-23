#include"main.h"
/**
 * print_diagonal - draws a diagonal line on the terminal.
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_diagonal(int n)
{
if (n > 0)
{
int i;
for (i = 0; i < n ; i++)
{
int j;
for (j = 0; j < i ; j++)
{
_putchar(' ');
}
_putchar('\\');
_putchar('\n');
}
}
else
_putchar('\n');
}

#include"main.h"
/**
 * print_triangle - prints a triangle, followed by a new line.
 * @size: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_triangle(int size)
{
if (size > 0)
{
int i;
for (i = 0; i < size ; i++)
{
int j, l;
for (j = 0; j < size - i - 1 ; j++)
{
_putchar(' ');
}
for (l = 0; l <= i ; l++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

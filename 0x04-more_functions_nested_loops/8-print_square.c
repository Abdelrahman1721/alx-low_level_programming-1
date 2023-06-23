#include"main.h"
/**
 * print_square - prints a square, followed by a new line.
 * @size: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_square(int size)
{
if (size > 0)
{
int i;
for (i = 0; i < size ; i++)
{
int j;
for (j = 0; j < size ; j++)
{
_putchar('#');
}
_putchar('\n');
}
}
else
_putchar('\n');
}

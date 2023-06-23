#include"main.h"
/**
 * print_line - draws a straight line in the terminal.
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_line(int n)
{
while (n-- && n >= 0)
{
_putchar('_');
}
_putchar('\n');
}

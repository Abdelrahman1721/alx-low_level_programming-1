#include"main.h"
/**
 * print_most_numbers - prints the numbers, from 0 to 9, followed by a new line
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_most_numbers(void)
{
char c;
for (c = '0'; c <= '9'; c++)
{
if (c != '4' && c != '2')
_putchar(c);
}
_putchar('\n');
}

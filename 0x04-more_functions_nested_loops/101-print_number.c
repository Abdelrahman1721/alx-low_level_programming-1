#include"main.h"
/**
 * print_number - prints a number, followed by a new line.
 * @n: The number to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void print_number(int n)
{
int k;
for (k = 1; ; k *= 10)
{
{
if (n / k == 0)
break;
}
}
if (n > 0)
{
int i, x;
i = k / 10;
while (i != 0)
{
x = (n / i) % 10;
_putchar('0' + x);
i /= 10;
}
}
else if (n < 0)
{
int q, o;
n = n * -1;
q = k / 10;
_putchar('-');
while (q != 0)
{
o = (n / q) % 10;
_putchar('0' + o);
q /= 10;
}
}
else
{
_putchar('0');
}
}

#include"main.h"
/**
 * more_numbers - prints 10 times the numbers, from 0 to 14
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
void more_numbers(void)
{
char c[] = "01234567891011121314";
int i, sz = 10, n = strlen(c);
while (sz--)
{
for (i = 0 ; i < n ; i++)
{
_putchar(c[i]);
}
_putchar('\n');
}
}

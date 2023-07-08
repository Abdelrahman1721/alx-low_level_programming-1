#include"main.h"
/**
 * _memset - prints array.
 * @s: char
 * @b: char
 * @n: integer
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
char *_memset(char *s, char b, unsigned int n)
{
unsigned int i;
for (i = 0; i < n ; i++)
{
s[i] = b;
}
return (s);
}

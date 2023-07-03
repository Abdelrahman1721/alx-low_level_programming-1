#include"main.h"

/**
 * _memset - prints array.
 * @s: pointer
 * @b: constant
 * @n: integer
 *
 * Return: pointer s
 */


char *_memset(char *s, char b, unsigned int n)
{
	for (unsigned int i = 0; i < n; i++)
	{
	s[i] = b;
	}
	return (s);
}
#include "main.h"

/**
 * is_palindrome - palindrome or nah?
 * @s: pointer to a string
 *
 * Return: 0 or 1
 */
int is_palindrome(char *s)
{
	return (_check(s, 0));
}

/**
 * _palindrome - palindrome or nah?
 * @s: pointer to a string
 * @n: iterator 0
 *
 * Return: 0 or 1
 */
int _check(char *s, int n)
{
	int length = strlen(s);

	if (n == length)
	{
		return (1);
	}
	else if (s[n] != s[length - 1 - n])
	{
		return (0);
	}

		return (_check(s, n + 1));
}

#include "main.h"

/**
 * _sqrt_recursion - main funct
 * @n: int n
 * @i: integer parameter
 * Return: int
 */
int _sqrt(int n, int i);
int _sqrt_recursion(int n)
{
	return (_sqrt(n, 1));
}

/**
 * _sqrt - _sqrt_recursion
 * @n: integer paramtr
 * @i: integer parameter
 * Return: sqrt
 */
int _sqrt(int n, int i)
{
	if (n < 0)
		return (-1);
	if (i * i == n)
	{
		return (i);
	}
	else
	return (_sqrt(n, i + 1));
}

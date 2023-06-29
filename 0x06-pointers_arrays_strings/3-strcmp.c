#include "main.h"

/**
 * _strcmp - compares two string
 * @s1: string 1
 * @s2: string 2
 * Return: 1 if true, 0 if false
*/

int _strcmp(char *s1, char *s2)
{
	int i = 0;

	while (s1[i] == s2[i])
	{
	if (s1[i] == '\0')
	{
		return (0);
	}
	i++;
	}

		return (s1[i] - s2[i]);
}

#include"main.h"
/**
 * *_strchr - prints array.
 * @s: pointer
 * @c: char
 *
 * Return: s
*/
char *_strchr(char *s, char c)
{
	for (unsigned int i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == c)
		{
		return (s + i);
		}
	}
	return (NULL);
}

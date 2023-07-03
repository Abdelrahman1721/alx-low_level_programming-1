#include "main.h"

/**
 * *_strstr - Locates a substring
 *
 * @haystack: char string
 * @needle: char string
 *
 * Return: char pointer or null
 */
char *_strstr(char *haystack, char *needle)
{
	int i;
	int j;

	for (i = 0; haystack[i] != '\0'; i++)
	{
		for (j = 0; needle[j] != '\0'; j++)
		{
			if (haystack[i] == needle[j])
			{
				return (&needle[j]);
			}
		}
	}
	return ('\0');
}

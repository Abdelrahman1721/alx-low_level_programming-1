#include "main.h"

/**
 * _strcat - function that concatenates
 *	two strings.
 *
 *@dest: pointer to destnation input
 *@src: pointer to source input
 *
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int i, c;

	i = 0;

	while (dest[i])
	i++;

	for (c = 0; src[c]; c++)
		dest[i++] = src[c];

	return (dest);
}

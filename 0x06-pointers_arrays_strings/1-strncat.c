#include "main.h"

/**
 * _strcat - function that concatenates
 *      two strings.
 *
 *@dest: pointer to destnation input
 *@src: pointer to source input
 *@n: most number fo byte
 * Return: pointer to resulting string @dest
*/

char *_strcat(char *dest, char *src)
{
	int z, c;

	z = 0;

	while (dest[z])
	z++;

	for (i = 0; i < n && src[i] != '\0'; i++)
	dest[z + i] = src[c];
	dest[z + i] = '\0';

	return (dest);
}

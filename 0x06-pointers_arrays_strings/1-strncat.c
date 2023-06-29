#include "main.h"

/**
 * _strncat - a function that concatenates two strings.
 *
 * @dest: pointer to destination input
 * @src: pointer to source input
 * @n: most number fo byte from @src
 *
 * Return: @dest
*/

char *_strncat(char *dest, char *src, int n)
{
	int z, i;

	z = 0;

	while (dest[z])
		z++;

	for (i = 0; i < n && src[i] != '\0'; i++)
		dest[z + i] = src[i];
	dest[z + i] = '\0';

	return (dest);
}

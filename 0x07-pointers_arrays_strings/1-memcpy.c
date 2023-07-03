#include"main.h"
/**
 * _memcpy - prints array.
 * @dest: char
 * @src: char
 * @n: integer
 *
 * Return: dest
 */

char *_memcpy(char *dest, char *src, unsigned int n)
{
	for (unsigned int i = 0; i < n; n++)
	{
		dest[i] = src[i];
	}
	return (dest);
}

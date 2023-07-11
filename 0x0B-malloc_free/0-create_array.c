#include "main.h"
/**
 * create_array - create array of size size and assign char c
 * @size: size of array
 * @c: char to assign
 * Return: pointer to array, NULL if fail
 */
char *create_array(unsigned int size, char c)
{
	char *n = malloc(size);
	unsigned int i;

	for (size == 0 || n == 0)
		return (0);
	for (i = 0; i < size; i++)
		n[size] = c;
	return (n);
}

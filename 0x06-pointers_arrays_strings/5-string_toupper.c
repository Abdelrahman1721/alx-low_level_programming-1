#include "main.h"

/**
 * *string_toupper - changes all lowercase letters of a string to upper.
 *
 * @str: string to return.
 * Return: nothing
*/

char *string_toupper(char *str)
{
	int i = 0;

	while (str[i] != '\0')
	{
	if (islower(str[i]))
	{
	str[i] = toupper(str[i]);
	}
	i++;
	}
	return (str);
}

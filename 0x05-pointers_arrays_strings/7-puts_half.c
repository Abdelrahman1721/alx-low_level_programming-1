#include "main.h"

/**
 * puts_half - print second half of string of a string
 * @str: char array string type
 * description: if odd number of char, print (length - 1) / 2
*/

void puts_half(char *str)
{
	int length = strlen(str);
	int half = length / 2;

	if (length % 2 != 0)
	{
	half = (length - 1) / 2;
	}
	for (int i = half; i < length; i++)
	{
	_putchar(str[i]);
	}
	_putchar('\n');
}

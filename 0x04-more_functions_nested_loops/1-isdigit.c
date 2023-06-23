#include"main.h"
/**
 * _isdigit - Returns 1 if c is digit
 * @c: The character to print
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
 */
int _isdigit(int c)
{
char x = c;
if (x >= '0' && x <= '9')
return (1);
else
return (0);
}

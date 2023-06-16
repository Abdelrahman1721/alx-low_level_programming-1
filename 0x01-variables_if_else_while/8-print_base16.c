#include <stdio.h>

/**
 * main - entry point
 *
 * description: prints all the numbers of base 16 in lowercase
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
int i = 0;
while (i < 16)
{
if (i < 10)
{
	putchar(i + '0');
	i++;
}
else
{
	putchar(i - 10 + 'a');
	i++;
}
} putchar('\n');
return (0);
}

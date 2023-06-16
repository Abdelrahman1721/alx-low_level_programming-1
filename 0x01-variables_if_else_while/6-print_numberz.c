#include <stdio.h>

/**
 * main - entry point
 *
 * Description: print all single number
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
int x = 0;
while (x <= 9)
{
putchar(x + '0');
x++;
}
printf("\n");
return (0);
}

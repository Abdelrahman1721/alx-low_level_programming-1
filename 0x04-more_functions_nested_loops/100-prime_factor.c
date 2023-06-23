#include"main.h"
/**
 * main - Entry point
 *
 * Description: 'print a statement'
 *
 * Return: Always 0 (Success)
 */

int main(void)
{
long n = 612852475143, x;
int c = 2;
while (n > 1)
{
if (n % c == 0)
{
x = c;
n /= c;
}
else
c++;
}
printf("%ld\n", x);
return (0);
}

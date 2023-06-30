#include "main.h"

/**
 * cap_string - prints array.
 * @s: array
 *
 * Return: On success 1.
 * On error, -1 is returned, and errno is set appropriately.
*/

char *cap_string(char *s)
{
char arr[] = " \t\n,.;{}()!?\"";
int n = strlen(s), i;

for (i = 0; i < n; i++)
{
int f = 0, j;

for (j = 0; j < 13; j++)
{
if (s[i] == arr[j])
f = 1;
}
if (s[i] >= 'a' && s[i] <= 'z' && i == 0)
s[i] -= 32;
if (s[i + 1] >= 'a' && s[i + 1] <= 'z' && f == 1)
s[i + 1] -= 32;
}
return (s);
}


























































#include "main.h"
#include <stdio.h>
#include <string.h>

/**
 * infinite_add - adds two numbers
 * @n1: first number
 * @n2: second number
 * @r: result
 * @size_r: result length
 * Return: sum
*/

char *infinite_add(char *n1, char *n2, char *r, int size_r)
{
	int len1 = strlen(n1);
	int len2 = strlen(n2);
	int carry = 0, sum, i, j, k;

	if (len1 + 1 > size_r || len2 + 1 > size_r)
	return (0);

	i = len1 - 1;
	j = len2 - 1;
	k = 0;
	while (i >= 0 || j >= 0 || carry)
	{
		sum = carry;
	if (i >= 0)
	{
		sum += n1[i] - '0';
		i--;
	}
	if (j >= 0)
	{
	sum += n2[j] - '0';
		j--;
	}
	if (k < size_r)
	{
		r[k] = sum % 10 + '0';
		k++;
	}
	carry = sum / 10;
	}
	if (k < size_r)
		r[k] = '\0';
	else
	return (0);

for (i = 0, j = k - 1; i < j; i++, j--)
{
char temp = r[i];

r[i] = r[j];
r[j] = temp;
}
return (r);
}

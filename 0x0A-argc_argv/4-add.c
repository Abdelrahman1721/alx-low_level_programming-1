#include <stdio.h>
#include <stdlib.h>

/**
 * main - adds positive numbers
 * @argv: array of pointers to strings
 * @argc: argument count
 *
 * Return: 0 or 1
*/

int main(int argc, char *argv[])
{
	int i;
	int add = 0;
	char *c;

	for (i = 1; i < argc; i++)
	{
		for (c = argv[argc]; *c; c++)
		{
			if (*c < '0' || *c > '9')
				printf("ERROR\n");
					return (1);
			add += atoi(argv[i]);
		}
	}
	printf("%d\n", add);
	return (0);
}

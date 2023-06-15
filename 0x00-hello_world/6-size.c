#include <stdio.h>
/**
 * main - Entry point
 *
 * description: using sizeof to print the size of various types.
 *
 * Return: Alawys 0 (success)
*/

int main(void)
{
	printf("size of a char: %lu byte(S)\n", sizeof(char));
	printf("size of a int: %lu byte(S)\n", sizeof(int));
	printf("size of a long int: %lu byte(S)\n", sizeof(long int));
	printf("size of a long long int: %lu byte(S)\n", sizeof(long long int));
	printf("size of a float: %lu byte(S)\n", sizeof(float));
	return (0);
}

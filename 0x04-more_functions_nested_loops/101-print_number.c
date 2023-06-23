#include"main.h"
/**
 * print_number - print an integer
 *
 * @n: The integer to be printed
*/
int main(void)
{
	unsigned int num = n;
	/*first check if its negative*/
	if (n < 0)
	{
		_putchar('-');
		num = -num;
	}
	/* print the first few digit */
	if((num / 10) > 0)
		print_number(num / 10);

	/* print the last digit */
	_putchar((num % 10) + 48);

}

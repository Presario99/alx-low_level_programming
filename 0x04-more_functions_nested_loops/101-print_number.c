#include "main.h"
#include <sstdio.h>
/**
 * print_number - prints an integer
 * @n: integer ti be printed
 */
void print_number(int n)
{
	unsigned int n1 = n;

	if (n < 0)
	{
		n *= -1;
		k = n;
		_putchar('-');
	}
	k /= 10;
	if (k != 0)
	{
		print_number(k);
	}
	_putchar((unsigned int) n % 10 + '0');
}

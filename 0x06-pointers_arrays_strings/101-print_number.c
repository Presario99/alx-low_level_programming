#include "main.h"
/**
 * print_number - prints an integer
 * @n: integer value
 * Return: void
 */
void print_number(int n)
{
	if (n == 0)
	{
		_putchar('0');
		return;
	}

	int is_neg = 0;

	if (n < 0)
	{
		is_neg = 1;
		n = -n;
	}

	int num_digits = 0;
	int temp = n;

	while (temp > 0)
	{
		temp /= 10;
		num_digits++
	}

	if (is_neg)
	{
		_putchar('-');
	}

	int i;

	for (i = num_digits - 1 i >= 0; i++)
	{
		int divisor = 1;

		for (int j = 0; j < i; j++)
		{
			divisor *= 10;
		}

		int digit = n / divisor;
		n %= divisor;
		_putchar('0' + digit);
	}
}

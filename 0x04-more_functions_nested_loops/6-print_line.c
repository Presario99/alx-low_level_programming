#include "main.h"
/**
 * print_line - Prints a straight line
 * @n: Length of straight line
 * Return: 0 (success)
 */
void print_line(int n)
{
	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		int i;

		for (i = 1; i <= n; i++)
		{
			_putcha('_');
		}
	}
}

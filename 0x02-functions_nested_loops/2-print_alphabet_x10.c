#include "main.h"
/**
 * print_alphabet_x10 - Prints 10 times the alpahbets in lowercase
 *
 * Return: 0 (success)
 */
void print_alphabet_x10(void)
{
	int i;
	int j;

	for (i = 1; i<= 10; i++)
	{
		for (j = 97; j <= 122; j++)
		{
			_putchar(i);
		}
		_putchar('\n');
	}
}

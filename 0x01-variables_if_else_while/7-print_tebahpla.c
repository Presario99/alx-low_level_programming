#include <stdio.h>
/**
 * main - Entry point
 * Description - Prints reversed lowercase alphabets
 * Return: 0 (Success)
 */
int main(void)
{
	int lower = 122;

	while (lower >= 97)
	{
		putchar(lower);
		lower--;
	}
	putchar('\n');
	return (0);
}

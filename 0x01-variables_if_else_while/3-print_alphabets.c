#include <stdio.h>

/**
 * main - Entry point
 * Description - A program that prints alphabets in lower and upper case
 * Return: 0 (Success)
 */
int main(void)
{
	int lower = 97;/* storing ASCII number for a */
	int upper = 65;/* storing ASCII number for A */

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	while (upper <= 90)
	{
		putchar(upper);
		upper++;
	}
	putchar('\n');
	return (0);
}

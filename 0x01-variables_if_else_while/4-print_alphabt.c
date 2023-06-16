#include <stdio.h>
/**
 * main - Entry point
 * Description - program that prints the lowercase but ommit e and q
 * Return: 0 (Success)
 */
int main(void)
{
	int lower = 97;

	while (lower <= 122)
	{
		if (lower == 101 || lower == 113)
		{
			lower++;
			continue;
		}
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}

#include <stdio.h>

/**
  * main - Entry point
  * Description - A program that prints alphabets in lowercase
  * Return: 0 (Success)
  */
int main(void)
{
	int lower = 97; /* A variable declaration of ASCII number for lower a */

	while (lower <= 122)
	{
		putchar(lower);
		lower++;
	}
	putchar('\n');
	return (0);
}

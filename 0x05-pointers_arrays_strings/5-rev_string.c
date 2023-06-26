#include "main.h"

/**
 * rev_string - reverses a sring
 *
 * @s: string value
 * Return: void
 *
 */
void rev_string(char *s)
{
	int len = 0, pos = 0;
	char temp;

	while (s[pos++])
	{
		len++;
	}

	for (pos = len - 1; pos >= len / 2; pos--)
	{
		temp = s[pos];
		s[pos] = s[len - pos - 1];
		s[len - pos - 1] = temp;
	}
}

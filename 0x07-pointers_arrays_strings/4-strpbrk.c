#include "main.h"
/**
 * _strpbrk -Entry Point
 * @s: input
 * @accept: input
 * Return: Always s (success)
 */
char *_strpbrk(char *s, char *accept)
{
	int n;

	while (*s)
	{
		for (n = 0; accept[n]; n++)
		{
		if (*s == accept[n])
		return (s);
		}
		s++;
	}

	return ('\0');
	return (0);
}

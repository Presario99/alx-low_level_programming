#include <stdio.h>
#include "main.h"
/**
 * _strchr - a function that locates a char in a string
 * @s: the string
 * @c: char been searched
 * Return: 0 (Success)
 */
char *_strchr(char *s, char c)
{
	if (s == NULL)
	{
		return (NULL);
	}

	while (*s != '\0')
	{
		if (*s == c)
		{
			return (s);
		}
		s++;
	}

	if (c == '\0')
	{
		return (s);
	}

	return (NULL);
}

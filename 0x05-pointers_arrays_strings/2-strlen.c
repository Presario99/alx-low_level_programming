#include "main.h"

/**
 * _strlen - checks and prints the length of a string
 *
 * @s: value of the string stored
 * Return: length of *s (success)
 */
int _strlen(char *s)
{
	int length = 0;

	while (*s != '\0')
	{
		length++;
		s++;
	}
	return (length);
}

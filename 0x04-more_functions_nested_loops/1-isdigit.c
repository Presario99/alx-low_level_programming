#include "main.h"
/**
 * _isdigit - Checks if is a digit
 * @c: The nvalue to be checked
 * Return: 1 if is a digit and 0 if otherwise
 */
int _isdigit(int c)
{
	if (c <= 48 && c <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

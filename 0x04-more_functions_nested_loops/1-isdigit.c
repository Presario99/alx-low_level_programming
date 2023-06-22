#include "main.h"
/**
 * _isdigit - Checks if is a digit
 * @i: The nvalue to be checked
 * Return: 1 if is a digit and 0 if otherwise
 */
int _isdigit(int i)
{
	if (i >= 48 && i <= 57)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

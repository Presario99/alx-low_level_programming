#include "main.h"
/**
 * _isupper - Checks if a letter is upper
 * @a - The value to be checked
 * Return: 1 if is upper and 0 if otherwise
 */
int _isupper(int a)
{
	if (a >= 65 && a <= 90)
	{
		return (1);
	}
	else
	{
		return (0);
	}
}

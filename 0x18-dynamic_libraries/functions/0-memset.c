#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _memset - changes a string to an int
* @s: the string to be changed
* @b: char
* @n: int
*
* Return: the converted int
*/
char *_memset(char *s, char b, unsigned int n)
{
	return (memset(s, b, n));
}

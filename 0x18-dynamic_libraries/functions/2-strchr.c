#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strchr - changes a string to a char
* @s: the string
* @c: char
*
* Return: char
*/

char *_strchr(char *s, char c)
{
	return (strchr(s, c));
}

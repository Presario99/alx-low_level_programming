#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strpbrk - changes a string to an int
* @s: the string to be changed
* @accept: menklj
*
* Return: the converted int
*/

char *_strpbrk(char *s, char *accept)
{
	return (strpbrk(s, accept));
}

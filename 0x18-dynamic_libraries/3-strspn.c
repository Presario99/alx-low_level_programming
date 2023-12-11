#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strspn - changes a string to an int
* @s: the string to be changed
* @accept: asjkj
*
* Return: the converted int
*/

unsigned int _strspn(char *s, char *accept)
{
	return (strspn(s, accept));
}

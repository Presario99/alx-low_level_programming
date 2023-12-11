#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _isupper - changes a string to an upper
* @c: the string to be changed
*
* Return: upper
*/

int _isupper(int c)
{
	return (c >= 'A' && c <= 'Z');
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _islower - checks lower
* @c: the char
*
* Return: value
*/

int _islower(int c)
{
	return (c >= 'a' && c <= 'z');
}
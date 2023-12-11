#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
* _strstr - changes a string to an int
* @needle: the string to be changed
* @haystack: meme
*
* Return: the converted int
*/

char *_strstr(char *haystack, char *needle)
{
	return (strstr(haystack, needle));
}

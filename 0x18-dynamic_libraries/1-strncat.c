#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
#include <string.h>

/**
 * _strncat - writes the character c to stdout
 * @dest: destination
 * @src: source
 * @n: int
 *
 * Return: concatenated string
 */

char *_strncat(char *dest, char *src, int n)
{
	return (strncat(dest, src, n));
}

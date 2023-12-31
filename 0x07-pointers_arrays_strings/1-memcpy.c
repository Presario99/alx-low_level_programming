#include "main.h"
/**
 * _memcpy - a function that copies a memory area
 * @dest: destination memory area
 * @src: location to be copied
 * @n: number of bytes
 * Return: dest (success)
 */
char *_memcpy(char *dest, char *src, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		dest[i] = src[i];
	}

	return (dest);
}

#include "main.h"

/**
 * *_strcpy - copies the string pointed to by src to dest including the
 * terminating null
 * @dest: pointer to store the value of src
 * @src: string to be copied
 * Return: The copied string
 *
 */
char *_strcpy(char *dest, char *src)
{
	char *ptr = dest;

	while (*src != '\0')
	{
		*dest = *src;
		dest++;
		src++;
	}

	*dest = '\0';
	return (ptr);
}

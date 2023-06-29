#include "main.h"
/**
 * rot13 - encodes a string using ROT-13
 * @str: string to be encoded
 * Return: str (success)
 */
char *rot13(char *str)
{
	int i, j;
	char raw[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZabcdefghijklmnopqrstuvwxyz";
	char rot[] = "NOPQRSTUVWXYZABCDEFGHIJKLMnopqrstuvwxyzabcdefghijklm";

	for (i = 0; str[i] != '\0'; i++)
	{
		for (j = 0; j < 52; j++)
		{
			if (str[i] == raw[j])
			{
				str[i] = rot[j];
				break;
			}
		}
	}
	return (str);
}

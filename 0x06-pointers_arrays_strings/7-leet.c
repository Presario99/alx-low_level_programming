#include "main.h"
/**
 * leet - encoodes 1337
 * @str: string value to be encoded
 * Return: str (success)
 */
char *leet(char *str)
{
	char *ptr = str;
	char rep[10] = {'a', 'A', 'e', 'E', 'o', 'O', 't', 'T', 'l', 'L'};
	char encoded[10] = {'4', '4', '3', '3', '0', '0', '7', '7', '1', '1'};

	while (*ptr != '\0')
	{
		int i;

		for (i = 0; i < 10; i++)
		{
			if (*ptr == rep[i])
			{
				*ptr = encoded[i];
				break;
			}
		}
		ptr++;
	}

	return (str);
}

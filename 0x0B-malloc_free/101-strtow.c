#include "main.h"
#include <stdlib.h>
/**
 * word_count - helper function to count words
 * @s: string
 *
 * Return: number of words
 */
int word_count(char *s)
{
	int sin, i, j;

	sin = 0;
	j = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			sin = 0;
		else if (sin == 0)
		{
			sin = 1;
			j++;
		}
	}

	return (j);
}

/**
 * **strtow - splits a string into two
 * @str: string
 *
 * Return: pointer to array
 */

char **strtow(char *str)
{
	char **mat, *tmp;
	int i, k = 0, len = 0, words, c = 0, start, end;

	while (*(str + len))
		len++;

	words = word_count(str);

	if (words == 0)
		return (NULL);

	mat = (char **) malloc(sizeof(char *) * (words + 1));
	if (mat == NULL)
		return (NULL);


	for (i = 0; i <= len; i++)
	{
		if (str[i] == ' ' || str[i] == '\0')
		{
			if (c)
			{
				end = i;
				tmp = (char *) malloc(sizeof(char) * (c + 1));
				if (tmp == NULL)
					return (NULL);
				while (start < end)
					*tmp++ = str[start++];

				*tmp = '\0';
				mat[k] = tmp - c;
				k++;
				c = 0;
			}
		}
		else if (c++ == 0)
			start = i;
	}

	mat[k] = NULL;

	return (mat);
}

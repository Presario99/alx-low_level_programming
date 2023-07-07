#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multipliers integers
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: result of multiplication (success)
 */

int main(int argc, char *argv[])
{
	int i;
	int sum = 0;

	/* If no numbers are passed, print 0 */
	if (argc == 1)
	{
		printf("0\n");
		return (0);
	}

	/* Iterate over the command-line arguments */
	for (i = 1; i < argc; i++)
	{
		char *arg = argv[i];

		int j;

		/* Check if the argument contains only digits */
		for (j = 0; arg[j] != '\0'; j++)
		{
			if (!isdigit(arg[j]))
			{
				printf("Error\n");
				return (1);
			}
		}

		/* Convert the argument to an integer and add it to the sum */
		sum += atoi(arg);
	}

	printf("%d\n", sum);
	return (0);
}


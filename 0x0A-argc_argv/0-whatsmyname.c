#include <stdio.h>
/**
 * main - Entry point
 * @argc: argument count
 * @argv: argument vector
 * Return: name of program (success)
 */
int main(int argc, char *argv[])
{
	int i;

	for (i = 0; i < argc; i++)
	{
		printf("%s\n", argv[0]);
	}

	return (0);
}

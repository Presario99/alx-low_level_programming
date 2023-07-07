#include "main.h"
#include <stdio.h>
/**
 * main - Print number of args
 * @argc: argument count
 * @argv: argument vector
 *
 * Return: argc (success)
 */
int main(int argc, char *argv[])
{
	(void) argv;
	printf("%d\n", argc - 1);
	return (0);
}

#include "main.h"
#include <stdio.h>
#include <stdlib.h>
#include <ctype.h>
/**
 * main - multipliers two numbers
 * @argc: argument count
 * @argv: argumnet vector
 * Return: sum of 2 numbers multiplied
 */

int main(int argc, char *argv[])
{
	int num1, num2, result;

	if (argc != 3 || argc <= 1)
	{
		printf("Error\n");
		return (1);
	}

	num1 = atoi(argv[1]);
	num2 = atoi(argv[2]);
	result = num1 * num2;

	printf("%d\n", result);

	return (0);
}

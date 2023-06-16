#include <stdlib.h>
#include <time.h>
#include <stdio.h>

/**
  * main - Entry point
  * Description - A program to print the last digit of a number
  * Return: 0 (success)
  */
int main(void)
{
	int n;
	int ld; /* variable name for last digit */

	srand(time(0));
	n = rand() - RAND_MAX / 2;
	ld = n % 10; /* checking for last digit */

	if (ld > 5)
	{
		printf("Last digit of %d is %d and is greater than 5\n", n, ld);
	}
	else if (ld == 0)
	{
		printf("Last digit of %d is %d and is 0\n", n, ld);
	}
	else
	{
		printf("Last digit of %d is %d and and is less than 6 and not 0\n", n, ld);
	}
	return (0);
}

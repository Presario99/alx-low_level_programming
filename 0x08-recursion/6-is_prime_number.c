#include "main.h"
#include <stdio.h>

int check_prime(int n, int divisor);

/**
 * is_prime_number - returns 1 if integer is prime number
 * @n: integer value
 * Return: 1 if prime
 */

int is_prime_number(int n)
{
	return (check_prime(n, 2));
}


/**
 * check_prime - check if number is prime
 * @n: number to be checked
 * @divisor: divisor to be use to check prime
 * Return: 1 for prime 0 for composite
 */
int check_prime(int n, int divisor)
{
	if (n < 2)
	{
		return (0);
	}

	if (divisor * divisor > n)
	{
		return (1);
	}

	if (n % divisor == 0)
	{
		return (0);
	}

	return (check_prime(n, divisor + 1));
}

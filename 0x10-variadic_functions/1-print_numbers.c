#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_numbers - print numbers followed by a new line
 * @separator: string to be printted between numbers
 * @n: number integers passed to the function
 * Return: all numbers separeted with the separator
 */

void print_numbers(const char *separator, const  unsigned int n, ...)
{
	unsigned int i;
	va_list ap;

	va_start(ap, n);

	for (i = 1; i <= n; i++)
	{
		printf("%d", va_arg(ap, int));

		if (i < n && separator)
		{
			printf("%s", separator);
		}
	}

	printf("\n");
	va_end(ap);
}

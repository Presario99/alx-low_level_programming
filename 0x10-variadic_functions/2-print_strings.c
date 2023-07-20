#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>

/**
 * print_strings - prints strings followed by a new line
 * @separator: string to be printed between the strings
 * @n: number of strings passed to the function
 * Return: strings separated with separator
 */

void print_strings(const char *separator, const unsigned int n, ...)
{
	unsigned int i;
	char *str;
	va_list argu;

	va_start(argu, n);

	for (i = 1; i <= n; i++)
	{
		str = va_arg(argu, char *);

		if (str)
			printf("%s", str);
		else
			printf("(nil)");

		if (i < n && separator)
			printf("%s", separator);
	}

	printf("\n");
	va_end(argu);
}

#include "variadic_functions.h"
#include <stdio.h>
#include <stdarg.h>
/**
 * print_all - prints any data type
 * @format: lit of types of arguments passed to the
 * the function
 * Return: void
 */
void print_all(const char * const format, ...)
{
	unsigned int i = 0;
	char *str;
	va_list argu;

	va_start(argu, format);
	while (format && format[i] != '\0')
	{
		switch (format[i])
		{
			case 'c':
				printf("%c", va_arg(argu, int));
				break;
			case 'i':
				printf("%d", va_arg(argu, int));
				break;
			case 'f':
				printf("%f", va_arg(argu, double));
				break;
			case 's':
				str = va_arg(argu, char *);
				if (str)
				{
					printf("%s", str);
					break;
				}
				printf("(nil)");
				break;
			default:
				i++;
				continue;
		}

		if (format[i + 1] != '\0')
			printf(", ");

		i++;
	}
	printf("\n");
	va_end(argu);
}

#include "function_pointers.h"
#include <stdio.h>
/**
 * print_name - prints name using ponter to function
 * @name: string
 * @f: pointer to function
 * Return: void
 */

void print_name(char *name, void (*f)(char *))
{
	if (name == NULL || f == NULL)
	{
		return;
	}

	f(name);
}

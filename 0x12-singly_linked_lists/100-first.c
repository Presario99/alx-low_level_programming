#include <stdio.h>

void printme(void) __attribute__((constructor));

/**
 * printme - prints a sentence before the main
 */

void printme(void)
{
	printf("You're beat! and yet, you must allow,\nI bore my house upon my back!\n");
}

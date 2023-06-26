#include "main.h"

/**
 * swap_int - it swaps the value of tow integers
 *
 * @a: stored value for first integer
 * @b: stored value for second integer
 *
 */
void swap_int(int *a, int *b)
{
	int c = *a;
	*a = *b;
	*b = c;
}

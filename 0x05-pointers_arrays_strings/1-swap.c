#include "main.h"

/**
 * swap_int - swaps two integers
 * @a: an integer
 * @b: an integer
 */
void swap_int(int *a, int *b)
{
	int c;

	c = *a;
	*a = *b;
	*b = c;
}

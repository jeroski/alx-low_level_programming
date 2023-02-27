#include "main.h"

/**
 * swap_int - swaping the values of two integers
 * @a: swaped value
 * @b: swaped value
 *
 * Retunr: 0.
 */
void swap_int(int *a, int *b)
{
	int f;

	f = *a;
	*a = *b;
	*b = f;
}

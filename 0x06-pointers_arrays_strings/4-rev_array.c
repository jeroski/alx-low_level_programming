#include "main.h"
#include <string.h>
/**
 *reverse_array -> reverse the content of an array of integers
 *@a: int to be reversed
 *@n: numbers of array
 *Return: 0.
 */
void reverse_array(int *a, int n)
{
	{
	int *p, i, aux, k;

	p = a;

	for (i = 1; i < n; i++)
	{
		p++;
	}

	for (k = 0; k < i / 2; k++)
	{
		aux = a[k];
		a[k] = *p;
		*p = aux;
		p--;
	}
}
}

#include "main.h"

/**
 *_memset - function that fills memory with constant byte
 *@s: momory area
 *@b: constant byte to fill
 *@n: byte of memory area to fill
 *Return: memory area filled
 */
char *_memset(char *s, char b, unsigned int n)
{
	unsigned int i;

	for (i = 0; i < n; i++)
	{
		s[i] = b;
	}
	return (s);
}

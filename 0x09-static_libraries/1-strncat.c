#include "main.h"
#include <stdio.h>

/**
 * _strncat - a function that concatenate tow string
 * @dest: concatenated string
 * @src: concatenated string
 * @n: concatenated string
 *
 * Return: char
 */
char *_strncat(char *dest, char *src, int n)
{
	int dlen = 0, j = 0;

	while (dest[dlen])
	{
		dlen++;
	}

	while (j < n && src[j])
	{
		dest[dlen] = src[j];
		dlen++;
		j++;
	}

	dest[dlen + n + 1] = '\0';

	return (dest);
}

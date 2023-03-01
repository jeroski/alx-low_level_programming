#include "main.h"
#include <stdio.h>

/**
 * _strcat - a function to appends the src string to the dest string
 * @dest: appended string
 * @src: appended string
 * Return: char
 */
char *_strcat(char *dest, char *src)
{
	int str = 0, i;

	while (dest[str])
	{
		str++;
	}

	for (i = 0; src[i] != 0; i++)
	{
		dest[str] = src[i];
		str++;
	}

	dest[str] = '\0';
	return (dest);
}

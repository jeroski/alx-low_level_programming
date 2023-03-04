#include "main.h"

/**
 *_strchr - a functions that locates a character in a string
 *@s: parameter1
 *@c: parameter2
 *Return: char
 */
char *_strchr(char *s, char c)
{
	int i;

	for (i = 0; i < *s; i++)
	{
		if (s[i] == c)
		{
			s += i;
			return (s);
		}
	}
	return ('\0');
}

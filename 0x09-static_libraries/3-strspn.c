#include "main.h"
#include <stddef.h>

/**
 *_strspn - getting the length of a prefix substring
 *@s: number of bytes to be return
 *@accept: accepted string
 *Return: nuber of bytes
 */
unsigned int _strspn(char *s, char *accept)
{
	unsigned int a = 0, b, t = 0;

	while (accept[a])
	{
		b = 0;

		while (s[b] != 32)
		{
			if (accept[a] == s[b])
			{
				t++;
			}

			b++;
		}

		a++;
	}

	return (t);
}

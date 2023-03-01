#include "main.h"
#include <string.h>
/**
 *string_toupper - changes all lowercase letters of a string to uppercase
 *@str: character to be changed
 *Return: string
 */
char *string_toupper(char *str)
{
	int a = 0;

	while (str[a])
	{
		if (str[a] >= 97 && str[a] <= 122)
		{
			str[a] -= 32;
		}

		a++;
	}

	return (str);
}

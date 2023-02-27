#include "main.h"

/**
 * puts2 - print every character of a string
 * @str: character of string
 *
 * Return: printed character
 */
void puts2(char *str)
{
	int i = 0;

	for (; str[i] != '\0'; i++)
	{
		if ((i % 2) == 0)
			_putchar(str[i]);
		else
			continue;
	}
	_putchar('\n');
}

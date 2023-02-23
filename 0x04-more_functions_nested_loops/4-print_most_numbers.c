#include "main.h"

/**
 * print_most_numbers - print 0 to 9 without 2 and 4
 *
 * Return: 0 to 9 without 2 and 4
 */
void print_most_numbers(void)
{
	int c = 0;

	for (; c <= 9; c++)
	{
		if (c == 2 || c == 4)
		{
			continue;
		}
		else
		{
			_putchar(c + '0');
		}
	}
	_putchar('\n');
}

#include "main.h"

/**
 * print_square - print a square
 * @size: the number of square
 *
 * Return: empty
 */
void print_square(int size)
{
	int c, y;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < size; c++)
		{
			for (y = 0; y < size; y++)
			{
				_putchar('#');
			}

			_putchar('\n');
		}
	}
}

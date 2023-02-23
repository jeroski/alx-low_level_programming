#include "main.h"

/**
 * print_triangle - print a triangle
 * @size: the number of triangle
 *
 * Return: empty
 */
void print_triangle(int size)
{
	int c, y, z;

	if (size <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c <= size; c++)
		{
			for (y = 0; y <= size; y++)
			{
				_putchar(32);
			}

			for (z = 0; z <= c; z++)
			{
				_putchar(35);
			}

			_putchar('\n');
		}
	}
}


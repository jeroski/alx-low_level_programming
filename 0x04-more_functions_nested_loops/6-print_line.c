#include "main.h"

/**
 * print_line - function that draws a straight line in the terminal
 * @n: number of line to  draw
 *
 * Return: line to be drawn
 */
void print_line(int n)
{
	int c;

	if (n <= 0)
	{
		_putchar('\n');
	}
	else
	{
		for (c = 0; c < n; c++)
	{
		_putchar('_');
	}

		_putchar('\n');
	}
}


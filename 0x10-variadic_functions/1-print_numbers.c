#include "variadic_functions.h"
#include <stdarg.h>
#include <stdio.h>

/**
 *print_numbers - function that prints numbers, followed by a new line
 *@separator: string to be printed between numbers
 *@n: numberof intergers passed to the function
 *@...: variable number of integers to print
 *
 */
void print_numbers(const char *separator, const unsigned int n, ...)
{
	va_list gun;
	unsigned int i;

	va_start(gun, n);
	for (i = 0; i < n; i++)
	{
		printf("%d", va_arg(gun, int));
	if (i != (n - 1) && separator != NULL)
		printf("%s", separator);
	}
	va_end(gun);

	printf("\n");
}
